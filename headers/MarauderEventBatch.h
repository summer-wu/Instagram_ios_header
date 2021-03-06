//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class HoneySchema, NSNumber, NSString;

@interface MarauderEventBatch : TBaseStruct
{
    NSNumber *__thrift_timeStampInMilliseconds;
    NSString *__thrift_deviceID;
    NSString *__thrift_appID;
    NSString *__thrift_appVersion;
    struct NSMutableArray *__thrift_events;
    NSString *__thrift_platformSoftwareVersion;
    NSString *__thrift_platformHardwareVersion;
    HoneySchema *__thrift_honeySchema;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithTimeStampInMilliseconds:(id)arg1 deviceID:(id)arg2 appID:(id)arg3 appVersion:(id)arg4 events:(struct NSMutableArray *)arg5 platformSoftwareVersion:(id)arg6 platformHardwareVersion:(id)arg7 honeySchema:(id)arg8;
- (id)init;

@end

