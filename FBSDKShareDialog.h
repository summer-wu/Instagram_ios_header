//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharingDialog.h"
#import "FBSDKWebDialogDelegate.h"

@class FBSDKWebDialog, NSString, UIViewController;

@interface FBSDKShareDialog : NSObject <FBSDKWebDialogDelegate, FBSDKSharingDialog>
{
    FBSDKWebDialog *_webDialog;
    BOOL _shouldFailOnDataError;
    id <FBSDKSharingDelegate> _delegate;
    id <FBSDKSharingContent> _shareContent;
    UIViewController *_fromViewController;
    unsigned int _mode;
}

+ (id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3;
+ (void)initialize;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) BOOL shouldFailOnDataError; // @synthesize shouldFailOnDataError=_shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logDialogShow;
- (void)_invokeDelegateDidFailWithError:(id)arg1;
- (void)_invokeDelegateDidCompleteWithResults:(id)arg1;
- (void)_invokeDelegateDidCancel;
- (BOOL)_validateVideoURL:(id)arg1 error:(id *)arg2;
- (BOOL)_validateShareContentForShareSheet:(id *)arg1;
- (BOOL)_validateShareContentForNative:(id *)arg1;
- (BOOL)_validateShareContentForFeed:(id *)arg1;
- (BOOL)_validateShareContentForBrowser:(id *)arg1;
- (BOOL)_useSafariViewController;
- (BOOL)_useNativeDialog;
- (BOOL)_showWeb:(id *)arg1;
- (BOOL)_showShareSheetWithCanShowError:(id *)arg1 validationError:(id *)arg2;
- (BOOL)_showNativeWithCanShowError:(id *)arg1 validationError:(id *)arg2;
- (BOOL)_showFeedWeb:(id *)arg1;
- (BOOL)_showFeedBrowser:(id *)arg1;
- (BOOL)_showBrowser:(id *)arg1;
- (void)_handleWebResponseParameters:(id)arg1 error:(id)arg2;
- (id)_contentURLs;
- (id)_contentImages;
- (void)_cleanUpWebDialog;
- (BOOL)_canUseFBShareSheet;
- (BOOL)_canAttributeThroughShareSheet;
- (BOOL)_canShowShareSheet;
- (BOOL)_canShowNative;
- (void)_loadNativeMethodName:(id *)arg1 methodVersion:(id *)arg2;
- (BOOL)_showAutomatic:(id *)arg1;
- (BOOL)_isDefaultToShareSheet;
- (void)webDialogDidCancel:(id)arg1;
- (void)webDialog:(id)arg1 didFailWithError:(id)arg2;
- (void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;
- (BOOL)validateWithError:(id *)arg1;
- (BOOL)show;
- (BOOL)canShow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

