//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRaindropActivitySession, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGAnalyticsRaindrop : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IGRaindropActivitySession *_currentActivitySession;
    unsigned long long _currentActivitySessionTimestamp;
    id _subscriptionDidBecomeActiveNotification;
    NSMutableArray *_loggedEventDictionaries;
    NSString *_deviceID;
    NSString *_deviceSoftwareVersion;
    NSString *_deviceHardwareVersion;
    NSString *_filePath;
    int _eventCount;
    long long _beaconCount;
    CDUnknownBlockType _extractUserInfo;
    NSString *_appID;
    NSString *_appVersion;
    int _toViewType;
    int _toViewSubType;
    NSString *_toViewEntityId;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *toViewEntityId; // @synthesize toViewEntityId=_toViewEntityId;
@property(nonatomic) int toViewSubType; // @synthesize toViewSubType=_toViewSubType;
@property(nonatomic) int toViewType; // @synthesize toViewType=_toViewType;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) CDUnknownBlockType extractUserInfo; // @synthesize extractUserInfo=_extractUserInfo;
- (void).cxx_destruct;
- (id)getLoggedEvents;
- (void)addLoggedEvent:(id)arg1 logEntry:(id)arg2;
- (void)raindropSwitchWithToViewType:(int)arg1 toViewSubType:(int)arg2 toViewEntityId:(id)arg3;
- (void)logRaindropEvent:(id)arg1 withNavState:(id)arg2;
- (void)_writeGrobalBeaconToFile;
- (void)_readGlobalBeaconFromFile;
- (void)_logRaindropBeaconEvent;
- (void)_logRaindropEntry:(id)arg1 withNavState:(id)arg2;
- (id)_newLogEntryWithNavState:(id)arg1 event:(id)arg2 raindropEventName:(id)arg3 raindropEventData:(id)arg4;
- (id)init;
- (void)dealloc;
- (void)_updateActivitySession;

@end

