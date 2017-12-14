// Copyright (C) 2017 by Sunil

#include "console/console.h"
#include "graphics/graphics.h"
#include "main/common.h"
#include "session/session.h"

#include <iostream>

using namespace std;
using namespace bazel101::console;

int main(UNUSED int argc, UNUSED char **argv) {
  Console writer;
  writer.print("Welcome to bazel101 tutorials!");

  graphics_init();
  start_session();

  return 0;
}
