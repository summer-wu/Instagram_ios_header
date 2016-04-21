//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@interface IGDKIndexSetResult : NSObject
{
    NSIndexSet *_inserts;
    NSIndexSet *_deletes;
    NSIndexSet *_updates;
    NSArray *_moves;
    struct IGDKStats _stats;
}

@property(readonly, nonatomic) struct IGDKStats stats; // @synthesize stats=_stats;
@property(readonly, copy, nonatomic) NSArray *moves; // @synthesize moves=_moves;
@property(readonly, nonatomic) NSIndexSet *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSIndexSet *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic) NSIndexSet *inserts; // @synthesize inserts=_inserts;
- (void).cxx_destruct;
- (id)description;
- (id)resultWithUpdatedMovesAsDeleteInserts;
- (BOOL)hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 stats:(struct IGDKStats)arg5;

@end

