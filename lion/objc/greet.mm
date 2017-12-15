// Copyright (C) 2017 by Sunil

#import "greet.h"
#import <Foundation/Foundation.h>

@implementation Greet

int greet(void *self, void *param) {
  // call objective c method
  Greet *instance = (Greet*)(__bridge NSObject *)(self);
  return [instance greet:param];
}

- (int)greet:(void *)aParameter {
  NSLog(@"Welcome to objective-c land!");
  return 21;
}
@end
