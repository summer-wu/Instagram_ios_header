//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSNumber, NSString;

@interface IGRaindropSearchQuery : TBaseStruct
{
    NSString *__thrift_searchQueryText;
    NSNumber *__thrift_timestamp;
    NSNumber *__thrift_rttInMillis;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)timestamp;
- (id)searchQueryText;
- (id)initWithSearchQueryText:(id)arg1 timestamp:(id)arg2 rttInMillis:(id)arg3;
- (id)init;

@end

