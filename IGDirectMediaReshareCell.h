//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

#import "IGCoreTextLinkHandler.h"

@class IGCoreTextView, IGImageProgressView, IGPost, IGProfilePictureImageView, IGVideoIndicatorView, NSString, UIImageView, UILabel, UIView;

@interface IGDirectMediaReshareCell : IGDirectContentCell <IGCoreTextLinkHandler>
{
    UIView *_shareContainerView;
    IGPost *_post;
    IGImageProgressView *_postImageView;
    IGProfilePictureImageView *_postProfilePicture;
    UILabel *_usernameLabel;
    IGCoreTextView *_captionView;
    UIView *_photoSeparatorTopLine;
    UIView *_photoSeparatorBottomLine;
    IGVideoIndicatorView *_videoIndicatorView;
    UIImageView *_chevronView;
}

+ (float)cellHeightForReshare:(id)arg1 withWidth:(float)arg2;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) IGVideoIndicatorView *videoIndicatorView; // @synthesize videoIndicatorView=_videoIndicatorView;
@property(retain, nonatomic) UIView *photoSeparatorBottomLine; // @synthesize photoSeparatorBottomLine=_photoSeparatorBottomLine;
@property(retain, nonatomic) UIView *photoSeparatorTopLine; // @synthesize photoSeparatorTopLine=_photoSeparatorTopLine;
@property(retain, nonatomic) IGCoreTextView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) IGProfilePictureImageView *postProfilePicture; // @synthesize postProfilePicture=_postProfilePicture;
@property(retain, nonatomic) IGImageProgressView *postImageView; // @synthesize postImageView=_postImageView;
@property(retain, nonatomic) IGPost *post; // @synthesize post=_post;
@property(retain, nonatomic) UIView *shareContainerView; // @synthesize shareContainerView=_shareContainerView;
- (void).cxx_destruct;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)setHighlighted:(BOOL)arg1;
- (id)highlightedBackgroundColor;
- (id)defaultBackgroundColor;
- (id)defaultBorderColor;
- (void)layoutSubviews;
- (void)setContent:(id)arg1;
- (struct CGRect)tapTargetFrame;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

