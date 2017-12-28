/**
 * windows.cc
 */

#include "platform/windows.h"
#include <iostream>

using namespace std;

void windows::show() {
  cout << "show UI using WPF" << endl;
}

std::unique_ptr<ui> createUI() {
  return std::make_unique<windows>();
}
