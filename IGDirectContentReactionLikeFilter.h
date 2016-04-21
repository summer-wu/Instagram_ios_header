//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectContentReactionFilter.h"

@class IGUser, NSString;

@interface IGDirectContentReactionLikeFilter : NSObject <IGDirectContentReactionFilter>
{
    BOOL _like;
    unsigned int _reactionType;
    IGUser *_user;
}

@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) BOOL like; // @synthesize like=_like;
@property(nonatomic) unsigned int reactionType; // @synthesize reactionType=_reactionType;
- (void).cxx_destruct;
- (id)filteredReactionsFromReactions:(id)arg1;
- (id)initWithUser:(id)arg1 withLike:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

