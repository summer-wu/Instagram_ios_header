//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemVideoCell.h"

#import "IGEventViewerCellType.h"

@class IGBlurredImageView, NSString, UIActivityIndicatorView, UITapGestureRecognizer;

@interface IGEventViewerVideoCell : IGFeedItemVideoCell <IGEventViewerCellType>
{
    id <IGEventViewerMediaCellDelegate> _tapDelegate;
    UIActivityIndicatorView *_spinner;
    IGBlurredImageView *_blurredImageView;
    UITapGestureRecognizer *_singleTap;
    UITapGestureRecognizer *_doubleTap;
}

@property(retain, nonatomic) UITapGestureRecognizer *doubleTap; // @synthesize doubleTap=_doubleTap;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(readonly, nonatomic) IGBlurredImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(readonly, nonatomic) __weak UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) __weak id <IGEventViewerMediaCellDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)didReceiveDoubleTap:(id)arg1;
- (void)didReceiveSingleTap:(id)arg1;
- (void)layoutSubviews;
- (void)setPost:(id)arg1;
- (void)setDoubleTapEnabled:(BOOL)arg1;
- (void)setShadowHidden:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)configureSingleTap;
- (void)configureVideoView;
- (void)setupSubviewsWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
