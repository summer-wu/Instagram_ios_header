//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSString;

@interface IGRaindropMarquee : TBaseStruct
{
    NSString *__thrift_title;
    NSString *__thrift_type;
    NSString *__thrift_id;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithTitle:(id)arg1 type:(id)arg2 id:(id)arg3;
- (id)init;

@end
