// Copyright (C) 2017 by Sunil

#include <iostream>

#include <console/console.h>

// #include "3rd-party/include/math.h"
#include "gnu/profile.h"
#include "graphics/graphics.h"
#include "history/history.h"
#include "main/common.h"
#include "session/session.h"
#include "platform/ui.h"

using namespace std;
using namespace bazel101::console;
using namespace bazel101::profile;
using namespace bazel101::history;

// using math::adder;

class Greet;

int main(UNUSED int argc, UNUSED char **argv) {
  hello();
  
  Console writer;
  writer.print("Welcome to bazel101 tutorials!");

  graphics_init();
  start_session();

  Profile pf;
  pf.describe();

  History h;
  h.clearHistory();

  // adder calc;
  // cout << "sum (90, 10) = " << calc.add(90, 10) << endl;

  // // calling objective c from c++
  // Greet g;
  // greet(&g, nullptr);

  std::unique_ptr<ui> ui = createUI();
  ui->show();
  return 0;
}
