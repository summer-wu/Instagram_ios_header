//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFoursquareAuthViewController, NSString;

@protocol IGFoursquareAuthDelegate <NSObject>
- (void)foursquareAuthControllerLoginFailed:(IGFoursquareAuthViewController *)arg1;
- (void)foursquareAuthController:(IGFoursquareAuthViewController *)arg1 didLoginWithAccessToken:(NSString *)arg2 username:(NSString *)arg3;
@end

