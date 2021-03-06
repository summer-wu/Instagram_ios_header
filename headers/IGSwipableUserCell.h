//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

#import "IGFollowButtonDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGFollowButton, IGProfilePictureImageView, NSString, UIButton, UILabel, UIScrollView, UIView;

@interface IGSwipableUserCell : IGTableViewCell <UIScrollViewDelegate, IGFollowButtonDelegate>
{
    BOOL _separatorHidden;
    id <IGSwipableUserCellDelegate> _delegate;
    IGProfilePictureImageView *_profilePicImageView;
    UILabel *_usernameLabel;
    UILabel *_userDetailLabel;
    IGFollowButton *_followButton;
    UIButton *_dismissButton;
    UIScrollView *_swipableContentScrollView;
    UIView *_swipableContentView;
    UIView *_separatorLineView;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
}

@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIView *swipableContentView; // @synthesize swipableContentView=_swipableContentView;
@property(retain, nonatomic) UIScrollView *swipableContentScrollView; // @synthesize swipableContentScrollView=_swipableContentScrollView;
@property(nonatomic) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *userDetailLabel; // @synthesize userDetailLabel=_userDetailLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) IGProfilePictureImageView *profilePicImageView; // @synthesize profilePicImageView=_profilePicImageView;
@property(nonatomic) __weak id <IGSwipableUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followButtonDidUpdateButtonState:(id)arg1;
- (void)followButton:(id)arg1 tappedWithAction:(int)arg2;
- (void)dismissButtonTapped:(id)arg1;
- (void)cellTapped:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

