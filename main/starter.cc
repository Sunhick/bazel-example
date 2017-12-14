// Copyright (C) 2017 by Sunil

#include "console/console.h"
#include "graphics/graphics.h"

// #include "main/common.h"
#define UNUSED __attribute__((__unused__))

#include <iostream>

using namespace std;
using namespace bazel101::console;

int main(UNUSED int argc, UNUSED char **argv) {
  Console writer;
  writer.print("Welcome to bazel101 tutorials!");

  graphics_init();

  return 0;
}
