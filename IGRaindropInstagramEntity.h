//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class IGRaindropHashtag, IGRaindropMarquee, IGRaindropMedia, IGRaindropPlace, IGRaindropUser;

@interface IGRaindropInstagramEntity : TBaseStruct
{
    IGRaindropMarquee *__thrift_marquee;
    IGRaindropHashtag *__thrift_hashtag;
    IGRaindropUser *__thrift_user;
    IGRaindropMedia *__thrift_media;
    IGRaindropPlace *__thrift_place;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)initWithMedia:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithHashtag:(id)arg1;
- (id)initWithMarquee:(id)arg1;
- (id)init;

@end
