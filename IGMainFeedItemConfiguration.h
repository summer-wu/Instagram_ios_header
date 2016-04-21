//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedItemConfigurationType.h"

@class IGDefaultFeedItemConfiguration, NSString;

@interface IGMainFeedItemConfiguration : NSObject <IGFeedItemConfigurationType>
{
    IGDefaultFeedItemConfiguration *_defaultConfig;
}

@property(readonly, nonatomic) IGDefaultFeedItemConfiguration *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;
- (BOOL)shouldPopAfterDeletingFeedItem:(id)arg1;
- (BOOL)shouldShowInlineInsightsForFeedItem:(id)arg1;
- (BOOL)shouldTightenUpWhiteSpace:(id)arg1;
- (id)likeRequestParametersForFeedItem:(id)arg1;
- (BOOL)shouldUseChevronMenuForFeedItem:(id)arg1;
- (int)timestampTypeForFeedItem:(id)arg1;
- (BOOL)allowHidingFeedItem:(id)arg1;
- (int)hiddenCellTypeForFeedItem:(id)arg1;
- (BOOL)enablePlaceHolderForPivotGrid:(id)arg1;
- (BOOL)enablePivotGridAfterCommentForFeedItem:(id)arg1;
- (BOOL)shouldCollapseCaptionForFeedItem:(id)arg1;
- (BOOL)shouldDisplaySingleCellForFeedItem:(id)arg1;
- (BOOL)shouldHideFeedItem:(id)arg1;
- (BOOL)showExploreContextForFeedItem:(id)arg1;
- (BOOL)allowSponsoredContextForFeedItem:(id)arg1;
- (BOOL)showFollowButtonForFeedItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

