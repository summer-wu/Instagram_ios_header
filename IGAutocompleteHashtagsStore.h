//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAbstractStore.h"

#import "IGAutocompleteAbstractStoreProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IGAutocompleteHashtagsStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol>
{
    NSMutableDictionary *_hashtagExpirations;
    NSMutableArray *_allHashtags;
    NSMutableArray *_recentHashtags;
}

+ (void)clearForUserPK:(id)arg1;
@property(retain, nonatomic) NSMutableArray *recentHashtags; // @synthesize recentHashtags=_recentHashtags;
@property(retain, nonatomic) NSMutableArray *allHashtags; // @synthesize allHashtags=_allHashtags;
- (void).cxx_destruct;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)clearHistory;
- (void)archive;
- (void)setExpiresForHashtag:(id)arg1;
- (void)removeExpiredHashtags;
- (id)hashtagsInString:(id)arg1;
- (int)indexOfHashtag:(id)arg1 inArray:(id)arg2;
- (void)addHashtag:(id)arg1 addToRecent:(BOOL)arg2;
- (void)addHashtagsFromText:(id)arg1 addToRecent:(BOOL)arg2;
- (id)regexPattern;
- (id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

