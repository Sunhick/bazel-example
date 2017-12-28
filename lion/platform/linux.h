/**
 * linux.h - defines a generic ui elements for linux
 */

#ifndef LINUX_H
#define LINUX_H

#include "platform/ui.h"

class linux : public ui {
public:
  void show() override;
};

#endif /* LINUX_H */
