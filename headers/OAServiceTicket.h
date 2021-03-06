//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURLResponse, OAMutableURLRequest;

@interface OAServiceTicket : NSObject
{
    OAMutableURLRequest *request;
    NSURLResponse *response;
    NSData *data;
    int responseCode;
    BOOL didSucceed;
}

@property(readonly) BOOL didSucceed; // @synthesize didSucceed;
@property(readonly) int responseCode; // @synthesize responseCode;
@property(readonly) NSData *data; // @synthesize data;
@property(readonly) NSURLResponse *response; // @synthesize response;
@property(readonly) OAMutableURLRequest *request; // @synthesize request;
@property(readonly) NSString *body;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 didSucceed:(BOOL)arg4 responseCode:(int)arg5;

@end

