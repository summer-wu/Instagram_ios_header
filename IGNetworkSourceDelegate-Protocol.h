//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNetworkSource, NSError;

@protocol IGNetworkSourceDelegate <NSObject>
- (void)networkSource:(IGNetworkSource *)arg1 didFailWithError:(NSError *)arg2;
- (void)networkSource:(IGNetworkSource *)arg1 didFetchMoreWithObject:(id)arg2;
- (void)networkSource:(IGNetworkSource *)arg1 didFetchObject:(id)arg2;
@end

