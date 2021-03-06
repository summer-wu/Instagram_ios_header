//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTimelineHeader.h"

#import "IGFollowButtonDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"

@class IGFeedItemHeaderViewModel, IGFollowButton, IGProfilePictureImageView, IGStringStyle, NSArray, NSObject<IGFeedItemHeaderDelegate>, NSString, UIButton, UIButton<IGSponsorableButton>, UILabel;

@interface IGFeedItemHeader : IGTimelineHeader <IGProfilePictureImageViewDelegate, IGFollowButtonDelegate>
{
    NSObject<IGFeedItemHeaderDelegate> *_delegate;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
    BOOL _alternateAccessibility;
    IGFeedItemHeaderViewModel *_viewModel;
    IGProfilePictureImageView *_profilePic;
    UIButton *_usernameButton;
    UILabel *_timestampLabel;
    UIButton *_locationButton;
    UIButton *_customizableButton;
    UIButton<IGSponsorableButton> *_sponsoredPostButton;
    IGFollowButton *_followButton;
    UIButton *_moreButton;
    UIButton *_expiringButton;
    IGStringStyle *_boldLinkStyle;
    IGStringStyle *_boldGrayStyle;
    IGStringStyle *_grayStyle;
    IGStringStyle *_boldGray7Style;
    NSArray *_accessibleElements;
}

@property(nonatomic) BOOL alternateAccessibility; // @synthesize alternateAccessibility=_alternateAccessibility;
@property(retain, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) IGStringStyle *boldGray7Style; // @synthesize boldGray7Style=_boldGray7Style;
@property(retain, nonatomic) IGStringStyle *grayStyle; // @synthesize grayStyle=_grayStyle;
@property(retain, nonatomic) IGStringStyle *boldGrayStyle; // @synthesize boldGrayStyle=_boldGrayStyle;
@property(retain, nonatomic) IGStringStyle *boldLinkStyle; // @synthesize boldLinkStyle=_boldLinkStyle;
@property(retain, nonatomic) UIButton *expiringButton; // @synthesize expiringButton=_expiringButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton<IGSponsorableButton> *sponsoredPostButton; // @synthesize sponsoredPostButton=_sponsoredPostButton;
@property(retain, nonatomic) UIButton *customizableButton; // @synthesize customizableButton=_customizableButton;
@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UIButton *usernameButton; // @synthesize usernameButton=_usernameButton;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
@property(readonly, nonatomic) IGFeedItemHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)layoutSubviews;
- (void)onLocationTapped;
- (void)onUsernameTapped;
- (void)profilePictureTapped:(id)arg1;
- (void)followButton:(id)arg1 tappedWithAction:(int)arg2;
- (void)followButtonDidUpdateButtonState:(id)arg1;
- (void)onPostUpdated;
- (void)onUserInfoChanged;
- (void)openUserViewFrom:(id)arg1;
- (id)accessibilityLabel;
- (void)onMoreButtonTapped:(id)arg1;
- (void)onCustomizableButtonPressed:(id)arg1;
- (void)prepareForReuse;
- (void)updateAccessoryViewAppearance;
- (void)updateAppearance;
- (void)configureWithViewModel:(id)arg1;
- (void)configureWithViewModel:(id)arg1 analyticsDelegate:(id)arg2 loggingDelegate:(id)arg3 delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

