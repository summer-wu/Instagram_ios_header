//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, IGRetroRegistrationBackgroundView, NSString, NSURL, UIButton, UILabel;

@interface IGAccountTakeOverView : UIView
{
    IGRetroRegistrationBackgroundView *_backgroundView;
    UIButton *_confirmLoginButton;
    IGProfilePictureImageView *_profilePictureView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSURL *_profilePictureURL;
    NSString *_username;
}

@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGProfilePictureImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(retain, nonatomic) UIButton *confirmLoginButton; // @synthesize confirmLoginButton=_confirmLoginButton;
@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 username:(id)arg2 profilePictureURL:(id)arg3;

@end

