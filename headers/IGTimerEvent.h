//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGEventAggregator.h"

@class NSMutableDictionary;

@interface IGTimerEvent : IGEventAggregator
{
    NSMutableDictionary *_pendingEvents;
}

@property(retain, nonatomic) NSMutableDictionary *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
- (void).cxx_destruct;
- (id)processEvent:(id)arg1;
- (id)keyForTimer:(id)arg1 uuid:(id)arg2;
- (id)createEventObjectForTimer:(id)arg1 uuid:(id)arg2;
- (void)reset;
- (void)save;
- (void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3;
- (void)startTimer:(id)arg1 uuid:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

