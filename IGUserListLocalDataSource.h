//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAbstractDataSource.h"

#import "IGAutocompleteDataSource.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IGUserListLocalDataSource : IGAutocompleteAbstractDataSource <IGAutocompleteDataSource>
{
    BOOL _excludesCurrentUser;
    NSMutableDictionary *_additionalUsers;
    NSDictionary *_additionalUserSearchStrings;
}

@property(retain, nonatomic) NSDictionary *additionalUserSearchStrings; // @synthesize additionalUserSearchStrings=_additionalUserSearchStrings;
@property(retain, nonatomic) NSMutableDictionary *additionalUsers; // @synthesize additionalUsers=_additionalUsers;
@property(nonatomic) BOOL excludesCurrentUser; // @synthesize excludesCurrentUser=_excludesCurrentUser;
- (void).cxx_destruct;
- (void)setFilteredResults:(id)arg1;
- (void)filterUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3;
- (id)usersForPKs:(id)arg1 fromSet:(int)arg2;
- (id)searchStringsForCharacter:(id)arg1;
- (CDUnknownBlockType)fullComparator:(id)arg1;
- (CDUnknownBlockType)usernameComparator;
- (void)addUsersForFeedItem:(id)arg1;
- (void)addUsers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

