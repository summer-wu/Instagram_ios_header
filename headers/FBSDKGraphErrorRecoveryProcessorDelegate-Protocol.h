//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKGraphErrorRecoveryProcessor, NSError;

@protocol FBSDKGraphErrorRecoveryProcessorDelegate <NSObject>
- (void)processorDidAttemptRecovery:(FBSDKGraphErrorRecoveryProcessor *)arg1 didRecover:(BOOL)arg2 error:(NSError *)arg3;

@optional
- (BOOL)processorWillProcessError:(FBSDKGraphErrorRecoveryProcessor *)arg1 error:(NSError *)arg2;
@end

