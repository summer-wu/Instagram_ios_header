//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IGTransformController : NSObject
{
    BOOL _shouldZoomToFit;
    BOOL _perspectiveTransformNeedRefresh;
    BOOL _cropTransformNeedRefresh;
    union _GLKMatrix4 _perspectiveTransform;
    union _GLKMatrix4 _cropTransform;
    struct CGPoint _center;
    float _perspectiveAutoZoomScaleRatio;
    float _aspectRatio;
    float _originalCropAspectRatio;
    float _orientationAngle;
    float _rotationX;
    float _rotationY;
    float _rotationZ;
    float _cropRotateAngle;
    float _cropScaleRatio;
    struct CGPoint _cropCenter;
}

@property(readonly, nonatomic) union _GLKMatrix4 cropTransform; // @synthesize cropTransform=_cropTransform;
@property(nonatomic) float cropScaleRatio; // @synthesize cropScaleRatio=_cropScaleRatio;
@property(nonatomic) struct CGPoint cropCenter; // @synthesize cropCenter=_cropCenter;
@property(nonatomic) float cropRotateAngle; // @synthesize cropRotateAngle=_cropRotateAngle;
@property(readonly, nonatomic) union _GLKMatrix4 perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property(nonatomic) float rotationZ; // @synthesize rotationZ=_rotationZ;
@property(nonatomic) float rotationY; // @synthesize rotationY=_rotationY;
@property(nonatomic) float rotationX; // @synthesize rotationX=_rotationX;
@property(nonatomic) float orientationAngle; // @synthesize orientationAngle=_orientationAngle;
@property(nonatomic) float originalCropAspectRatio; // @synthesize originalCropAspectRatio=_originalCropAspectRatio;
@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (struct CGPoint)aspectRatioAdjustedPointFromPoint:(struct CGPoint)arg1 forAspectRatio:(float)arg2;
- (void)generateCropTransform;
- (void)updateCropTransformWithPerspectiveTransform:(union _GLKMatrix4)arg1;
- (float)zoomingScaleForPerspective:(union _GLKMatrix4)arg1 withOriginCenter:(struct CGPoint)arg2;
- (float)computeDigonalScaleRatioWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 origin:(struct CGPoint)arg3;
- (struct CGPoint)computePositionForPerspectiveTransform:(union _GLKMatrix4)arg1 coordinate:(struct CGPoint)arg2;
@property(readonly, nonatomic) NSArray *contentRegion;
- (void)generatePerspectiveTransform;
- (void)updatePerspectiveTransform;
- (id)init;

@end
