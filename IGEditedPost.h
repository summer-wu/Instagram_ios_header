//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, IGLocation, IGUsertagGroup, NSString;

@interface IGEditedPost : NSObject
{
    IGLocation *_location;
    NSString *_caption;
    IGUsertagGroup *_usertags;
    IGFeedItem *_feedItem;
}

@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) IGUsertagGroup *usertags; // @synthesize usertags=_usertags;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)requestParameters;
- (id)pk;
- (BOOL)hasChanged;
- (BOOL)hasChangedUsertags;
- (BOOL)hasChangedLocation;
- (BOOL)hasChangedCaption;
- (id)initWithFeedItem:(id)arg1;

@end

