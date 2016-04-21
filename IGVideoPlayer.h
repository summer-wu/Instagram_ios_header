//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVPlayerItemOutputPullDelegate.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSObject<OS_dispatch_queue>, NSString;

@interface IGVideoPlayer : NSObject <AVPlayerItemOutputPullDelegate>
{
    id _displayLinkTarget;
    BOOL _isLooping;
    BOOL _isSeeking;
    AVAsset *_asset;
    id <IGVideoPlayerDelegate> _delegate;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_videoOutputQueue;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
    CDStruct_1b6d18a9 _seekTime;
}

@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) BOOL isSeeking; // @synthesize isSeeking=_isSeeking;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoOutputQueue; // @synthesize videoOutputQueue=_videoOutputQueue;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IGVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isLooping; // @synthesize isLooping=_isLooping;
@property(nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)itemDidFinishPlaying;
- (void)stopHelperAnimated:(BOOL)arg1;
- (void)loadBufferAtItemTime:(CDStruct_1b6d18a9)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)stopWithoutAnimation;
- (void)stop;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)playFromStart;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(nonatomic) BOOL isMuted;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

