//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGProfilePictureHelperDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "IGTextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBSDKAccessToken, IGProfilePictureHelper, IGRequest, IGRetroRegistrationSignUpView, NSDictionary, NSMutableArray, NSString, NSTimer, UIImage, UITapGestureRecognizer;

@interface IGRetroRegistrationSignUpViewController : UIViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, UIGestureRecognizerDelegate>
{
    BOOL _submitting;
    BOOL _skipEmail;
    BOOL _usernameFieldTappedOnce;
    id <IGRetroRegistrationSignUpViewControllerDelegate> _delegate;
    NSMutableArray *_suggestedUsernames;
    IGRetroRegistrationSignUpView *_signUpView;
    IGProfilePictureHelper *_profilePictureHelper;
    NSTimer *_usernameCheckTimer;
    NSDictionary *_facebookUserInfo;
    FBSDKAccessToken *_facebookAccessToken;
    UITapGestureRecognizer *_tapGesture;
    IGRequest *_signUpRequest;
    IGRequest *_usernameRequest;
    int _suggestedUsernameIndex;
    NSString *_email;
    NSString *_userDisplayName;
    NSString *_fbToken;
    UIImage *_profilePhoto;
    NSString *_forceSignUpCode;
    NSString *_SMSSignUpCode;
    NSString *_phoneNumber;
}

@property(nonatomic) BOOL usernameFieldTappedOnce; // @synthesize usernameFieldTappedOnce=_usernameFieldTappedOnce;
@property(nonatomic) BOOL skipEmail; // @synthesize skipEmail=_skipEmail;
@property(nonatomic) BOOL submitting; // @synthesize submitting=_submitting;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *SMSSignUpCode; // @synthesize SMSSignUpCode=_SMSSignUpCode;
@property(readonly, copy, nonatomic) NSString *forceSignUpCode; // @synthesize forceSignUpCode=_forceSignUpCode;
@property(retain, nonatomic) UIImage *profilePhoto; // @synthesize profilePhoto=_profilePhoto;
@property(copy, nonatomic) NSString *fbToken; // @synthesize fbToken=_fbToken;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) int suggestedUsernameIndex; // @synthesize suggestedUsernameIndex=_suggestedUsernameIndex;
@property(retain, nonatomic) IGRequest *usernameRequest; // @synthesize usernameRequest=_usernameRequest;
@property(retain, nonatomic) IGRequest *signUpRequest; // @synthesize signUpRequest=_signUpRequest;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) NSDictionary *facebookUserInfo; // @synthesize facebookUserInfo=_facebookUserInfo;
@property(retain, nonatomic) NSTimer *usernameCheckTimer; // @synthesize usernameCheckTimer=_usernameCheckTimer;
@property(retain, nonatomic) IGProfilePictureHelper *profilePictureHelper; // @synthesize profilePictureHelper=_profilePictureHelper;
@property(retain, nonatomic) IGRetroRegistrationSignUpView *signUpView; // @synthesize signUpView=_signUpView;
@property(retain, nonatomic) NSMutableArray *suggestedUsernames; // @synthesize suggestedUsernames=_suggestedUsernames;
@property(nonatomic) __weak id <IGRetroRegistrationSignUpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)prefillUsernameFieldOnFirstTap;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)pasteFacebookUserInfo;
- (id)dictionaryRepresentation;
- (void)signUpfailureHandler:(id)arg1;
- (void)accountRegistrationFailedWithResponse:(id)arg1;
- (void)accountCreatedWithUserInformation:(id)arg1;
- (void)signUpSuccessHandler:(id)arg1;
- (void)registerAccount;
- (void)validateUsername;
- (void)startOrRestartUsernameCheckTimer;
- (void)cleanUpUsernameField:(id)arg1;
- (void)validateUsernameField:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)validateUsernameField:(id)arg1 requestDelay:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)isPasswordFieldsValid;
- (void)keyboardWillShow:(id)arg1;
- (void)backgroundTapped;
- (void)refreshButtonTapped;
- (void)profilePictureTapped;
- (void)fillSuggestedUsername;
- (void)loginButtonTapped;
- (void)nextButtonTapped;
- (void)profilePictureHelperDidGetNewFacebookAccessToken:(id)arg1;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3;
- (void)profilePictureTapped:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSuggestedUsernames:(id)arg1 email:(id)arg2 phoneNumber:(id)arg3 facebookInfo:(id)arg4 facebookAccessToken:(id)arg5 SMSSignUpCode:(id)arg6 forceSignUpCode:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

