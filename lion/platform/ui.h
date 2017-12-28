/**
 * ui.h - defines a generic ui elements
 */

#ifndef UI_H
#define UI_H

#include <memory>

class ui {
 public:
  virtual void show() = 0;
};

extern std::unique_ptr<ui> createUI();

#endif /* UI_H */
