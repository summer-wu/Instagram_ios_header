//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSDate, NSString, NSTimer;

@interface IGLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CLLocation *_lastGoodLocation;
    NSTimer *_locationTimer;
    NSDate *_appOpenDate;
    BOOL _isLocating;
}

+ (int)authorizationStatus;
+ (BOOL)isLocationUseAuthorized;
+ (id)sharedLocationManager;
@property(readonly, nonatomic) BOOL isLocating; // @synthesize isLocating=_isLocating;
- (void).cxx_destruct;
- (void)timeoutLocationUpdate;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)requestAuthorization;
- (void)stopUpdatingLocation;
- (BOOL)isRecentLocation:(id)arg1;
- (BOOL)isCachedLocation:(id)arg1;
- (void)startUpdatingLocationWithTimeout:(double)arg1;
- (void)startUpdatingLocation;
- (id)recentLocation;
@property(readonly, nonatomic) CLLocation *currentLocation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

