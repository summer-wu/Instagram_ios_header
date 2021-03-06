//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableOrderedSet, NSString;

@interface IGEventFeedData : NSObject <NSCoding, NSCopying>
{
    NSString *_eventId;
    NSString *_eventTitle;
    NSString *_nextMaxID;
    NSMutableOrderedSet *_posts;
}

@property(readonly, nonatomic) NSMutableOrderedSet *posts; // @synthesize posts=_posts;
@property(readonly, copy, nonatomic) NSString *nextMaxID; // @synthesize nextMaxID=_nextMaxID;
@property(readonly, copy, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)removePostsInArray:(id)arg1;
- (void)removePost:(id)arg1;
- (BOOL)containsPost:(id)arg1;
- (id)allPosts;
- (id)initWithPosts:(id)arg1 eventId:(id)arg2 eventTitle:(id)arg3 nextMaxID:(id)arg4;

@end

