//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSNumber;

@interface IGRaindropSearchTypingEvent : TBaseStruct
{
    NSNumber *__thrift_isTypeahead;
    NSNumber *__thrift_nullState;
    struct NSMutableArray *__thrift_searchQueries;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithIsTypeahead:(id)arg1 nullState:(id)arg2 searchQueries:(struct NSMutableArray *)arg3;
- (id)init;

@end

