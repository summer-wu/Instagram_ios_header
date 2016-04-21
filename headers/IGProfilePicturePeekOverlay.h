//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGProfilePictureImageViewDelegate.h"

@class IGProfilePictureImageView, NSString, UIButton;

@interface IGProfilePicturePeekOverlay : UIView <IGProfilePictureImageViewDelegate>
{
    id <IGProfilePicturePeekDelegate> _delegate;
    UIView *_overlayView;
    UIButton *_editButton;
    UIButton *_dismissButton;
    UIButton *_menuButton;
    IGProfilePictureImageView *_profilePic;
}

@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
@property(retain, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <IGProfilePicturePeekDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)profilePictureTapped:(id)arg1;
- (void)menuButtonTapped;
- (void)editButtonTapped;
- (void)dismissButtonTapped;
- (void)dismiss;
- (void)presentWithUser:(id)arg1 animated:(BOOL)arg2;
- (void)applyAnimationIsAppearing:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (struct CGSize)fullSizeForProfilePic;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
