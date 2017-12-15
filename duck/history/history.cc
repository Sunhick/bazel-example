// Copyright (C) 2017 by Sunil

#include "history/history.h"

#include <iostream>

using namespace std;
using namespace bazel101::history;

History::History() { }

History::~History() { }

void History::clearHistory() {
  cout << "clearing history" << endl;
}
