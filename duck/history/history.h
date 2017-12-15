// Copyright (C) 2017 by Sunil

#ifndef HISTORY_H
#define HISTORY_H

namespace bazel101 {
namespace history {

class History {
 public:
  History();
  virtual ~History();
  void clearHistory();
}; // class History


}  // namespace history
}  // namespace bazel101

#endif /* HISTORY_H */
