//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGRetroRegistrationNextButton, IGRetroRegistrationPhoneNumberField, UIButton, UIImageView, UILabel;

@interface IGRetroRegistrationPhoneNumberFrontView : UIView
{
    UIButton *_switchToEmailRegiButton;
    IGRetroRegistrationPhoneNumberField *_phoneNumberField;
    IGRetroRegistrationNextButton *_nextButton;
    IGCoreTextView *_termView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
@property(retain, nonatomic) IGRetroRegistrationNextButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) IGRetroRegistrationPhoneNumberField *phoneNumberField; // @synthesize phoneNumberField=_phoneNumberField;
@property(retain, nonatomic) UIButton *switchToEmailRegiButton; // @synthesize switchToEmailRegiButton=_switchToEmailRegiButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

