//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNonCurrentUserDefaults, NSDictionary, NSString, UIViewController;

@protocol IGServiceHelperProtocol <NSObject>
+ (void)clearForUserPK:(NSString *)arg1;
+ (NSString *)shortServiceName;
+ (NSString *)serviceName;
- (UIViewController *)viewControllerForAdvancedOptions;
- (NSDictionary *)sharingInfo;
- (BOOL)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (BOOL)requiresLocationCoordinate;
- (BOOL)supportsMediaType:(int)arg1;
- (BOOL)isAvailableInCurrentLocale;
- (BOOL)hasAdvancedOptions;
- (BOOL)isConfigurable;
- (BOOL)isConfigured;
- (void)logoutAndUnlink;
- (void)logout;
- (id)initWithSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1;

@optional
- (BOOL)mayExcludeFromAbbreviatedList;
- (BOOL)hasEverBeenConfigured;
- (NSString *)currentDetailText;
- (BOOL)canToggle;
- (NSString *)currentUsername;
- (void)invalidate;
- (void)clearActiveSession;
@end

