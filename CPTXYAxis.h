//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTAxis.h"

@class CPTConstraints, NSNumber;

@interface CPTXYAxis : CPTAxis
{
    NSNumber *orthogonalPosition;
    CPTConstraints *axisConstraints;
}

@property(retain, nonatomic) CPTConstraints *axisConstraints; // @synthesize axisConstraints;
@property(retain, nonatomic) NSNumber *orthogonalPosition; // @synthesize orthogonalPosition;
- (void).cxx_destruct;
- (void)setCoordinate:(int)arg1;
- (id)defaultTitleLocation;
- (id)description;
- (void)drawBackgroundLimitsInContext:(struct CGContext *)arg1;
- (void)drawBackgroundBandsInContext:(struct CGContext *)arg1;
- (void)drawGridLinesInContext:(struct CGContext *)arg1 isMajor:(BOOL)arg2;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)drawTicksInContext:(struct CGContext *)arg1 atLocations:(id)arg2 withLength:(float)arg3 inRange:(id)arg4 isMajor:(BOOL)arg5;
- (struct CGPoint)viewPointForCoordinateValue:(id)arg1;
- (struct CGPoint)viewPointForOrthogonalCoordinate:(id)arg1 axisCoordinate:(id)arg2;
- (void)orthogonalCoordinateViewLowerBound:(float *)arg1 upperBound:(float *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

