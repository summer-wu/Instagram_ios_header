//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, IGVideoInfo, NSMutableArray;

@interface IGVideoProgressView : UIView
{
    BOOL _lastClipIsSelected;
    BOOL _videoRecordingEnabled;
    BOOL _isLive;
    BOOL _shouldExpandLastClipToFillAllWidth;
    CDUnknownBlockType _progressBlock;
    IGVideoInfo *_videoInfo;
    float _maxVideoDuration;
    UIView *_minDurationView;
    NSMutableArray *_clipBarViews;
    UIView *_runningTimeBarView;
    UIView *_blinkerView;
    CADisplayLink *_displayLink;
    int _counter;
    float _runningTime;
}

+ (float)defaultHeight;
@property(nonatomic) float runningTime; // @synthesize runningTime=_runningTime;
@property(nonatomic) int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *blinkerView; // @synthesize blinkerView=_blinkerView;
@property(retain, nonatomic) UIView *runningTimeBarView; // @synthesize runningTimeBarView=_runningTimeBarView;
@property(retain, nonatomic) NSMutableArray *clipBarViews; // @synthesize clipBarViews=_clipBarViews;
@property(retain, nonatomic) UIView *minDurationView; // @synthesize minDurationView=_minDurationView;
@property(nonatomic) float maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) BOOL shouldExpandLastClipToFillAllWidth; // @synthesize shouldExpandLastClipToFillAllWidth=_shouldExpandLastClipToFillAllWidth;
@property(nonatomic) BOOL isLive; // @synthesize isLive=_isLive;
@property(nonatomic) BOOL videoRecordingEnabled; // @synthesize videoRecordingEnabled=_videoRecordingEnabled;
@property(nonatomic) BOOL lastClipIsSelected; // @synthesize lastClipIsSelected=_lastClipIsSelected;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadAllClips;
- (void)updateBlinker;
- (void)onDisplayLinkDidFire:(id)arg1;
- (struct CGPoint)blinkerCenter;
- (void)removeLastClip;
- (void)addClip:(id)arg1;
- (void)onClipAdded:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

