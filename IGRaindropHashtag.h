//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class IGRaindropMedia, NSString;

@interface IGRaindropHashtag : TBaseStruct
{
    NSString *__thrift_tagName;
    IGRaindropMedia *__thrift_media;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithTagName:(id)arg1 media:(id)arg2;
- (id)init;

@end

