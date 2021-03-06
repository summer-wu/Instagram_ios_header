//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface IGEventViewerAnalyticsLogger : NSObject
{
    NSString *_eventId;
    unsigned int _eventType;
    NSString *_sessionId;
    float _cachedProgress;
    float _cachedDuration;
    NSDate *_loadTimeBegin;
    NSString *_endPointValue;
}

+ (id)endPointValueForEventType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSString *endPointValue; // @synthesize endPointValue=_endPointValue;
@property(retain, nonatomic) NSDate *loadTimeBegin; // @synthesize loadTimeBegin=_loadTimeBegin;
@property(nonatomic) float cachedDuration; // @synthesize cachedDuration=_cachedDuration;
@property(nonatomic) float cachedProgress; // @synthesize cachedProgress=_cachedProgress;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)logVideoTimespentForPost:(id)arg1;
- (void)logVideoShouldStartPlayingForPost:(id)arg1;
- (void)logImpressionForPost:(id)arg1;
- (void)configureEvent:(id)arg1 withDataForPost:(id)arg2 atIndexPath:(id)arg3 mediaDuration:(float)arg4 timeSpentSeconds:(float)arg5;
- (void)configureEvent:(id)arg1 withEventId:(id)arg2;
- (void)logEventExitTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 exitSource:(id)arg5;
- (void)logUserAttributionTapForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4 withOption:(unsigned int)arg5;
- (void)logMediaLikeForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4;
- (void)logMediaImpressionForPost:(id)arg1 atIndexPath:(id)arg2 mediaDuration:(float)arg3 timeSpentSeconds:(float)arg4;
- (void)logTimeToLoadEndSuccess:(BOOL)arg1;
- (void)logTimeToLoadBegin;
- (void)logEntryPointTapWithMediaID:(id)arg1;
- (void)logEntryPointImpression;
- (id)initWithEventId:(id)arg1 eventType:(unsigned int)arg2;

@end

