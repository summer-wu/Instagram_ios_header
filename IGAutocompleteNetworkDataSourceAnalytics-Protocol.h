//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol IGAutocompleteNetworkDataSourceAnalytics <NSObject>
@property(readonly, nonatomic) BOOL isResponseQueryLocation;
@property(readonly, nonatomic) BOOL responseWasFoundInQueryCache;
@property(readonly, nonatomic) NSDictionary *analyticsInfo;
@property(readonly, copy, nonatomic) NSString *responseRankToken;
@property(readonly, copy, nonatomic) NSString *responseQueryText;
- (BOOL)isLocalResult:(id)arg1;
- (int)numberOfLocalResults;
@end

