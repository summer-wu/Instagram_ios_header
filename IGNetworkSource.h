//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRequest, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IGNetworkSource : NSObject
{
    BOOL _secure;
    BOOL _cancelsPreviousRequest;
    BOOL _loading;
    id <IGNetworkSourceDelegate> _delegate;
    id <IGNetworkParser> _parser;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_fetchPath;
    unsigned int _fetchType;
    NSDictionary *_constantParameters;
    NSObject *_stateMutext;
    IGRequest *_previousRequest;
    NSString *_nextMaxID;
}

+ (void)appendTopAggregatorOverride:(id)arg1;
@property(copy, nonatomic) NSString *nextMaxID; // @synthesize nextMaxID=_nextMaxID;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGRequest *previousRequest; // @synthesize previousRequest=_previousRequest;
@property(retain, nonatomic) NSObject *stateMutext; // @synthesize stateMutext=_stateMutext;
@property(readonly, nonatomic) BOOL cancelsPreviousRequest; // @synthesize cancelsPreviousRequest=_cancelsPreviousRequest;
@property(readonly, nonatomic, getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) NSDictionary *constantParameters; // @synthesize constantParameters=_constantParameters;
@property(readonly, nonatomic) unsigned int fetchType; // @synthesize fetchType=_fetchType;
@property(readonly, copy, nonatomic) NSString *fetchPath; // @synthesize fetchPath=_fetchPath;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) id <IGNetworkParser> parser; // @synthesize parser=_parser;
@property(readonly, nonatomic) __weak id <IGNetworkSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleFailure:(id)arg1;
- (void)handleSuccessObject:(id)arg1 isLoadMore:(BOOL)arg2;
- (void)updateWithResponse:(id)arg1;
- (id)requestWithParameters:(id)arg1;
- (id)fetchURL;
- (id)parametersWithParameters:(id)arg1;
- (id)appendParameters:(id)arg1 withMaxID:(id)arg2;
- (BOOL)isMoreAvailable;
- (void)cancel;
- (void)fetchWithParameters:(id)arg1 isLoadMore:(BOOL)arg2;
- (void)fetchMoreWithParameters:(id)arg1;
- (void)fetchMore;
- (void)fetchWithParameters:(id)arg1;
- (void)fetch;
- (id)initWithDelegate:(id)arg1 parser:(id)arg2 delegateQueue:(id)arg3 fetchPath:(id)arg4 fetchType:(unsigned int)arg5 constantParameters:(id)arg6 secure:(BOOL)arg7 cancelsPreviousRequest:(BOOL)arg8;

@end
