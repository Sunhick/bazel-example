/**
 * default.cc
 */

#include "platform/default-ui.h"
#include <iostream>

using namespace std;

void defaultui::show() {
  cout << "show UI using default ui" << endl;
}

std::unique_ptr<ui> createUI() {
  return std::make_unique<defaultui>();
}
