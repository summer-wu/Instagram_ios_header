//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QuadtreePoint;

@interface IGQuadtreeCluster : NSObject
{
    QuadtreePoint *_cachedMaxPointThatIsNotRemoved;
    double _minLatitude;
    double _maxLatitude;
    double _minLongitude;
    double _maxLongitude;
    BOOL _isSorted;
    int _cachedNumberOfRemovedPoints;
    BOOL _isNewCluster;
    BOOL _isTightCluster;
    NSMutableArray *_points;
    QuadtreePoint *_maxPoint;
    id _userInfo;
    struct CGPoint _centerPoint;
    double _maxPointValue;
    CDStruct_2c43369c _centerCoordinate;
}

@property(nonatomic) double maxPointValue; // @synthesize maxPointValue=_maxPointValue;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) BOOL isTightCluster; // @synthesize isTightCluster=_isTightCluster;
@property(nonatomic) BOOL isNewCluster; // @synthesize isNewCluster=_isNewCluster;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(readonly, nonatomic) QuadtreePoint *maxPoint; // @synthesize maxPoint=_maxPoint;
@property(readonly, nonatomic) NSMutableArray *points; // @synthesize points=_points;
- (void).cxx_destruct;
- (CDStruct_feeb6407)boundingRegion;
- (double)boundingBoxWidthInPixels:(id)arg1;
- (int)numPoints;
- (id)maxGeoPoint;
- (id)minGeoPoint;
- (id)maxPointThatIsNotRemoved;
- (int)numActivePoints;
- (void)addPoints:(id)arg1;
- (void)addPoint:(id)arg1;
- (void)updateAfterEdits:(id)arg1;
- (void)sort;
- (id)emptyCopyWithSameCenterCoordinate;
- (void)reset;
- (id)init;

@end

