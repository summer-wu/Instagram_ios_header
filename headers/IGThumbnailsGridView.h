//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSIndexSet;

@interface IGThumbnailsGridView : UIView
{
    BOOL _isRestricted;
    BOOL _showPlaceHolder;
    NSArray *_thumbnailViews;
    UIView *_thumbnailOverlayView;
    id <IGThumbnailsGridViewDelegate> _delegate;
    NSArray *_thumbnailURLs;
    NSIndexSet *_thumbnailVideoIndexes;
    unsigned int _thumbnailCount;
    unsigned int _thumbnailsPerRow;
}

+ (struct CGSize)thumbnailSizeForWidth:(float)arg1 thumbnailsPerRow:(unsigned int)arg2;
+ (float)thumbnailHeightForWidth:(float)arg1 thumbnailsPerRow:(unsigned int)arg2;
+ (float)heightWithConstrainedWidth:(float)arg1 thumbnailCount:(unsigned int)arg2 thumbnailsPerRow:(unsigned int)arg3;
@property(nonatomic) BOOL showPlaceHolder; // @synthesize showPlaceHolder=_showPlaceHolder;
@property(nonatomic) unsigned int thumbnailsPerRow; // @synthesize thumbnailsPerRow=_thumbnailsPerRow;
@property(nonatomic) unsigned int thumbnailCount; // @synthesize thumbnailCount=_thumbnailCount;
@property(retain, nonatomic) NSIndexSet *thumbnailVideoIndexes; // @synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes;
@property(nonatomic) BOOL isRestricted; // @synthesize isRestricted=_isRestricted;
@property(copy, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(nonatomic) __weak id <IGThumbnailsGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *thumbnailOverlayView; // @synthesize thumbnailOverlayView=_thumbnailOverlayView;
@property(retain, nonatomic) NSArray *thumbnailViews; // @synthesize thumbnailViews=_thumbnailViews;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTapThumbnail:(id)arg1;
- (void)layoutSubviews;
- (void)setThumbnailURLs:(id)arg1 isRestricted:(BOOL)arg2 thumbnailVideoIndexes:(id)arg3 maxThumbnails:(int)arg4 thumbnailsPerRow:(unsigned int)arg5 showPlaceHolder:(BOOL)arg6;

@end

