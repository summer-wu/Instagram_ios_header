//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSNumber, NSString;

@interface IGRaindropSearchEvent : TBaseStruct
{
    NSString *__thrift_searchQueryText;
    NSNumber *__thrift_wasSearchButtonTaped;
    int __thrift_searchType;
    NSNumber *__thrift_rttInMillis;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (int)searchType;
- (id)initWithSearchQueryText:(id)arg1 wasSearchButtonTaped:(id)arg2 searchType:(int)arg3 rttInMillis:(id)arg4;
- (id)init;

@end

