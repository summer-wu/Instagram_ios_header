//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKAppInviteContent, UIViewController;

@interface FBSDKAppInviteDialog : NSObject
{
    UIViewController *_fromViewController;
    id <FBSDKAppInviteDialogDelegate> _delegate;
    FBSDKAppInviteContent *_content;
}

+ (id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3;
+ (id)showWithContent:(id)arg1 delegate:(id)arg2;
+ (void)initialize;
@property(copy, nonatomic) FBSDKAppInviteContent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <FBSDKAppInviteDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void).cxx_destruct;
- (void)_logDialogShow;
- (void)_invokeDelegateDidFailWithError:(id)arg1;
- (void)_invokeDelegateDidCompleteWithResults:(id)arg1;
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;
- (BOOL)_canShowNative;
- (BOOL)validateWithError:(id *)arg1;
- (BOOL)show;
- (BOOL)canShow;

@end

