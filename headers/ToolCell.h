//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class Tool, UIColor, UIFont, UIImageView, UILabel;

@interface ToolCell : UICollectionViewCell
{
    BOOL _isSelected;
    BOOL _isDisabled;
    Tool *_tool;
    float _titleOffsetY;
    UILabel *_titleLabel;
    UIImageView *_thumbnailView;
}

@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) float titleOffsetY; // @synthesize titleOffsetY=_titleOffsetY;
@property(nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) Tool *tool; // @synthesize tool=_tool;
- (void).cxx_destruct;
@property(nonatomic) float thumbnailSize;
@property(retain, nonatomic) UIFont *titleLabelFont;
@property(retain, nonatomic) UIColor *titleLabelColor;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
