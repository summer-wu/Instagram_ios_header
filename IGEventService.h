//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNetworkSourceDelegate.h"

@class IGEventFeedDataArchiver, IGEventFeedDataCache, IGEventServiceConfiguration, IGNetworkSource, NSArray, NSString;

@interface IGEventService : NSObject <IGNetworkSourceDelegate>
{
    NSString *_eventTitle;
    NSArray *_cachedPosts;
    id <IGEventServiceNetworkDelegate> _networkDelegate;
    id <IGEventServiceCacheDelegate> _cacheDelegate;
    IGNetworkSource *_networkSource;
    IGEventFeedDataArchiver *_feedDataArchiver;
    IGEventFeedDataCache *_feedDataCache;
    IGEventServiceConfiguration *_configuration;
    NSString *_eventId;
    NSString *_eventHeader;
    NSString *_currentUserPK;
}

+ (void)reportUserDismissPost:(id)arg1;
@property(readonly, nonatomic) NSString *currentUserPK; // @synthesize currentUserPK=_currentUserPK;
@property(readonly, nonatomic) NSString *eventHeader; // @synthesize eventHeader=_eventHeader;
@property(readonly, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(readonly, nonatomic) IGEventServiceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IGEventFeedDataCache *feedDataCache; // @synthesize feedDataCache=_feedDataCache;
@property(readonly, nonatomic) IGEventFeedDataArchiver *feedDataArchiver; // @synthesize feedDataArchiver=_feedDataArchiver;
@property(readonly, nonatomic) IGNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
@property(nonatomic) __weak id <IGEventServiceCacheDelegate> cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
@property(nonatomic) __weak id <IGEventServiceNetworkDelegate> networkDelegate; // @synthesize networkDelegate=_networkDelegate;
- (void).cxx_destruct;
- (void)cacheEventFeedData:(id)arg1;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2;
- (id)networkParams;
- (void)cancelRequest;
- (void)fetchMorePosts;
- (void)fetchPosts;
- (void)loadPostsFromCache;
@property(readonly, nonatomic) NSArray *cachedPosts; // @synthesize cachedPosts=_cachedPosts;
@property(readonly, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
- (id)initWithConfiguration:(id)arg1 feedDataCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

