//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTRedBox : NSObject <RCTBridgeModule>
{
}

+ (id)moduleName;
- (void)dismiss;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2 showIfHidden:(BOOL)arg3;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withDetails:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showError:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

