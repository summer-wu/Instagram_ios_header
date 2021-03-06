//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKSettings : NSObject
{
}

+ (id)graphAPIDebugParamValue;
+ (void)updateGraphAPIDebugBehavior;
+ (void)setUserAgentSuffix:(id)arg1;
+ (id)userAgentSuffix;
+ (id)accessTokenCache;
+ (id)sdkVersion;
+ (id)legacyUserDefaultTokenInformationKeyName;
+ (void)setLegacyUserDefaultTokenInformationKeyName:(id)arg1;
+ (void)disableLoggingBehavior:(id)arg1;
+ (void)enableLoggingBehavior:(id)arg1;
+ (void)setLoggingBehavior:(id)arg1;
+ (id)loggingBehavior;
+ (void)setLimitEventAndDataUsage:(BOOL)arg1;
+ (BOOL)limitEventAndDataUsage;
+ (void)setJPEGCompressionQuality:(float)arg1;
+ (float)JPEGCompressionQuality;
+ (BOOL)isGraphErrorRecoveryDisabled;
+ (void)setGraphErrorRecoveryDisabled:(BOOL)arg1;
+ (void)_setJPEGCompressionQualityNumber:(id)arg1;
+ (id)_JPEGCompressionQualityNumber;
+ (void)setFacebookDomainPart:(id)arg1;
+ (id)facebookDomainPart;
+ (void)setDisplayName:(id)arg1;
+ (id)displayName;
+ (void)setClientToken:(id)arg1;
+ (id)clientToken;
+ (void)setAppURLSchemeSuffix:(id)arg1;
+ (id)appURLSchemeSuffix;
+ (void)setAppID:(id)arg1;
+ (id)appID;
+ (void)initialize;
- (void)setAccessTokenCache:(id)arg1;
- (id)init;

@end

