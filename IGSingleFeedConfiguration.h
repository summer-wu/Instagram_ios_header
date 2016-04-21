//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedConfigurationType.h"

@class IGDefaultFeedConfiguration, NSString;

@interface IGSingleFeedConfiguration : NSObject <IGFeedConfigurationType>
{
    IGDefaultFeedConfiguration *_defaultConfig;
}

@property(readonly, nonatomic) IGDefaultFeedConfiguration *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;
- (id)analyticsModule;
- (BOOL)showAlbumSubscriptionTray;
- (BOOL)showFindFriendsWhenEmpty;
- (double)warmStartRefreshInterval;
- (BOOL)shouldPrefetchMediaForFeedItems;
- (BOOL)loadsTitleFromNetworkSource;
- (BOOL)shouldPullToRefresh;
- (BOOL)showRefreshButton;
- (BOOL)shouldAutoplayVideos;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

