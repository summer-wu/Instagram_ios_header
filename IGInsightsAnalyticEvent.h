//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInsightsAnalyticEvent : NSObject
{
}

+ (id)currentModule;
+ (id)sourceViewControllerFromStack:(id)arg1 startIndex:(int)arg2;
+ (id)scheduleEvent:(id)arg1 module:(id)arg2 withNoLatency:(BOOL)arg3 withNavState:(id)arg4;
+ (id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 module:(id)arg3 withNoLatency:(BOOL)arg4 withNavState:(id)arg5;
+ (id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 module:(id)arg3 withNoLatency:(BOOL)arg4;
+ (id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 withNoLatency:(BOOL)arg3;
+ (id)scheduleEvent:(id)arg1 withNoLatency:(BOOL)arg2;

@end
