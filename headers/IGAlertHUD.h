//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, UIActivityIndicatorView, UILabel;

@interface IGAlertHUD : UIView
{
    UILabel *_textLabel;
    UIActivityIndicatorView *_spinner;
    NSDate *_suppressAlertsUntil;
}

+ (id)sharedHUD;
- (void).cxx_destruct;
- (void)onAppResumed:(id)arg1;
- (void)hideAfterDelay:(float)arg1 animated:(BOOL)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)hideAfterShowingText:(id)arg1 animated:(BOOL)arg2;
- (void)hideAfterShowingText:(id)arg1;
- (void)hideAnimated:(BOOL)arg1;
- (void)hide;
- (void)doShowWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(BOOL)arg3 animated:(BOOL)arg4 force:(BOOL)arg5;
- (void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(BOOL)arg3 animated:(BOOL)arg4;
- (void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(BOOL)arg3;
- (void)showWithProgressIndicatorInView:(id)arg1 animated:(BOOL)arg2;
- (void)showWithProgressIndicatorInView:(id)arg1;
- (void)sizeToFitView:(id)arg1;
- (BOOL)canDisplay;
- (id)init;
- (void)dealloc;

@end

