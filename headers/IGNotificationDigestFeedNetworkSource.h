//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedNetworkSource.h"

@class NSString;

@interface IGNotificationDigestFeedNetworkSource : IGFeedNetworkSource
{
    NSString *_forcedUserIDs;
}

@property(retain, nonatomic) NSString *forcedUserIDs; // @synthesize forcedUserIDs=_forcedUserIDs;
- (void).cxx_destruct;
- (void)loadEntriesFromResponse:(id)arg1 clearOut:(BOOL)arg2 rankToken:(id)arg3 secure:(BOOL)arg4;
- (void)loadPromotionBannerInfoFromResponse:(id)arg1;
- (BOOL)fetchDataWithParameters:(id)arg1;
- (id)initWithPostClass:(Class)arg1;

@end

