//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSNumber, NSString;

@interface IGRaindropUser : TBaseStruct
{
    NSNumber *__thrift_userId;
    NSNumber *__thrift_isPrivate;
    NSString *__thrift_type;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithUserId:(id)arg1 isPrivate:(id)arg2 type:(id)arg3;
- (id)init;

@end

