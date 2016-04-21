//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGWebViewControllerContinuationDelegate.h"
#import "UITableViewDataSource.h"

@class IGFeedItem, NSString;

@interface IGFeedItemHideHandler : NSObject <IGWebViewControllerContinuationDelegate, UITableViewDataSource>
{
    IGFeedItem *_feedItem;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
}

@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (BOOL)webViewController:(id)arg1 shouldStartLoadWithURL:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)sectionHeaderViewForTableView:(id)arg1;
- (void)hideForReasonAtIndex:(unsigned int)arg1;
- (void)hideForReason:(id)arg1 withExtraDictionary:(id)arg2;
- (BOOL)hasReasonAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfOptions;
- (id)initWithFeedItem:(id)arg1 loggingDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

