//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKAppEventsDeviceInfo : NSObject
{
}

+ (id)_getCarrier;
+ (unsigned int)_readSysCtlUInt:(int)arg1 type:(int)arg2;
+ (unsigned int)_coreCount;
+ (id)_getRemainingDiskSpace;
+ (id)_getTotalDiskSpace;
+ (void)initialize;
+ (void)extendDictionaryWithDeviceInfo:(id)arg1;
- (id)_generateEncoding;
- (void)_collectGroup1Data;
- (BOOL)_isGroup1Expired;
- (void)_collectPersistentData;
- (void)setEncodedDeviceInfo:(id)arg1;
- (id)encodedDeviceInfo;

@end

