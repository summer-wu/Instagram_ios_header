//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSData, NSNumber, NSString;

@interface MarauderEvent : TBaseStruct
{
    NSNumber *__thrift_timeStampInMilliseconds;
    NSData *__thrift_payload;
    NSString *__thrift_payloadStructName;
    NSString *__thrift_payloadStructNamespace;
    NSString *__thrift_customUserID;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithTimeStampInMilliseconds:(id)arg1 payload:(id)arg2 payloadStructName:(id)arg3 payloadStructNamespace:(id)arg4 customUserID:(id)arg5;
- (id)init;

@end
