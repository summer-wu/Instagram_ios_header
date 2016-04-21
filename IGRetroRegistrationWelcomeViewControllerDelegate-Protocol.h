//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKAccessToken, IGResetPasswordViewController, IGRetroRegistrationWelcomeViewController, IGTwoFactorInfo, NSDictionary;

@protocol IGRetroRegistrationWelcomeViewControllerDelegate <NSObject>
- (BOOL)welcomeViewControllerIsSwitchingUsers:(IGRetroRegistrationWelcomeViewController *)arg1;
- (void)welcomeViewControllerWantsToDismiss:(IGRetroRegistrationWelcomeViewController *)arg1;
- (void)welcomeViewController:(IGRetroRegistrationWelcomeViewController *)arg1 proceedTwoFactorWithInfo:(IGTwoFactorInfo *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
- (void)welcomeViewController:(IGRetroRegistrationWelcomeViewController *)arg1 resetPasswordWithViewController:(IGResetPasswordViewController *)arg2;
- (void)welcomeViewController:(IGRetroRegistrationWelcomeViewController *)arg1 userEmailTakenAutoLoginWithLoggedInDict:(NSDictionary *)arg2;
- (void)welcomeViewController:(IGRetroRegistrationWelcomeViewController *)arg1 proceedRegistrationWithFBInfo:(NSDictionary *)arg2 facebookAccessToken:(FBSDKAccessToken *)arg3;
- (void)welcomeViewControllerDidTapSignUpButton:(IGRetroRegistrationWelcomeViewController *)arg1;
- (void)welcomeViewControllerDidTapLoginButton:(IGRetroRegistrationWelcomeViewController *)arg1;

@optional
- (void)welcomeViewControllerDidTapFBButton:(IGRetroRegistrationWelcomeViewController *)arg1;
@end

