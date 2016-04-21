//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGTokenBucket : NSObject
{
    unsigned int _maxTokens;
    double _rate;
    double _tokens;
    double _lastHitTimestamp;
}

@property(nonatomic) double lastHitTimestamp; // @synthesize lastHitTimestamp=_lastHitTimestamp;
@property(nonatomic) double tokens; // @synthesize tokens=_tokens;
@property(nonatomic) unsigned int maxTokens; // @synthesize maxTokens=_maxTokens;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (BOOL)hit;
- (id)initWithRate:(unsigned int)arg1 maxTokens:(unsigned int)arg2;

@end
