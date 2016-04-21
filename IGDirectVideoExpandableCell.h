//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentExpandableCell.h"

#import "IGDirectVideoViewDelegate.h"

@class IGDirectVideoView, NSString;

@interface IGDirectVideoExpandableCell : IGDirectContentExpandableCell <IGDirectVideoViewDelegate>
{
    IGDirectVideoView *_videoView;
}

@property(retain, nonatomic) IGDirectVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)videoView:(id)arg1 didFailToPlayWithError:(id)arg2;
- (void)prepareForReuse;
- (void)completeAnimation;
- (void)beginAnimation;
- (void)stopAnimated:(BOOL)arg1;
- (void)stop;
- (void)togglePlayStatus;
- (void)play;
- (void)layoutSubviews;
- (void)setContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

