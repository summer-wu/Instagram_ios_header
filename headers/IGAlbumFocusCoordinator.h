//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGPostItem;

@interface IGAlbumFocusCoordinator : NSObject
{
    IGFeedItem *_feedItem;
    IGPostItem *_currentItem;
}

@property(retain, nonatomic) IGPostItem *currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)initWithFeedItem:(id)arg1 currentItem:(id)arg2;
- (id)initWithFeedItem:(id)arg1;

@end

