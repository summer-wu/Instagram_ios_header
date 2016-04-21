//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGraphQLRequest, IGGraphQLService;

@interface IGBusinessGraphQLService : NSObject
{
    IGGraphQLService *_graphQLService;
    IGGraphQLRequest *_request;
}

@property(retain, nonatomic) IGGraphQLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) IGGraphQLService *graphQLService; // @synthesize graphQLService=_graphQLService;
- (void).cxx_destruct;
- (void)restartRequest;
- (void)sendNoAccessTokenErrorWithRequest:(id)arg1;
- (void)getAccessTokenAndRestartRequestIfPossibleForRequest:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)init;

@end

