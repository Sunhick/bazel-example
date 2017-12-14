// Copyright (C) 2017 by Sunil

#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>

namespace bazel101 {
namespace console {

class Console {
public:
  Console();
  virtual ~Console();
  void print(std::string message);
}; // class Console

} // namespace console
} // namespace bazel101

#endif /* CONSOLE_H */
