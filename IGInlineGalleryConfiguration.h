//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInlineGalleryConfiguration : NSObject
{
}

+ (int)intValueOf:(id)arg1 withDefault:(id)arg2;
+ (int)maxItemsToShow;
+ (int)backoffUnitInHours;
+ (int)newMediaThreshold;
+ (int)maxBackoffInDays;
+ (int)maxDismissals;
+ (BOOL)noBackoffEnabled;
+ (BOOL)longPressShortcutEnabled;
+ (BOOL)isEnabled;
+ (BOOL)canAutoPromptInlineGallery:(id)arg1;
+ (void)updateLastInteractedTime;
+ (void)resetDismissalCount;
+ (void)incrementDismissalCount;
+ (id)lastInteractedTime;
+ (int)consecutiveHardDismissals;
+ (id)debugSummaryString;
+ (id)effectiveQEGroupName;

@end
