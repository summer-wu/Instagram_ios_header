//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGFacebookButton, IGRetroRegistrationBackgroundView, IGRetroRegistrationFacebookButtonSeperator, UIButton, UIImageView, UILabel;

@interface IGRetroRegistrationWelcomeView : UIView
{
    IGRetroRegistrationBackgroundView *_backgroundView;
    IGFacebookButton *_facebookButton;
    UIButton *_signUpButton;
    UIButton *_dismissButton;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    IGRetroRegistrationFacebookButtonSeperator *_facebookButtonSeparator;
}

@property(retain, nonatomic) IGRetroRegistrationFacebookButtonSeperator *facebookButtonSeparator; // @synthesize facebookButtonSeparator=_facebookButtonSeparator;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *signUpButton; // @synthesize signUpButton=_signUpButton;
@property(retain, nonatomic) IGFacebookButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)showDismissButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
