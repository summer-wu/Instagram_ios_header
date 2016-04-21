//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface IGToastStyleNUXView : UIView
{
    id <IGToastStyleNUXViewDelegate> _delegate;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UILabel *_label;
    float _minX;
    float _maxX;
    int _arrowDirection;
    struct CGPoint _pinPoint;
}

@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) struct CGPoint pinPoint; // @synthesize pinPoint=_pinPoint;
@property(nonatomic) float maxX; // @synthesize maxX=_maxX;
@property(nonatomic) float minX; // @synthesize minX=_minX;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *rightBackground; // @synthesize rightBackground=_rightBackground;
@property(readonly, nonatomic) UIImageView *leftBackground; // @synthesize leftBackground=_leftBackground;
@property(nonatomic) __weak id <IGToastStyleNUXViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)layoutSubviews;
- (void)pinToPoint:(struct CGPoint)arg1 minX:(float)arg2 maxX:(float)arg3 arrowDirection:(int)arg4;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

