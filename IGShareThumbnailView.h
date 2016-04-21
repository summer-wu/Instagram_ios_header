//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface IGShareThumbnailView : UIView
{
    NSArray *_photoViews;
    float _thumbnailWidth;
    float _headerPadding;
}

@property(nonatomic) float headerPadding; // @synthesize headerPadding=_headerPadding;
@property(nonatomic) float thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(readonly, nonatomic) NSArray *photoViews; // @synthesize photoViews=_photoViews;
- (void).cxx_destruct;
- (struct CGRect)frameForViewAtColumn:(unsigned int)arg1 atRow:(unsigned int)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

