//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSString;

@interface IGRaindropLoadLocationResultsEvent : TBaseStruct
{
    struct NSMutableArray *__thrift_resultList;
    NSString *__thrift_searchSessionId;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithResultList:(struct NSMutableArray *)arg1 searchSessionId:(id)arg2;
- (id)init;

@end

