//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKBridgeAPIProtocol.h"

@class NSString;

@interface FBSDKBridgeAPIProtocolWebV1 : NSObject <FBSDKBridgeAPIProtocol>
{
}

- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(char *)arg3 error:(id *)arg4;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

