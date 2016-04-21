//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGNonCurrentUserDefaults, NSMapTable, NSString;

@interface IGPublicThreadStore : NSObject <IGUserSessionClearableObject>
{
    NSString *_userSessionPK;
    IGNonCurrentUserDefaults *_sessionUserDefaults;
    NSMapTable *_threads;
}

+ (void)clearForUserPK:(id)arg1;
@property(retain, nonatomic) NSMapTable *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) IGNonCurrentUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void).cxx_destruct;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)onBackground;
- (id)fakeGetPublicThreads;
- (id)getThreadWithThreadID:(id)arg1;
- (void)getPublicThreadsWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

