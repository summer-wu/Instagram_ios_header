//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSMSConfirmationController;

@protocol IGSMSConfirmationControllerDelegate <NSObject>
- (void)smsConfirmationControllerWantsToChangePhoneNumber:(IGSMSConfirmationController *)arg1;
- (void)smsConfirmationControllerWantsToResendConfirmationCode:(IGSMSConfirmationController *)arg1;
- (void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(IGSMSConfirmationController *)arg1;
@end
