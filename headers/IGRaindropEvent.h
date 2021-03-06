//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class IGRaindropAddLocationEvent, IGRaindropAppLaunchEvent, IGRaindropBeaconEvent, IGRaindropCancelLocationResultsEvent, IGRaindropClusterEvent, IGRaindropCommentEvent, IGRaindropCreateCustomLocationEvent, IGRaindropExploreClickEvent, IGRaindropExploreImpressionEvent, IGRaindropFeedItemEvent, IGRaindropFollowEvent, IGRaindropFollowFailEvent, IGRaindropFollowImpressionEvent, IGRaindropHideEvent, IGRaindropLikeEvent, IGRaindropLoadLocationResultsEvent, IGRaindropMarqueeClickEvent, IGRaindropMarqueeImpressionEvent, IGRaindropPhotoClickEvent, IGRaindropPhotoImpressionEvent, IGRaindropPlaceClickEvent, IGRaindropPlaceImpressionEvent, IGRaindropSearchAbandonEvent, IGRaindropSearchBackspaceEvent, IGRaindropSearchBeginEvent, IGRaindropSearchCancelEvent, IGRaindropSearchEvent, IGRaindropSearchQueryEvent, IGRaindropSearchTypingEvent, IGRaindropShareMediaURLEvent, IGRaindropSharePersonURLEvent, IGRaindropTagClickEvent, IGRaindropTagImpressionEvent, IGRaindropTapLocationResultEvent, IGRaindropUserClickEvent, IGRaindropUserImpressionEvent, IGRaindropViewHashtagPageItem, IGRaindropViewPlacePageItem, IGRaindropViewPopularEvent, IGRaindropViewSearchResultEvent, IGRaindropViewSwitchEvent;

@interface IGRaindropEvent : TBaseStruct
{
    IGRaindropCommentEvent *__thrift_commentEvent;
    IGRaindropLikeEvent *__thrift_likeEvent;
    IGRaindropFollowEvent *__thrift_followEvent;
    IGRaindropSearchEvent *__thrift_searchEvent;
    IGRaindropViewSearchResultEvent *__thrift_viewSearchResultEvent;
    IGRaindropViewPopularEvent *__thrift_viewPopularEvent;
    IGRaindropAppLaunchEvent *__thrift_appLaunchEvent;
    IGRaindropShareMediaURLEvent *__thrift_shareMediaURLEvent;
    IGRaindropSharePersonURLEvent *__thrift_sharePersonURLEvent;
    IGRaindropViewSwitchEvent *__thrift_viewSwitchEvent;
    IGRaindropViewHashtagPageItem *__thrift_viewHashtagPageItemEvent;
    IGRaindropViewPlacePageItem *__thrift_viewPlacePageItemEvent;
    IGRaindropSearchBeginEvent *__thrift_searchBeginEvent;
    IGRaindropAddLocationEvent *__thrift_addLocationEvent;
    IGRaindropLoadLocationResultsEvent *__thrift_loadLocationResultsEvent;
    IGRaindropTapLocationResultEvent *__thrift_tapLocationResultEvent;
    IGRaindropCancelLocationResultsEvent *__thrift_cancelLocationResultsEvent;
    IGRaindropCreateCustomLocationEvent *__thrift_createCustomLocationEvent;
    IGRaindropSearchCancelEvent *__thrift_searchCancelEvent;
    IGRaindropClusterEvent *__thrift_clusterEvent;
    IGRaindropFeedItemEvent *__thrift_feedItemEvent;
    IGRaindropHideEvent *__thrift_hideEvent;
    IGRaindropUserClickEvent *__thrift_userClickEvent;
    IGRaindropUserImpressionEvent *__thrift_userImpressionEvent;
    IGRaindropMarqueeClickEvent *__thrift_marqueeClickEvent;
    IGRaindropMarqueeImpressionEvent *__thrift_marqueeImpressionEvent;
    IGRaindropTagClickEvent *__thrift_tagClickEvent;
    IGRaindropTagImpressionEvent *__thrift_tagImpressionEvent;
    IGRaindropPlaceClickEvent *__thrift_placeClickEvent;
    IGRaindropPlaceImpressionEvent *__thrift_placeImpressionEvent;
    IGRaindropPhotoClickEvent *__thrift_photoClickEvent;
    IGRaindropPhotoImpressionEvent *__thrift_photoImpressionEvent;
    IGRaindropFollowImpressionEvent *__thrift_followImpressionEvent;
    IGRaindropFollowFailEvent *__thrift_followFailEvent;
    IGRaindropSearchTypingEvent *__thrift_searchTypingEvent;
    IGRaindropSearchQueryEvent *__thrift_searchQueryEvent;
    IGRaindropSearchBackspaceEvent *__thrift_searchBackspaceEvent;
    IGRaindropSearchAbandonEvent *__thrift_searchAbandonEvent;
    IGRaindropBeaconEvent *__thrift_beaconEvent;
    IGRaindropExploreImpressionEvent *__thrift_exploreImpressionEvent;
    IGRaindropExploreClickEvent *__thrift_exploreClickEvent;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithExploreClickEvent:(id)arg1;
- (id)initWithExploreImpressionEvent:(id)arg1;
- (id)initWithBeaconEvent:(id)arg1;
- (id)initWithSearchAbandonEvent:(id)arg1;
- (id)initWithSearchBackspaceEvent:(id)arg1;
- (id)initWithSearchQueryEvent:(id)arg1;
- (id)initWithSearchTypingEvent:(id)arg1;
- (id)initWithFollowFailEvent:(id)arg1;
- (id)initWithFollowImpressionEvent:(id)arg1;
- (id)initWithPhotoImpressionEvent:(id)arg1;
- (id)initWithPhotoClickEvent:(id)arg1;
- (id)initWithPlaceImpressionEvent:(id)arg1;
- (id)initWithPlaceClickEvent:(id)arg1;
- (id)initWithTagImpressionEvent:(id)arg1;
- (id)initWithTagClickEvent:(id)arg1;
- (id)initWithMarqueeImpressionEvent:(id)arg1;
- (id)initWithMarqueeClickEvent:(id)arg1;
- (id)initWithUserImpressionEvent:(id)arg1;
- (id)initWithUserClickEvent:(id)arg1;
- (id)initWithHideEvent:(id)arg1;
- (id)initWithFeedItemEvent:(id)arg1;
- (id)initWithClusterEvent:(id)arg1;
- (id)initWithSearchCancelEvent:(id)arg1;
- (id)initWithCreateCustomLocationEvent:(id)arg1;
- (id)initWithCancelLocationResultsEvent:(id)arg1;
- (id)initWithTapLocationResultEvent:(id)arg1;
- (id)initWithLoadLocationResultsEvent:(id)arg1;
- (id)initWithAddLocationEvent:(id)arg1;
- (id)initWithSearchBeginEvent:(id)arg1;
- (id)initWithViewPlacePageItemEvent:(id)arg1;
- (id)initWithViewHashtagPageItemEvent:(id)arg1;
- (id)initWithViewSwitchEvent:(id)arg1;
- (id)initWithSharePersonURLEvent:(id)arg1;
- (id)initWithShareMediaURLEvent:(id)arg1;
- (id)initWithAppLaunchEvent:(id)arg1;
- (id)initWithViewPopularEvent:(id)arg1;
- (id)initWithViewSearchResultEvent:(id)arg1;
- (id)initWithSearchEvent:(id)arg1;
- (id)initWithFollowEvent:(id)arg1;
- (id)initWithLikeEvent:(id)arg1;
- (id)initWithCommentEvent:(id)arg1;
- (id)init;

@end

