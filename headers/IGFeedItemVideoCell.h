//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedItemMediaCell.h"

#import "IGFeedItemVideoViewDelegate.h"
#import "IGFeedVideoCell.h"

@class IGFeedItemVideoView, IGPost, NSString;

@interface IGFeedItemVideoCell : IGFeedItemMediaCell <IGFeedVideoCell, IGFeedItemVideoViewDelegate>
{
    IGPost *_post;
    float _percentVisible;
    id <IGFeedVideoCellInteractionDelegate> _interactionDelegate;
    id <IGFeedVideoCellAnalyticsDelegate> _analyticsDelegate;
    id <IGFeedVideoCellPlayerDelegate> _playerDelegate;
    IGFeedItemVideoView *_videoView;
}

@property(readonly, nonatomic) IGFeedItemVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak id <IGFeedVideoCellPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak id <IGFeedVideoCellAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <IGFeedVideoCellInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(readonly, nonatomic) float percentVisible; // @synthesize percentVisible=_percentVisible;
- (id)post;
- (void).cxx_destruct;
- (void)feedItemVideoView:(id)arg1 didToggleAudio:(BOOL)arg2;
- (void)feedItemVideoViewDidLongPress:(id)arg1;
- (void)feedItemVideoViewDidDoubleTap:(id)arg1;
- (void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2;
- (void)feedItemVideoViewDidPlayToEnd:(id)arg1;
- (void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1;
- (void)feedItemVideoViewDidPauseWithEmptyBuffer:(id)arg1;
- (void)feedItemVideoViewDidPlay:(id)arg1;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
- (id)accessibleElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)isSponsored;
- (unsigned int)updatePercentVisible:(float)arg1;
- (void)prepareForReuse;
- (void)setPost:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
