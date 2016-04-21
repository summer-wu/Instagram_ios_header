//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "IGTextFieldDelegate.h"

@class IGCoreTextView, IGRetroRegistrationTextField, NSString, UIButton, UIImageView, UILabel;

@interface IGRetroRegistrationSMSVerificationScrollView : UIScrollView <IGTextFieldDelegate>
{
    UIButton *_nextButton;
    IGRetroRegistrationTextField *_codeField;
    IGCoreTextView *_resendCodeTextView;
    IGCoreTextView *_requestSupportTextView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGCoreTextView *requestSupportTextView; // @synthesize requestSupportTextView=_requestSupportTextView;
@property(retain, nonatomic) IGCoreTextView *resendCodeTextView; // @synthesize resendCodeTextView=_resendCodeTextView;
@property(retain, nonatomic) IGRetroRegistrationTextField *codeField; // @synthesize codeField=_codeField;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (id)resendCodeStyledString;
- (void)updateResendCodeTextViewWithSecondsLeft:(int)arg1;
- (void)updateDescriptionWithPhoneNumber:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

