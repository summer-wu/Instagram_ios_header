//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class IGRaindropPlace, NSNumber;

@interface IGRaindropViewPlacePageItem : TBaseStruct
{
    NSNumber *__thrift_mediaId;
    NSNumber *__thrift_mediaOwnerId;
    IGRaindropPlace *__thrift_place;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithMediaId:(id)arg1 mediaOwnerId:(id)arg2 place:(id)arg3;
- (id)init;

@end

