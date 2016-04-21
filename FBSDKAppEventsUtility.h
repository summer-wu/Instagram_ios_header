//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKAppEventsUtility : NSObject
{
}

+ (long)unixTimeNow;
+ (id)tokenStringToUseFor:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)persistenceFilePath:(id)arg1;
+ (void)persistAnonymousID:(id)arg1;
+ (BOOL)validateIdentifier:(id)arg1;
+ (BOOL)regexValidateIdentifier:(id)arg1;
+ (void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(BOOL)arg2;
+ (void)logAndNotify:(id)arg1;
+ (id)flushReasonToString:(unsigned int)arg1;
+ (void)ensureOnMainThread;
+ (void)clearLibraryFiles;
+ (id)attributionID;
+ (id)anonymousID;
+ (unsigned int)advertisingTrackingStatus;
+ (id)advertiserID;
+ (id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(BOOL)arg2 shouldAccessAdvertisingID:(BOOL)arg3;
- (id)init;

@end

