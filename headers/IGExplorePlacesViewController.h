//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGExploreFeedViewController.h"

#import "IGAnalyticsModule.h"
#import "IGExplorePlacesNetworkSourceDelegate.h"

@class IGExplorePlacesNetworkSource, NSMutableSet, NSString;

@interface IGExplorePlacesViewController : IGExploreFeedViewController <IGExplorePlacesNetworkSourceDelegate, IGAnalyticsModule>
{
    IGExplorePlacesNetworkSource *_dataSource;
    NSMutableSet *_loggedImpressions;
}

@property(retain, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(retain, nonatomic) IGExplorePlacesNetworkSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)analyticsModule;
- (BOOL)enableNavState;
- (int)viewType;
- (void)logMediaImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(int)arg3 mediaIndex:(unsigned int)arg4;
- (void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)logTap:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(unsigned int)arg3;
- (id)explorePlacesNetworkSourceLocationForRequest:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2;
- (void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
- (void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)didDisplayObject:(id)arg1 atIndex:(int)arg2;
- (void)willDisplayObject:(id)arg1 atIndex:(int)arg2;
- (void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)didSelectObject:(id)arg1 atIndex:(int)arg2;
- (id)exploreViewModelForObject:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (id)feedStatusViewDataSource;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
