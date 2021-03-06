//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, POPDecayAnimation, POPSpringAnimation, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface IGConvexPolygonScrollView : UIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    POPSpringAnimation *_bounceAnimation;
    POPDecayAnimation *_scrollAnimation;
    POPSpringAnimation *_zoomAnimation;
    POPSpringAnimation *_translationAnimation;
    BOOL __scrolling;
    BOOL __bouncing;
    BOOL _dragging;
    BOOL _zooming;
    BOOL _scrollEnabled;
    BOOL _decelerating;
    BOOL _zoomBouncing;
    UIView *_contentView;
    float _rotateAngle;
    NSArray *_contentRegion;
    float _cropAspectRatio;
    float _maximumZoomScale;
    id <IGConvexPolygonScrollViewDelegate> _delegate;
    float _lastScale;
    struct CGSize _contentSize;
    struct CGSize _viewModelSize;
    struct CGPoint _lastZoomPoint;
}

@property(nonatomic) struct CGPoint lastZoomPoint; // @synthesize lastZoomPoint=_lastZoomPoint;
@property(nonatomic) float lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) BOOL zoomBouncing; // @synthesize zoomBouncing=_zoomBouncing;
@property(nonatomic) BOOL decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic) __weak id <IGConvexPolygonScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) BOOL zooming; // @synthesize zooming=_zooming;
@property(nonatomic) BOOL dragging; // @synthesize dragging=_dragging;
@property(nonatomic) float cropAspectRatio; // @synthesize cropAspectRatio=_cropAspectRatio;
@property(copy, nonatomic) NSArray *contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) float rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) struct CGSize viewModelSize; // @synthesize viewModelSize=_viewModelSize;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_restrainOffset:(struct CGPoint *)arg1 scale:(float *)arg2;
- (void)_restrainOffset:(struct CGPoint *)arg1;
- (struct CGPoint)_projectOffsetWithScale:(float)arg1 offset:(struct CGPoint)arg2;
- (id)rectangularRegionFromSquareRegion:(id)arg1;
- (id)squareRegionFromRectangularRegion:(id)arg1;
- (float)aspectRatioAdjustedValue:(float)arg1;
- (float)_restrainScaleForRotation:(float)arg1 targetScale:(float)arg2 safeScale:(float)arg3;
- (struct CGPoint)_offsetForRotateAngle:(float)arg1;
- (float)_currentRubberBandingStrength;
- (BOOL)_isVisibleRegionInsideConvexPolygonWithOffset:(struct CGPoint)arg1 scale:(float)arg2;
- (BOOL)_isVisibleRegionInsideConvexPolygonWithOffset:(struct CGPoint)arg1 scale:(float)arg2 convexPlygon:(id)arg3;
- (float)_straightenScaleForAngle:(float)arg1;
- (void)_pinchFromGestureRecognizer:(id)arg1;
- (void)_zoomingDidFinished;
- (void)_zoomingUpdatedWithGesture:(id)arg1;
- (void)_beginZooming;
- (void)_zoomToPoint:(struct CGPoint)arg1 scale:(float)arg2;
- (void)_panFromGestureRecognizer:(id)arg1;
- (void)_draggingWithTranslation:(struct CGPoint)arg1;
- (void)_endDraggingWithDecelerationVelocity:(struct CGPoint)arg1;
- (struct CGPoint)_applyRubberBandingEffectOnScrollVector:(struct CGPoint)arg1;
- (void)_beginDragging;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_zoomAnimationWithTargetScale:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_noteZoomAnimationEnded:(BOOL)arg1;
- (void)_transitionToTranslateAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_zoomBounceFinished:(BOOL)arg1 targetOffset:(struct CGPoint)arg2 targetScale:(float)arg3;
- (void)_beginScrollAnimationsWithVelocity:(struct CGPoint)arg1;
- (struct CGPoint)scrollVelocity;
- (void)_transitionToScrollAnimationWithVelocity:(struct CGPoint)arg1;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2 strongBounce:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1;
- (void)_noteScrollingEndedAfterDeceleration:(BOOL)arg1 finished:(BOOL)arg2;
- (void)cancelAnimations;
- (union _GLKMatrix4)contentTransform;
- (void)setContentTransform:(union _GLKMatrix4)arg1;
- (void)setRotateAngleZ:(float)arg1;
- (float)rotateAngleZ;
- (void)setRotateAngleY:(float)arg1;
- (float)rotateAngleY;
- (void)setRotateAngleX:(float)arg1;
- (float)rotateAngleX;
@property(nonatomic) float zoomScale;
@property(nonatomic) struct CGPoint contentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)_updateScrollState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

