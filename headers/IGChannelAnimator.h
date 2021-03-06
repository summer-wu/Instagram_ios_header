//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView;

@interface IGChannelAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresented;
    UIView *_presentingViewSnapshot;
    struct CGRect _channelFrame;
}

@property(readonly, nonatomic) struct CGRect channelFrame; // @synthesize channelFrame=_channelFrame;
@property(readonly, nonatomic) UIView *presentingViewSnapshot; // @synthesize presentingViewSnapshot=_presentingViewSnapshot;
@property(nonatomic) BOOL isPresented; // @synthesize isPresented=_isPresented;
- (void).cxx_destruct;
- (void)animatePresentingTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithPresentingViewSnapshot:(id)arg1 channelFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

