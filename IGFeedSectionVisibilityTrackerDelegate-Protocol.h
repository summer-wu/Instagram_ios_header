//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGFeedSectionVisibilityTracker;

@protocol IGFeedSectionVisibilityTrackerDelegate <NSObject>
- (void)tracker:(IGFeedSectionVisibilityTracker *)arg1 feedSectionDidDisappear:(IGFeedItem *)arg2;
- (void)tracker:(IGFeedSectionVisibilityTracker *)arg1 feedSectionDidAppear:(IGFeedItem *)arg2;
@end
