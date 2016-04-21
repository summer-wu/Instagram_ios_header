//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGFeedNetworkSource, IGNetworkMonitor, NSMutableArray, UIButton, UILabel;

@interface IGDebugBar : UIView
{
    NSMutableArray *_labels;
    UILabel *_requestCounter;
    UILabel *_transferRateIndicator;
    UILabel *_videoPlaybackHistory;
    UILabel *_videoPlayerUsageCount;
    UIButton *_networkMonitorButton;
    IGNetworkMonitor *_networkMonitor;
    UILabel *_logItemLabel;
    NSMutableArray *_pendingMessages;
    int _networkMonitorStyle;
    IGFeedNetworkSource *_feedSource;
}

+ (id)debugBarFontForSize:(float)arg1;
+ (id)newStatusBarLabel;
+ (id)sharedDebugBar;
@property(nonatomic) __weak IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
- (void).cxx_destruct;
- (void)networkSpeedChanged;
- (void)playerUsageDidChange:(id)arg1;
- (void)playbackRateChanged:(id)arg1;
- (void)updateTransferLabel;
- (void)doObserveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)toggleNetworkMonitor;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)hideMessage;
- (void)doShowMessage:(id)arg1 type:(int)arg2;
- (void)showMessage:(id)arg1 type:(int)arg2;
- (void)showError:(id)arg1;
- (void)showWarning:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)buildNetworkMonitorButton;
- (void)buildLogView;
- (void)buildVideoPlayerUsageCount;
- (void)buildVideoPlaybackHistory;
- (void)buildTransferIndicator;
- (void)buildRequestCounter;
- (void)sizeStatusBarLabel:(id)arg1;
- (id)init;
- (void)dealloc;

@end

