//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>;

@interface IGLRUCache : NSObject
{
    int _totalCostLimit;
    NSMutableDictionary *_objects;
    NSMutableOrderedSet *_queue;
    int _totalCost;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) int totalCost; // @synthesize totalCost=_totalCost;
@property(readonly, nonatomic) NSMutableOrderedSet *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(nonatomic) int totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;
- (void).cxx_destruct;
- (void)evictCachedObjectsIfNeeded;
- (id)description;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(int)arg3;
- (id)objectForKey:(id)arg1;
- (id)initWithTotalCostLimit:(int)arg1;

@end

