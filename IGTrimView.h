//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImage, UIView;

@interface IGTrimView : UIControl
{
    float _touchOffset;
    BOOL _autotracking;
    float _minWidth;
    float _maxWidth;
    unsigned int _draggingMode;
    UIView *_trimHandles;
    UIImage *_trimImage;
}

@property(retain, nonatomic) UIImage *trimImage; // @synthesize trimImage=_trimImage;
@property(retain, nonatomic) UIView *trimHandles; // @synthesize trimHandles=_trimHandles;
@property(nonatomic) BOOL autotracking; // @synthesize autotracking=_autotracking;
@property(nonatomic) unsigned int draggingMode; // @synthesize draggingMode=_draggingMode;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) float minWidth; // @synthesize minWidth=_minWidth;
- (void).cxx_destruct;
- (void)stopTracking;
- (void)continueTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct _IGRange trimRange;
- (void)updateTrimHandles:(struct _IGRange)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

