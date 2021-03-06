//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImage, UILabel;

@interface IGSelectAlbumCell : UITableViewCell
{
    int _requestID;
    UIImage *_thumbnail;
    int _appearanceType;
    UILabel *_countLabel;
}

@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) int appearanceType; // @synthesize appearanceType=_appearanceType;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateTextLabelAppearance;
- (void)prepareForReuse;
- (struct UIEdgeInsets)layoutMargins;
@property(nonatomic) int assetCount;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

