//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVAsset, IGTrackStabilizer, NSString;

@interface IGVideoClip : NSObject <NSCopying>
{
    NSString *_assetIdentifier;
    AVAsset *_asset;
    int _position;
    int _sourceType;
    unsigned int _trimType;
    IGTrackStabilizer *_trackStabilizer;
    struct CGRect _cropRect;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
    CDStruct_e83c9415 _compositionTimeRange;
    union _GLKMatrix4 _playbackTransform;
}

@property(retain, nonatomic) IGTrackStabilizer *trackStabilizer; // @synthesize trackStabilizer=_trackStabilizer;
@property(readonly, nonatomic) union _GLKMatrix4 playbackTransform; // @synthesize playbackTransform=_playbackTransform;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) CDStruct_e83c9415 compositionTimeRange; // @synthesize compositionTimeRange=_compositionTimeRange;
@property(nonatomic) unsigned int trimType; // @synthesize trimType=_trimType;
@property(nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int position; // @synthesize position=_position;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) float trimmedDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeForAudioAndVideo;
- (void)resetTimes;
- (void)updateTransform;
- (struct CGSize)applyInverseTransformToSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (struct CGAffineTransform)videoTrackTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1 position:(int)arg2 sourceType:(int)arg3;
- (void)dealloc;

@end
