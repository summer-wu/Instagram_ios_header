//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSString;

@interface IGAnalyticsBinarySession : NSObject
{
    NSMutableArray *_currentBatch;
    NSDate *_startTime;
    NSString *_sessionID;
    NSString *_deviceID;
    NSString *_appID;
    NSString *_deviceSoftwareVersion;
    NSString *_deviceHardwareVersion;
    NSString *_appVersion;
}

@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *deviceHardwareVersion; // @synthesize deviceHardwareVersion=_deviceHardwareVersion;
@property(readonly, nonatomic) NSString *deviceSoftwareVersion; // @synthesize deviceSoftwareVersion=_deviceSoftwareVersion;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *currentBatch;
- (id)loggingDataForCurrentBatch;
- (void)addEvent:(id)arg1;
- (void)beginNewBatch;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 deviceID:(id)arg3 deviceSoftwareVersion:(id)arg4 deviceHardwareVersion:(id)arg5;

@end
