//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSString;

@interface IGRaindropPlace : TBaseStruct
{
    int __thrift_placeSource;
    NSString *__thrift_name;
    NSString *__thrift_placeId;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)placeId;
- (id)initWithPlaceSource:(int)arg1 name:(id)arg2 placeId:(id)arg3;
- (id)init;

@end
