//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSObject<AppiraterDelegate>, NSString, UIAlertView;

@interface Appirater : NSObject <UIAlertViewDelegate, SKStoreProductViewControllerDelegate>
{
    UIAlertView *ratingAlert;
    NSObject<AppiraterDelegate> *_delegate;
    int _debugMode;
    NSString *_appName;
    NSString *_alertMessage;
    NSString *_alertTitle;
    NSString *_cancelButtonText;
    NSString *_rateButtonText;
    NSString *_rateLaterButtonText;
    NSString *_sendFeedbackButtonText;
}

+ (void)closeModal;
+ (void)rateApp;
+ (id)getRootViewController;
+ (void)userDidSignificantEvent:(BOOL)arg1;
+ (void)appEnteredForeground:(BOOL)arg1;
+ (void)appLaunched:(BOOL)arg1;
+ (void)appLaunched;
+ (void)setUserDefaults:(id)arg1;
+ (id)sharedInstance;
+ (void)setRatingDisabled:(BOOL)arg1;
+ (void)setModalOpen:(BOOL)arg1;
+ (void)setStatusBarStyle:(int)arg1;
+ (void)setUsesAnimation:(BOOL)arg1;
+ (void)setDelegate:(id)arg1;
+ (void)setTimeBeforeReminding:(double)arg1;
+ (void)setSignificantEventsUntilPrompt:(int)arg1;
+ (void)setUsesUntilPrompt:(int)arg1;
+ (void)setDaysUntilPrompt:(double)arg1;
+ (void)setAppId:(id)arg1;
+ (void)setLogStringBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *sendFeedbackButtonText; // @synthesize sendFeedbackButtonText=_sendFeedbackButtonText;
@property(copy, nonatomic) NSString *rateLaterButtonText; // @synthesize rateLaterButtonText=_rateLaterButtonText;
@property(copy, nonatomic) NSString *rateButtonText; // @synthesize rateButtonText=_rateButtonText;
@property(copy, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) int debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) __weak NSObject<AppiraterDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIAlertView *ratingAlert; // @synthesize ratingAlert;
- (void).cxx_destruct;
- (int)appUpgradesSeedCount;
- (int)appUpgradesCount;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)appWillResignActive;
- (void)hideRatingAlert;
- (void)incrementSignificantEventAndRate:(BOOL)arg1;
- (void)incrementAndRate:(BOOL)arg1;
- (void)incrementSignificantEventCount;
- (void)incrementUseCount;
- (void)resetWithCurrentVersion;
- (BOOL)trackingCurrentVersion;
- (BOOL)ratingConditionsHaveBeenMet;
- (void)showRatingAlert;
- (id)init;
- (BOOL)connectedToNetwork;
- (void)setDebugModeEnabled:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
