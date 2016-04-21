//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedViewController_DEPRECATED.h"

#import "IGAnalyticsModule.h"
#import "IGExploreComposedPeopleYouFollowViewDelegate.h"
#import "IGLocationHeaderViewDelegate.h"
#import "IGRankedMediaViewDelegate.h"
#import "IGRelatedItemsHeaderViewDelegate.h"

@class IGExploreComposedPeopleYouFollowView, IGFeedItemPreviewingHandler, IGLocation, IGLocationHeaderView, IGRankedMediaView, IGRelatedItemsHeaderView, IGRelatedItemsService, IGVisitedRelatedItemsStore, NSArray, NSMutableSet, NSString;

@interface IGLocationDetailViewController : IGFeedViewController_DEPRECATED <IGRankedMediaViewDelegate, IGLocationHeaderViewDelegate, IGExploreComposedPeopleYouFollowViewDelegate, IGRelatedItemsHeaderViewDelegate, IGAnalyticsModule>
{
    BOOL _shouldUpdateLocationHeaderView;
    IGLocation *_location;
    NSArray *_forceMediaIDs;
    IGRankedMediaView *_rankedMediaView;
    IGLocationHeaderView *_locationHeaderView;
    IGExploreComposedPeopleYouFollowView *_peopleYouFollowView;
    NSMutableSet *_loggedImpressions;
    IGFeedItemPreviewingHandler *_thumbnailPreviewDelegate;
    IGRelatedItemsService *_relatedLocationsService;
    IGRelatedItemsHeaderView *_relatedLocationsHeaderView;
    IGVisitedRelatedItemsStore *_visitedLocationsStore;
}

@property(nonatomic) BOOL shouldUpdateLocationHeaderView; // @synthesize shouldUpdateLocationHeaderView=_shouldUpdateLocationHeaderView;
@property(retain, nonatomic) IGVisitedRelatedItemsStore *visitedLocationsStore; // @synthesize visitedLocationsStore=_visitedLocationsStore;
@property(retain, nonatomic) IGRelatedItemsHeaderView *relatedLocationsHeaderView; // @synthesize relatedLocationsHeaderView=_relatedLocationsHeaderView;
@property(retain, nonatomic) IGRelatedItemsService *relatedLocationsService; // @synthesize relatedLocationsService=_relatedLocationsService;
@property(retain, nonatomic) IGFeedItemPreviewingHandler *thumbnailPreviewDelegate; // @synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate;
@property(retain, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(nonatomic) __weak IGExploreComposedPeopleYouFollowView *peopleYouFollowView; // @synthesize peopleYouFollowView=_peopleYouFollowView;
@property(nonatomic) __weak IGLocationHeaderView *locationHeaderView; // @synthesize locationHeaderView=_locationHeaderView;
@property(retain, nonatomic) IGRankedMediaView *rankedMediaView; // @synthesize rankedMediaView=_rankedMediaView;
@property(retain, nonatomic) NSArray *forceMediaIDs; // @synthesize forceMediaIDs=_forceMediaIDs;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)logMediaImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(int)arg3 sectionNumber:(int)arg4 sectionType:(int)arg5;
- (void)logMediaClick:(id)arg1 atIndex:(int)arg2 sectionNumber:(int)arg3 sectionType:(int)arg4;
- (void)presentLocationShareView;
- (void)updateRankedViewVisibility;
- (void)updateCellVisibility:(id)arg1 atIndex:(id)arg2;
- (id)analyticsExtras;
- (id)analyticsModule;
- (BOOL)enableNavState;
- (int)viewType;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)locationHeaderViewMapTapped:(id)arg1;
- (void)rankedMediaView:(id)arg1 didSelectItemAtIndex:(unsigned int)arg2;
- (void)logSocialItemClickForPost:(id)arg1 atIndex:(unsigned int)arg2;
- (void)composedPeopleYouFollowView:(id)arg1 didTapSocialItemAtIndex:(unsigned int)arg2;
- (void)logRelatedLocationClickForLocation:(id)arg1 atIndexPath:(id)arg2;
- (void)relatedItemsHeaderView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3;
- (void)relatedItemsHeaderView:(id)arg1 didTapItem:(id)arg2 atIndexPath:(id)arg3;
- (void)configureRelatedLocationsViewWithLocations:(id)arg1;
- (void)requestRelatedLocations;
- (void)onLocationInfoFailed:(id)arg1;
- (void)handleLoadedContentDidChange;
- (void)configureSocialSectionHeaderWithFeedNetworkSource:(id)arg1;
- (void)configureRankedHeaderWithFeedNetworkSource:(id)arg1;
- (void)configureLocationHeaderView;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
- (void)fetchData;
- (void)setLocationID:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
