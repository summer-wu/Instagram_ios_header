//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDKDiffable.h"

@class IGFeedItem, NSArray;

@interface IGAlbumSubscriptionTrayModel : NSObject <IGDKDiffable>
{
    NSArray *_items;
    IGFeedItem *_currentAlbum;
}

@property(readonly, nonatomic) IGFeedItem *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEmpty;
- (id)diffIdentifier;
- (id)initWithItems:(id)arg1 currentAlbum:(id)arg2;

@end

