//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGThumbnailsGridView, UILabel;

@interface IGHashtagPreviewView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGThumbnailsGridView *_thumbnailView;
}

@property(retain, nonatomic) IGThumbnailsGridView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setThumbnailURLs:(id)arg1;
- (void)setMediaCount:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

