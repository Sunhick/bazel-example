// Copyright (C) 2017 by Sunil

#include "graphics/graphics.h"
#include "main/common.h"
#include "session/session.h"
#include "gnu/profile.h"
#include "history/history.h"

#include <console/console.h>

#include <iostream>

using namespace std;
using namespace bazel101::console;
using namespace bazel101::profile;
using namespace bazel101::history;

int main(UNUSED int argc, UNUSED char **argv) {
  Console writer;
  writer.print("Welcome to bazel101 tutorials!");

  graphics_init();
  start_session();

  Profile pf;
  pf.describe();

  History h;
  h.clearHistory();

  return 0;
}
