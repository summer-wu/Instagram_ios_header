//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGPageMediaTracker : NSObject
{
}

+ (id)eventWithSuffix:(id)arg1;
+ (id)logEvent:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(BOOL)arg4 extra:(id)arg5;
+ (id)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(BOOL)arg4 extra:(id)arg5;
+ (void)mediaDidStartViewingForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(BOOL)arg3 extra:(id)arg4;
+ (void)mediaDidDisappearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(BOOL)arg3 extra:(id)arg4;
+ (void)mediaDidAppearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(BOOL)arg3 extra:(id)arg4;
+ (id)tracker;

@end

