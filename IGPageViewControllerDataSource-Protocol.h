//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPageViewController, UIViewController;

@protocol IGPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(IGPageViewController *)arg1 controllerForIndex:(int)arg2;
- (int)numberOfPagesForPageViewController:(IGPageViewController *)arg1;
@end
