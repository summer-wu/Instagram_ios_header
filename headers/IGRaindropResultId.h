//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class IGRaindropPlace, NSNumber, NSString;

@interface IGRaindropResultId : TBaseStruct
{
    NSString *__thrift_hashtagId;
    NSNumber *__thrift_userId;
    IGRaindropPlace *__thrift_placeId_DEPRECATED;
    NSString *__thrift_placeId;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)placeId;
- (id)placeId_DEPRECATED;
- (id)userId;
- (id)initWithPlaceId:(id)arg1;
- (id)initWithPlaceId_DEPRECATED:(id)arg1;
- (id)initWithUserId:(id)arg1;
- (id)initWithHashtagId:(id)arg1;
- (id)init;

@end

