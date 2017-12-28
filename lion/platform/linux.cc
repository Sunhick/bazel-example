/**
 * linux.cc
 */

#include "platform/linux.h"
#include <iostream>

using namespace std;

void linux::show() {
  cout << "show UI using gtk+" << endl;
}

std::unique_ptr<ui> createUI() {
  return std::make_unique<linux>();
}
