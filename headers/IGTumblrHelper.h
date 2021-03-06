//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGXAuthServiceHelper.h"

@class IGSwitch;

@interface IGTumblrHelper : IGXAuthServiceHelper
{
    IGSwitch *_followSwitch;
}

+ (id)serviceName;
+ (id)shortServiceName;
+ (id)sharedTumblrHelper;
- (void).cxx_destruct;
- (void)onTumblrLoginCompleted:(id)arg1;
- (void)followTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)followTicket:(id)arg1 didSucceedWithData:(id)arg2;
- (void)followInstagram;
- (id)followSwitch;
- (void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
- (id)viewControllerForAdvancedOptions;
- (int)numberOfExtraRowsForLogin;
- (id)loginErrorMessage;
- (id)URLString;
- (id)consumerSecret;
- (id)consumerKey;
- (int)usernameType;
- (BOOL)hasEverBeenConfigured;
- (BOOL)isAvailableInCurrentLocale;
- (BOOL)isConfigurable;
- (void)dealloc;
- (id)initWithSessionUserDefaults:(id)arg1;

@end

