//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface IGAppBuildInfo : NSObject
{
    NSURL *_buildURL;
    int _buildNumber;
    int _clientAction;
}

@property(readonly, nonatomic) int clientAction; // @synthesize clientAction=_clientAction;
@property(readonly, nonatomic) int buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly, copy, nonatomic) NSURL *buildURL; // @synthesize buildURL=_buildURL;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBuildURL:(id)arg1 buildNumber:(int)arg2 clientAction:(int)arg3;

@end
