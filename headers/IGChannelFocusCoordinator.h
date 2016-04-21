//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGChannelModel, IGFeedItem;

@interface IGChannelFocusCoordinator : NSObject
{
    IGChannelModel *_channel;
    IGFeedItem *_post;
    float _videoStartTime;
}

@property(nonatomic) float videoStartTime; // @synthesize videoStartTime=_videoStartTime;
@property(retain, nonatomic) IGFeedItem *post; // @synthesize post=_post;
@property(retain, nonatomic) IGChannelModel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)reset;

@end
