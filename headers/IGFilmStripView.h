//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAsset, AVAssetImageGenerator, NSCache, NSMutableArray, NSMutableIndexSet;

@interface IGFilmStripView : UIView
{
    NSCache *_thumbnailCache;
    BOOL _generatingThumbnails;
    BOOL _thumbnailsNeedLayout;
    int _firstTumbnailTime;
    struct CGAffineTransform _trackTransform;
    NSMutableArray *_thumbnailImageViews;
    AVAsset *_asset;
    AVAssetImageGenerator *_imageGenerator;
    NSMutableIndexSet *_loadedImagesSet;
    struct CGSize _thumbnailSize;
}

@property(retain, nonatomic) NSMutableIndexSet *loadedImagesSet; // @synthesize loadedImagesSet=_loadedImagesSet;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)updateThumbnailLayout;
- (void)layoutSubviews;
- (id)cachedThumbnailForIndex:(unsigned int)arg1;
- (void)setThumbnail:(id)arg1 forIndex:(unsigned int)arg2;
- (id)cacheKeyForIndex:(unsigned int)arg1;
- (void)generateVisibleThumbnails:(id)arg1;
- (void)updateVisibleThumbnails;
@property(readonly, nonatomic) float secondsPerThumbnail;
@property(readonly, nonatomic) float pixelsPerSecond;
- (id)initWithFrame:(struct CGRect)arg1;

@end

