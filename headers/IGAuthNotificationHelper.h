//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGAuthNotificationHelper : NSObject
{
}

+ (void)postUserDidChangeNotificationForUser:(id)arg1;
+ (void)postLogoutAllAccountsSuccessfulNotification;
+ (void)postDidLogoutAllAccountNotificationWithLastLoggedInUserWithPK:(id)arg1;
+ (void)postWillLogoutCurrentAccountNotificationWithPK:(id)arg1;
+ (void)postDidSwitchUsersNotificationForNewUserPK:(id)arg1 authLogInType:(int)arg2 entryPoint:(unsigned int)arg3 updatedNumberOfAccounts:(unsigned int)arg4;
+ (void)postWillSwitchUsersNotification;

@end

