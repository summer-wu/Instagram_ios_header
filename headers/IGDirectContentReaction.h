//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGDate, IGUser;

@interface IGDirectContentReaction : NSObject <NSCoding>
{
    unsigned int _reactionType;
    IGDate *_timestamp;
    IGUser *_sender;
}

+ (id)reactionsFromDictionary:(id)arg1;
+ (unsigned int)likeCountFromDictionary:(id)arg1;
+ (id)likeForUserAtCurrentTime:(id)arg1;
@property(retain, nonatomic) IGUser *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) IGDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int reactionType; // @synthesize reactionType=_reactionType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)reactionTypeForString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithReactionType:(unsigned int)arg1 timeStamp:(id)arg2 sender:(id)arg3;
- (id)initWithDictionary:(id)arg1 andType:(unsigned int)arg2;

@end
