//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemTracker.h"

@interface IGSponsoredFeedItemTracker : IGFeedItemTracker
{
}

- (void)addEntriesForEvent:(id)arg1 trackingToken:(id)arg2 reason:(id)arg3 extra:(id)arg4;
- (void)trackBrandLiftQuestion:(id)arg1 withAnswers:(id)arg2 forSurvey:(id)arg3;
- (void)trackBrandLiftSurveyWillAppearForSurvey:(id)arg1;
- (void)trackSurveyAnsweredForSurveyQuestion:(id)arg1 withAnswer:(id)arg2;
- (void)trackHideReasonForTrackingToken:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3;
- (void)trackHideReasonForFeedItem:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3;
- (void)trackHideReasonSelectedForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 withExtraDictionary:(id)arg3;
- (void)trackBrandLiftQuestionDidDismiss:(id)arg1;
- (void)trackBrandLiftSurveyPrimerResponseForSurvey:(id)arg1 withResponse:(BOOL)arg2;
- (void)trackSurveyPrimerResponseForQuestion:(id)arg1 withResponse:(BOOL)arg2;
- (void)trackSurveyWillAppearForSurveyQuestion:(id)arg1;
- (id)trackInvalidationForFeedItem:(id)arg1 withReason:(id)arg2;
- (id)init;

@end
