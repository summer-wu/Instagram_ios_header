//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMixiAuthDelegate.h"
#import "IGServiceHelperProtocol.h"

@class IGNonCurrentUserDefaults, NSString;

@interface IGMixiHelper : NSObject <IGMixiAuthDelegate, IGServiceHelperProtocol>
{
    NSString *_accessToken;
    IGNonCurrentUserDefaults *_sessionUserDefaults;
}

+ (id)accessTokenKey;
+ (id)serviceName;
+ (void)clearForUserPK:(id)arg1;
+ (id)shortServiceName;
+ (id)sharedHelper;
@property(retain, nonatomic) IGNonCurrentUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)reauthorizationNeedsLogin;
- (void)fetchTokenFinished:(id)arg1;
- (void)onFetchTokenFailed;
- (id)refreshToken;
- (void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3;
- (void)mixiAuthControllerLoginFailed:(id)arg1;
- (void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2;
- (BOOL)hasEverBeenConfigured;
- (id)sharingInfo;
- (BOOL)requiresLocationCoordinate;
- (BOOL)supportsMediaType:(int)arg1;
- (BOOL)isAvailableInCurrentLocale;
- (BOOL)needsToReauthorize;
- (void)setNeedsReauthorization;
- (void)reauthorizeIfNeeded;
- (void)reauthorize;
- (BOOL)isConfigurable;
- (BOOL)hasAdvancedOptions;
- (BOOL)isConfigured;
- (void)logout;
- (void)logoutAndUnlink;
- (BOOL)hasSelectedPrivacySetting;
@property(nonatomic) int currentPrivacySetting;
- (id)getMixiConstantForPrivacySetting:(int)arg1;
- (id)getLabelForPrivacySetting:(int)arg1;
- (id)authURLString;
- (id)viewControllerForAdvancedOptions;
- (id)callbackURLString;
- (id)clientID;
- (id)initWithSessionUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

