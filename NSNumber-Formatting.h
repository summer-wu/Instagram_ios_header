//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

@interface NSNumber (Formatting)
+ (id)commaNumberFormatter;
- (id)formatNumberOfPosts;
- (id)formatNumberOfLikes;
- (id)commaSeparatedString;
- (id)distanceString;
- (id)distanceStringUsingMetricSystem:(BOOL)arg1;
- (id)distanceStringForDistance:(double)arg1 usingFormatString:(id)arg2 fractionDigits:(unsigned int)arg3;
- (id)durationString;
- (void)getDurationHours:(int *)arg1 minutes:(int *)arg2 seconds:(int *)arg3;
- (id)stringForViewCount;
- (id)stringForFollowerCountVoiceOver;
- (id)stringForFollowerCount;
- (id)abbreviatedString;
@end

