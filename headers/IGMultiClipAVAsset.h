//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset;

@interface IGMultiClipAVAsset : NSObject
{
    AVAsset *_video;
    int _cropMode;
    struct CGRect _cropRect;
}

@property(nonatomic) int cropMode; // @synthesize cropMode=_cropMode;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) AVAsset *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (id)initWithVideo:(id)arg1 cropRect:(struct CGRect)arg2;

@end
