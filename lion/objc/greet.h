// Copyright (C) 2017 by Sunil

#ifndef GREET_H
#define GREET_H

#include <UIKit/UIKit.h>
#import "interface.h"

@interface Greet : NSObject {
  int val;
}

- (int)greet:(void *)aParameter;
@end

#endif /* GREET_H */
