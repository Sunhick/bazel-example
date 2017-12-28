/**
 * windows.h - defines a generic ui elements for windows
 */

#ifndef WINDOWS_H
#define WINDOWS_H

#include "platform/ui.h"

class windows : public ui {
public:
  void show() override;
};

#endif /* WINDOWS_H */
