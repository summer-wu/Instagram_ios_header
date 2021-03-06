//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKInternalUtility : NSObject
{
}

+ (BOOL)isRegisteredCanOpenURLScheme:(id)arg1;
+ (void)checkRegisteredCanOpenURLScheme:(id)arg1;
+ (BOOL)isRegisteredURLScheme:(id)arg1;
+ (id)topMostViewController;
+ (void)validateURLSchemes;
+ (void)validateAppID;
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(CDUnknownBlockType)arg2 stop:(char *)arg3;
+ (int)_compareOperatingSystemVersion:(CDStruct_7a8704ee)arg1 toVersion:(CDStruct_7a8704ee)arg2;
+ (BOOL)isMessengerAppInstalled;
+ (BOOL)isFacebookAppInstalled;
+ (id)viewControllerforView:(id)arg1;
+ (void)unregisterTransientObject:(id)arg1;
+ (void)registerTransientObject:(id)arg1;
+ (void)deleteFacebookCookies;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id *)arg5;
+ (BOOL)shouldManuallyAdjustOrientation;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (CDStruct_7a8704ee)operatingSystemVersion;
+ (id)objectForJSONString:(id)arg1 error:(id *)arg2;
+ (BOOL)object:(id)arg1 isEqualToObject:(id)arg2;
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (BOOL)isUIKitRunTimeVersionAtLeast:(int)arg1;
+ (BOOL)isUIKitLinkTimeVersionAtLeast:(int)arg1;
+ (BOOL)isSafariBundleIdentifier:(id)arg1;
+ (BOOL)isOSRunTimeVersionAtLeast:(CDStruct_7a8704ee)arg1;
+ (BOOL)isFacebookBundleIdentifier:(id)arg1;
+ (BOOL)isBrowserURL:(id)arg1;
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id *)arg5;
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
+ (void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3;
+ (void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;
+ (BOOL)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
+ (unsigned long)currentTimeInMilliseconds;
+ (id)convertRequestValue:(id)arg1;
+ (id)bundleForStrings;
+ (void)array:(id)arg1 addObject:(id)arg2;
+ (id)dictionaryFromFBURL:(id)arg1;
+ (id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
+ (id)appURLScheme;
- (id)init;

@end

