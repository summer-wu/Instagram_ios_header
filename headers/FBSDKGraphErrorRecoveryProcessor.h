//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class FBSDKErrorRecoveryAttempter, NSError, NSString, UIAlertView;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject <UIAlertViewDelegate>
{
    FBSDKErrorRecoveryAttempter *_recoveryAttempter;
    NSError *_error;
    UIAlertView *_alertView;
    id <FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;
}

@property(retain, nonatomic) id <FBSDKGraphErrorRecoveryProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

