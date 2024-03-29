// Copyright (C) 2017 by Sunil

#include "console/console.h"

using std::cout;
using std::endl;

namespace bazel101 {
namespace console {

Console::Console() {
  // No op
}

Console::~Console() {
  // no op
}

void Console::print(std::string msg) {
#ifdef VERBOSE
  auto id = "<def>";
#else
  auto id = "<undef>";
#endif
  cout << "ID: " << id << " MSG: " << msg << endl;

#ifdef MORE
  cout << "More ....defined" << endl;
#endif
}

} // namespace console
} // namespace bazel101
