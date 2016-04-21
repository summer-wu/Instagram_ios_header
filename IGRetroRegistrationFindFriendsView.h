//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGRetroRegistrationBackgroundView, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface IGRetroRegistrationFindFriendsView : UIView
{
    UIButton *_connectButton;
    IGRetroRegistrationBackgroundView *_backgroundView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    IGCoreTextView *_descriptionLabel;
    NSString *_descriptionText;
    UIImage *_buttonIcon;
    UIImage *_iconImage;
    NSString *_buttonText;
}

@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) IGCoreTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *connectButton; // @synthesize connectButton=_connectButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 iconImage:(id)arg2 titleText:(id)arg3 subTitleText:(id)arg4 buttonText:(id)arg5 buttonIcon:(id)arg6 descriptionText:(id)arg7;

@end

