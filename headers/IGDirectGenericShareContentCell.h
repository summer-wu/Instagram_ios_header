//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

@class IGCoreTextView, IGShareThumbnailView, NSArray, UIImageView, UILabel, UIView;

@interface IGDirectGenericShareContentCell : IGDirectContentCell
{
    UIView *_shareContainerView;
    IGCoreTextView *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_sideImageView;
    UIImageView *_chevronView;
    IGShareThumbnailView *_thumbnailViews;
    NSArray *_previewMediaPhotos;
}

+ (float)thumbnailWidthForFrameWidth:(float)arg1;
+ (float)labelWidthForFrameWidth:(float)arg1;
+ (float)cellWidthForFrameWidth:(float)arg1;
+ (float)sideImageWidth;
+ (id)titleStyledStringWithText:(id)arg1;
+ (float)heightForCellWithTitleText:(id)arg1 andSubtitleText:(id)arg2 andWidth:(float)arg3 andThumbnails:(id)arg4;
@property(retain, nonatomic) NSArray *previewMediaPhotos; // @synthesize previewMediaPhotos=_previewMediaPhotos;
@property(retain, nonatomic) IGShareThumbnailView *thumbnailViews; // @synthesize thumbnailViews=_thumbnailViews;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UIImageView *sideImageView; // @synthesize sideImageView=_sideImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) IGCoreTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *shareContainerView; // @synthesize shareContainerView=_shareContainerView;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (id)highlightedBackgroundImage;
- (id)defaultBackgroundImage;
- (id)highlightedBackgoundImageNotForSameUser;
- (id)highlightedBackgoundImageForSameUser;
- (id)defaultBackgoundImageNotForSameUser;
- (id)defaultBackgoundImageForSameUser;
- (void)layoutSubviews;
- (id)previewMedia;
- (id)subtitleText;
- (id)titleText;
- (struct CGRect)tapTargetFrame;
- (void)setContent:(id)arg1;
- (id)createShareContainerView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

