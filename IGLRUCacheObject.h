//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGLRUCacheObject : NSObject
{
    id _object;
    unsigned int _cost;
}

@property(readonly, nonatomic) unsigned int cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)arg1 cost:(unsigned int)arg2;

@end

