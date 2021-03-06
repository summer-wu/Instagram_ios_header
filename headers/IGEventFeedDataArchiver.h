//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFileCoordinator, NSString;

@interface IGEventFeedDataArchiver : NSObject
{
    NSString *_eventId;
    IGFileCoordinator *_fileCoordinator;
}

@property(retain, nonatomic) IGFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)unarchiveEventFeedData;
- (BOOL)archiveEventFeedData:(id)arg1;
- (id)initWithEventId:(id)arg1;

@end

