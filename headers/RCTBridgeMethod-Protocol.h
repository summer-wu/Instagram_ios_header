//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, RCTBridge;

@protocol RCTBridgeMethod <NSObject>
@property(readonly, nonatomic) unsigned int functionType;
@property(readonly, copy, nonatomic) NSDictionary *profileArgs;
@property(readonly, copy, nonatomic) NSString *JSMethodName;
- (void)invokeWithBridge:(RCTBridge *)arg1 module:(id)arg2 arguments:(NSArray *)arg3;
@end
