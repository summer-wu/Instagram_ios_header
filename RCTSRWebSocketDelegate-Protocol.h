//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString, RCTSRWebSocket;

@protocol RCTSRWebSocketDelegate <NSObject>
- (void)webSocket:(RCTSRWebSocket *)arg1 didReceiveMessage:(id)arg2;

@optional
- (void)webSocket:(RCTSRWebSocket *)arg1 didReceivePong:(NSData *)arg2;
- (void)webSocket:(RCTSRWebSocket *)arg1 didCloseWithCode:(int)arg2 reason:(NSString *)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(RCTSRWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(RCTSRWebSocket *)arg1;
@end

