//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAutocompleteAsyncDataSource.h"
#import "IGAutocompleteNetworkDataSourceAnalytics.h"

@class IGRequest, IGService, NSDictionary, NSSet, NSString;

@interface IGBlendedSearchDataSource : NSObject <IGAutocompleteAsyncDataSource, IGAutocompleteNetworkDataSourceAnalytics>
{
    BOOL _searching;
    BOOL _isResponseQueryLocation;
    id <IGAutocompleteAsyncDataSourceDelegate> _delegate;
    IGRequest *_currentRequest;
    IGService *_service;
    NSSet *_hashtags;
    NSSet *_users;
    NSSet *_places;
    unsigned int _recentUserThreshold;
    NSString *_responseQueryText;
    NSString *_responseRankToken;
}

+ (id)itemsFromJson:(id)arg1 itemCreationBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL isResponseQueryLocation; // @synthesize isResponseQueryLocation=_isResponseQueryLocation;
@property(copy, nonatomic) NSString *responseRankToken; // @synthesize responseRankToken=_responseRankToken;
@property(copy, nonatomic) NSString *responseQueryText; // @synthesize responseQueryText=_responseQueryText;
@property(nonatomic) unsigned int recentUserThreshold; // @synthesize recentUserThreshold=_recentUserThreshold;
@property(readonly, nonatomic) NSSet *places; // @synthesize places=_places;
@property(readonly, nonatomic) NSSet *users; // @synthesize users=_users;
@property(readonly, nonatomic) NSSet *hashtags; // @synthesize hashtags=_hashtags;
@property(retain, nonatomic) IGService *service; // @synthesize service=_service;
@property(retain, nonatomic) IGRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) __weak id <IGAutocompleteAsyncDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
- (void).cxx_destruct;
- (void)clearResults;
- (BOOL)isLocalResult:(id)arg1;
- (int)numberOfLocalResults;
@property(readonly, nonatomic) BOOL responseWasFoundInQueryCache;
@property(readonly, nonatomic) NSDictionary *analyticsInfo;
- (id)blendedResults;
- (id)placeResults;
- (id)userResults;
- (id)hashtagResults;
- (void)handleResponse:(id)arg1;
- (void)fetchData;
- (void)fetchFrequentItemsWithRankToken:(id)arg1;
- (void)fetchDataForSearchQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3;
- (id)requestForQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3;
- (id)init;
- (id)resultForRow:(int)arg1;
- (unsigned int)numberOfResults;
- (id)allResults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
