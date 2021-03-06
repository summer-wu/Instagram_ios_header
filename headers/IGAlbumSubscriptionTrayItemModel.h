//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDKDiffable.h"

@class IGFeedItem, IGPostItem, NSDate;

@interface IGAlbumSubscriptionTrayItemModel : NSObject <IGDKDiffable>
{
    BOOL _isCurrentAlbum;
    BOOL _seen;
    IGFeedItem *_feedItem;
    IGPostItem *_item;
}

@property(readonly, nonatomic) BOOL seen; // @synthesize seen=_seen;
@property(readonly, nonatomic) IGPostItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) BOOL isCurrentAlbum; // @synthesize isCurrentAlbum=_isCurrentAlbum;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastTakenDate;
- (BOOL)isEqual:(id)arg1;
- (id)diffIdentifier;
- (id)initWithFeedItem:(id)arg1 isCurrentAlbum:(BOOL)arg2 lastSeenDate:(id)arg3;

@end

