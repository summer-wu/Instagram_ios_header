//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

@class NSString;

@interface IGRaindropDevice : TBaseStruct
{
    NSString *__thrift_appVersion;
    int __thrift_platformType;
    NSString *__thrift_platformSoftwareVersion;
    NSString *__thrift_platformHardwareVersion;
    NSString *__thrift_deviceUUID;
    NSString *__thrift_deviceName;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
- (id)description;
- (void)write:(id)arg1;
- (id)initWithAppVersion:(id)arg1 platformType:(int)arg2 platformSoftwareVersion:(id)arg3 platformHardwareVersion:(id)arg4 deviceUUID:(id)arg5 deviceName:(id)arg6;
- (id)init;

@end
