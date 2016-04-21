//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGExploreFeedViewController.h"

#import "IGAnalyticsModule.h"
#import "IGFeedStatusViewDataSource.h"
#import "IGNetworkSourceDelegate.h"

@class IGNetworkSource, NSMutableSet, NSString;

@interface IGExploreClusterViewController : IGExploreFeedViewController <IGFeedStatusViewDataSource, IGNetworkSourceDelegate, IGAnalyticsModule>
{
    IGNetworkSource *_networkSource;
    int _networkSourceStatus;
    NSMutableSet *_loggedImpressions;
    NSString *_clusterKey;
}

@property(retain, nonatomic) NSString *clusterKey; // @synthesize clusterKey=_clusterKey;
@property(retain, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(nonatomic) int networkSourceStatus; // @synthesize networkSourceStatus=_networkSourceStatus;
@property(retain, nonatomic) IGNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
- (void).cxx_destruct;
- (id)analyticsModule;
- (BOOL)enableNavState;
- (int)viewType;
- (void)logMediaImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(int)arg3 mediaIndex:(unsigned int)arg4;
- (void)logFollow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)logTap:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(unsigned int)arg3;
- (void)logEvent:(id)arg1 item:(id)arg2 atPosition:(unsigned int)arg3 fullScreen:(BOOL)arg4;
- (id)errorMessage;
- (id)emptyMessage;
- (BOOL)failedWithAuthorizationError;
- (unsigned int)itemCount;
- (BOOL)moreAvailable;
- (BOOL)loadedOnce;
@property(readonly, nonatomic) int status;
- (void)followStatusNotification:(id)arg1;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2;
- (void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)didDisplayObject:(id)arg1 atIndex:(int)arg2;
- (void)willDisplayObject:(id)arg1 atIndex:(int)arg2;
- (void)didUnfollowObject:(id)arg1 atIndex:(int)arg2;
- (void)didFollowObject:(id)arg1 atIndex:(int)arg2;
- (void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)didSelectObject:(id)arg1 atIndex:(int)arg2;
- (id)exploreViewModelForObject:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (id)feedStatusViewDataSource;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithClusterKey:(id)arg1 type:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

