//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class IGCoreTextView, IGRetroRegistrationNextButton, IGRetroRegistrationTextField, UIButton, UIImageView, UILabel;

@interface IGRetroRegistrationAddEmailScrollView : UIScrollView
{
    IGRetroRegistrationNextButton *_nextButton;
    UIButton *_switchToPhoneRegiButton;
    IGRetroRegistrationTextField *_emailField;
    IGCoreTextView *_termView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
@property(retain, nonatomic) IGRetroRegistrationTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) UIButton *switchToPhoneRegiButton; // @synthesize switchToPhoneRegiButton=_switchToPhoneRegiButton;
@property(retain, nonatomic) IGRetroRegistrationNextButton *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

