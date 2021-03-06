//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface IGDirectedNUXView : UIView
{
    BOOL _isShowing;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    id <IGDirectedNUXViewDelegate> _delegate;
    UIImageView *_leftBGView;
    UIImageView *_rightBGView;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGPoint _targetPoint;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *rightBGView; // @synthesize rightBGView=_rightBGView;
@property(retain, nonatomic) UIImageView *leftBGView; // @synthesize leftBGView=_leftBGView;
@property(nonatomic) __weak id <IGDirectedNUXViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint targetPoint; // @synthesize targetPoint=_targetPoint;
@property(nonatomic) BOOL isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)hide;
- (void)show;
- (void)showAndHide;
- (void)showAndHideAfterDelay:(double)arg1;
- (void)onTap;
- (void)scheduleHideAfterDelay:(double)arg1;
- (void)positionOnScreen;
- (void)setXAnchorPosition:(float)arg1 flipped:(BOOL)arg2;
- (void)resize;
- (void)layoutSubviews;
- (id)init;

@end

