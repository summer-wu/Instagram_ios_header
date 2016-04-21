//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGNonCurrentUserDefaults, NSArray, NSString;

@interface IGDirectRecipientManager : NSObject <IGUserSessionObject>
{
    NSString *_userSessionPK;
    IGNonCurrentUserDefaults *_sessionUserDefaults;
    NSArray *_cachedDefaultUserRecipients;
    double _lastUserFetchTime;
}

+ (id)sessionDirectRecipientManager;
@property(nonatomic) double lastUserFetchTime; // @synthesize lastUserFetchTime=_lastUserFetchTime;
@property(retain, nonatomic) NSArray *cachedDefaultUserRecipients; // @synthesize cachedDefaultUserRecipients=_cachedDefaultUserRecipients;
@property(retain, nonatomic) IGNonCurrentUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void).cxx_destruct;
- (void)refetchDefaultRecipientsIfNeeded;
- (id)followingUsers;
- (BOOL)useNewEndpoint;
- (id)defaultRecipientsIncludingThreads;
- (id)fallbackRecipientsUsersOnly;
- (id)defaultRecipientsUsersOnly;
- (void)dealloc;
- (id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

