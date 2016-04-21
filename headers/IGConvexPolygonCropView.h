//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGConvexPolygonScrollViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGConvexPolygonScrollView, NSArray, NSString;

@interface IGConvexPolygonCropView : UIView <IGConvexPolygonScrollViewDelegate, UIGestureRecognizerDelegate>
{
    IGConvexPolygonScrollView *_scrollView;
    id <IGConvexPolygonCropViewDelegate> _delegate;
    union _GLKMatrix4 _contentTransform;
}

@property(nonatomic) __weak id <IGConvexPolygonCropViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) union _GLKMatrix4 contentTransform; // @synthesize contentTransform=_contentTransform;
- (void).cxx_destruct;
- (void)scrollViewDidEndZoomBouncingAnimation:(id)arg1;
- (void)scrollViewWillBeginZoomBouncingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cancelAnimations;
@property(copy, nonatomic) NSArray *contentRegion;
@property(nonatomic) float cropAngle;
@property(nonatomic) struct CGPoint cropCenter;
@property(nonatomic) float cropZoomScale;
- (void)updateContentViewWithContentTransform:(union _GLKMatrix4)arg1 contentRegion:(id)arg2 cropCenter:(struct CGPoint)arg3 cropScale:(float)arg4 cropAspectRatio:(float)arg5;
- (void)setContentView:(id)arg1 viewModelSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
