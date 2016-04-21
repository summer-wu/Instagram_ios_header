//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectResponseOverlayable.h"
#import "IGImageViewDelegate.h"

@class IGDirectResponseOverlayViewV2XOutContentView, IGImageView, IGTapButton, NSString;

@interface IGDirectResponseOverlayViewV2 : UIView <IGDirectResponseOverlayable, IGImageViewDelegate>
{
    BOOL _presentationRequested;
    BOOL _presentationRequestAnimated;
    BOOL _blurredImageAvailable;
    id <IGDirectResponseOverlayViewDelegate> _delegate;
    UIView *_transparentView;
    IGImageView *_backgroundImageView;
    IGDirectResponseOverlayViewV2XOutContentView *_overlayContentView;
    IGTapButton *_overlayTappableElement;
}

@property(nonatomic) BOOL blurredImageAvailable; // @synthesize blurredImageAvailable=_blurredImageAvailable;
@property(nonatomic) BOOL presentationRequestAnimated; // @synthesize presentationRequestAnimated=_presentationRequestAnimated;
@property(nonatomic) BOOL presentationRequested; // @synthesize presentationRequested=_presentationRequested;
@property(readonly, nonatomic) IGTapButton *overlayTappableElement; // @synthesize overlayTappableElement=_overlayTappableElement;
@property(readonly, nonatomic) IGDirectResponseOverlayViewV2XOutContentView *overlayContentView; // @synthesize overlayContentView=_overlayContentView;
@property(readonly, nonatomic) IGImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(nonatomic) __weak id <IGDirectResponseOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissOverlayAnimated:(BOOL)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2;
- (void)imageViewLoadedImage:(id)arg1;
- (void)overlayContentViewTapped:(id)arg1;
- (void)transparentViewTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviewsWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

