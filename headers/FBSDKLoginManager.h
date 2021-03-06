//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKURLOpening.h"
#import "FBSDKWebDialogDelegate.h"

@class FBSDKKeychainStore, FBSDKLoginManagerLogger, NSSet, NSString, UIViewController;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening, FBSDKWebDialogDelegate>
{
    CDUnknownBlockType _handler;
    FBSDKLoginManagerLogger *_logger;
    BOOL _performingLogIn;
    FBSDKKeychainStore *_keychainStore;
    unsigned int _defaultAudience;
    unsigned int _loginBehavior;
    UIViewController *_fromViewController;
    NSSet *_requestedPermissions;
}

+ (id)stringForChallenge;
+ (void)renewSystemCredentials:(CDUnknownBlockType)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSSet *requestedPermissions; // @synthesize requestedPermissions=_requestedPermissions;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) unsigned int loginBehavior; // @synthesize loginBehavior=_loginBehavior;
@property(nonatomic) unsigned int defaultAudience; // @synthesize defaultAudience=_defaultAudience;
- (void).cxx_destruct;
- (void)setRequestedPermissions:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1;
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;
- (void)storeExpectedChallenge:(id)arg1;
- (void)logInWithBehavior:(unsigned int)arg1;
- (void)logInWithPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)logInParametersWithPermissions:(id)arg1;
- (id)loadExpectedChallenge;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (void)determineRecentlyGrantedPermissions:(id *)arg1 recentlyDeclinedPermissions:(id *)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4;
- (void)completeAuthentication:(id)arg1 expectChallenge:(BOOL)arg2;
- (void)assertPermissions:(id)arg1;
- (void)logOut;
- (void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithPublishPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)logInWithReadPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)handleImplicitCancelOfLogIn;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)performBrowserLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performNativeLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fallbackToNativeBehavior;
- (void)continueSystemLogInWithTokenString:(id)arg1 error:(id)arg2 state:(id)arg3;
- (void)performSystemLogIn;
- (void)beginSystemLogIn;
- (void)webDialogDidCancel:(id)arg1;
- (void)webDialog:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)performWebLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

