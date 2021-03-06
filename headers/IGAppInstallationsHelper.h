//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString, SKStoreProductViewController;

@interface IGAppInstallationsHelper : NSObject <SKStoreProductViewControllerDelegate>
{
    SKStoreProductViewController *_controller;
    NSString *_appStoreViewControllerLastAppID;
}

+ (void)openLayoutWithAsset:(id)arg1 assetIdentifier:(id)arg2;
+ (void)openBoomerang;
+ (BOOL)isBoomerangAppInstalled;
+ (BOOL)isLayoutAppInstalled;
+ (BOOL)isHyperlapseAppInstalled;
+ (BOOL)isFBAppInstalled;
+ (void)logAppInstallationsInfo;
+ (BOOL)isAppInstalled:(id)arg1;
@property(retain, nonatomic) NSString *appStoreViewControllerLastAppID; // @synthesize appStoreViewControllerLastAppID=_appStoreViewControllerLastAppID;
@property(retain, nonatomic) SKStoreProductViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)appDidEnterForeground;
- (void)presentAppStoreViewControllerForAppID:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

