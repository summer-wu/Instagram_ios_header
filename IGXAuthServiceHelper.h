//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGServiceHelperLoginProtocol.h"
#import "IGServiceHelperProtocol.h"

@class IGNonCurrentUserDefaults, IGUser, NSString, OAConsumer, OAToken;

@interface IGXAuthServiceHelper : NSObject <IGServiceHelperProtocol, IGServiceHelperLoginProtocol>
{
    BOOL _loginPending;
    OAConsumer *_consumer;
    OAToken *_accessToken;
    NSString *_tokenString;
    IGUser *_currentUser;
    IGNonCurrentUserDefaults *_sessionUserDefaults;
}

+ (void)logoutFromDefaults:(id)arg1;
+ (void)clearForUserPK:(id)arg1;
+ (id)serviceName;
+ (id)shortServiceName;
@property(retain, nonatomic) IGNonCurrentUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(retain, nonatomic) OAToken *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) BOOL loginPending; // @synthesize loginPending=_loginPending;
@property(retain, nonatomic) OAConsumer *consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (id)loginFooterMessage;
- (id)loginErrorMessage;
- (void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
- (int)numberOfExtraRowsForLogin;
- (id)sharingInfo;
- (BOOL)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (BOOL)requiresLocationCoordinate;
- (BOOL)supportsMediaType:(int)arg1;
- (BOOL)isAvailableInCurrentLocale;
- (BOOL)isConfigurable;
- (BOOL)hasAdvancedOptions;
- (BOOL)isConfigured;
- (void)setAccessTokenFromTokenString:(id)arg1;
- (void)logout;
- (void)logoutAndUnlink;
- (void)saveLoginInfo;
- (void)requestTokenTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)requestTokenTicket:(id)arg1 didFinishWithData:(id)arg2;
- (void)doAuthWithUsername:(id)arg1 password:(id)arg2;
- (id)viewControllerForAdvancedOptions;
- (id)loginViewController;
- (id)URLString;
- (id)consumerSecret;
- (id)consumerKey;
- (id)currentUsername;
- (id)prefUsernameKey;
- (int)usernameType;
- (id)initWithSessionUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

