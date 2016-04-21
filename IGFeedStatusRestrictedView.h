//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, IGSpringButton, IGUser, NSDictionary, NSString, UIImageView, UILabel;

@interface IGFeedStatusRestrictedView : UIView <IGCoreTextLinkHandler>
{
    id <IGFeedStatusRestrictedViewDelegate> _delegate;
    NSDictionary *_ageGateInfo;
    IGUser *_blockedUser;
    UIImageView *_restrictedIcon;
    IGCoreTextView *_learnMoreLink;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
    IGSpringButton *_leftButton;
    IGSpringButton *_rightButton;
    NSString *_title;
    NSString *_message;
    NSString *_learnMoreText;
    NSString *_learnMoreURLString;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
}

@property(copy, nonatomic) NSString *rightButtonText; // @synthesize rightButtonText=_rightButtonText;
@property(copy, nonatomic) NSString *leftButtonText; // @synthesize leftButtonText=_leftButtonText;
@property(copy, nonatomic) NSString *learnMoreURLString; // @synthesize learnMoreURLString=_learnMoreURLString;
@property(copy, nonatomic) NSString *learnMoreText; // @synthesize learnMoreText=_learnMoreText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IGSpringButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) IGSpringButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) IGCoreTextView *learnMoreLink; // @synthesize learnMoreLink=_learnMoreLink;
@property(retain, nonatomic) UIImageView *restrictedIcon; // @synthesize restrictedIcon=_restrictedIcon;
@property(retain, nonatomic) IGUser *blockedUser; // @synthesize blockedUser=_blockedUser;
@property(retain, nonatomic) NSDictionary *ageGateInfo; // @synthesize ageGateInfo=_ageGateInfo;
@property(nonatomic) __weak id <IGFeedStatusRestrictedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapRightButton;
- (void)didTapLeftButton;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)layoutButtons;
- (void)layoutMessages;
- (float)maxMessageWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

