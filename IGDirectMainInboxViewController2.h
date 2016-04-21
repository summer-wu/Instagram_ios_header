//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectInboxControllerType.h"
#import "IGDirectThreadViewControllerDelegate.h"
#import "IGUIPerfLoggable.h"

@class NSString;

@interface IGDirectMainInboxViewController2 : IGViewController <IGDirectInboxControllerType, IGDirectThreadViewControllerDelegate, IGUIPerfLoggable>
{
}

- (void)allEventsLoggedWithResult:(id)arg1;
- (unsigned int)lastLogEvent;
- (BOOL)shouldLogEvent:(unsigned int)arg1;
- (void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3;
- (void)pushToThreadWithThreadId:(id)arg1 animated:(BOOL)arg2 logResult:(id)arg3;
- (void)refreshDataWithClearCount:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (unsigned int)inboxSubscriptionStatus;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
