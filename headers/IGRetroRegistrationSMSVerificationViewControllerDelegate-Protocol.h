//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRetroRegistrationSMSVerificationViewController, NSString;

@protocol IGRetroRegistrationSMSVerificationViewControllerDelegate <NSObject>
- (BOOL)smsVerificationViewControllerIsSwitchingUsers:(IGRetroRegistrationSMSVerificationViewController *)arg1;
- (void)smsVerificationViewController:(IGRetroRegistrationSMSVerificationViewController *)arg1 wantsToPopViewControllerAnimated:(BOOL)arg2;
- (void)smsVerificationViewController:(IGRetroRegistrationSMSVerificationViewController *)arg1 didRequestSupportWithUsername:(NSString *)arg2 twoFactorIdentifier:(NSString *)arg3;
@end
