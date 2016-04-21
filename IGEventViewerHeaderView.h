//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface IGEventViewerHeaderView : UIView
{
    id <IGEventViewerHeaderViewDelegate> _delegate;
    UIButton *_closeButton;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <IGEventViewerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)textKerning;
- (id)paragraphStyle;
- (id)titleAttributesUseSmallFont:(BOOL)arg1;
- (void)didReceiveTap:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setupLabels;
- (void)setupCloseButton;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
