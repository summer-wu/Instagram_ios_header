//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIColor, UIImageView, UILabel, UIView;

@interface IGToolPickerCell : UICollectionViewCell
{
    BOOL _layoutCenterAligned;
    UIView *_iconContainer;
    UIImageView *_iconView;
    UILabel *_label;
    UIColor *_pressedBackgroundColor;
    UIColor *_normalBackgroundColor;
    UIColor *_iconBackgroundColor;
    UIView *_highlightLine;
    UIView *_iconBackgroundView;
    UIImageView *_iconContainerBorderView;
}

+ (float)iconPaddingForCellSize:(struct CGSize)arg1;
+ (float)iconSizeForCellSize:(struct CGSize)arg1;
+ (struct CGSize)cellSizeToFit:(struct CGSize)arg1;
@property(retain, nonatomic) UIImageView *iconContainerBorderView; // @synthesize iconContainerBorderView=_iconContainerBorderView;
@property(retain, nonatomic) UIView *iconBackgroundView; // @synthesize iconBackgroundView=_iconBackgroundView;
@property(retain, nonatomic) UIView *highlightLine; // @synthesize highlightLine=_highlightLine;
@property(retain, nonatomic) UIColor *iconBackgroundColor; // @synthesize iconBackgroundColor=_iconBackgroundColor;
@property(nonatomic) BOOL layoutCenterAligned; // @synthesize layoutCenterAligned=_layoutCenterAligned;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) UIColor *pressedBackgroundColor; // @synthesize pressedBackgroundColor=_pressedBackgroundColor;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *iconContainer; // @synthesize iconContainer=_iconContainer;
- (void).cxx_destruct;
- (id)LX_snapshotView;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(nonatomic) BOOL showsHighlightBar;
@property(retain, nonatomic) UIColor *highlightBarColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

