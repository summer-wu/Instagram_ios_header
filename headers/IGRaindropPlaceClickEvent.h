//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class IGRaindropPlace, IGRaindropPositionIn2D, NSNumber, NSString;

@interface IGRaindropPlaceClickEvent : TBaseStruct
{
    IGRaindropPlace *__thrift_place;
    NSNumber *__thrift_sectionNumber;
    IGRaindropPositionIn2D *__thrift_position;
    NSString *__thrift_algorithm;
    NSString *__thrift_clusterKey;
    NSString *__thrift_targetId;
    NSString *__thrift_placeId;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithPlace:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 targetId:(id)arg6 placeId:(id)arg7;
- (id)init;

@end

