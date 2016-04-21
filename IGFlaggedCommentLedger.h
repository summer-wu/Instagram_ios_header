//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGNonCurrentUserDefaults, NSMutableDictionary, NSString;

@interface IGFlaggedCommentLedger : NSObject <IGUserSessionClearableObject>
{
    NSMutableDictionary *_flaggedComments;
    IGNonCurrentUserDefaults *_sessionUserDefaults;
}

+ (void)clearForUserPK:(id)arg1;
@property(retain, nonatomic) IGNonCurrentUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
- (void).cxx_destruct;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)archive;
- (void)clear;
- (BOOL)containsComment:(id)arg1;
- (void)addComment:(id)arg1;
- (void)migrateUserDefaultsIfNecessary;
- (id)initWithSessionUserDefaults:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

