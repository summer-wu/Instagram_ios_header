//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUIPerfLoggable.h"

@class NSString;

@interface IGDirectUIPerfLogProxy : NSObject <IGUIPerfLoggable>
{
    NSString *_view;
    NSString *_threadID;
}

@property(retain, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(retain, nonatomic) NSString *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)allEventsLoggedWithResult:(id)arg1;
- (unsigned int)lastLogEvent;
- (BOOL)shouldLogEvent:(unsigned int)arg1;
- (id)initWithView:(id)arg1 threadID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

