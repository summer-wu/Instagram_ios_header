//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGCoreTextLinkHandler.h"

@class NSString;

@interface IGUsertagSettingsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler>
{
    int _savedReviewSetting;
    int _selectedReviewSetting;
    BOOL _isLoading;
    int _photoCount;
}

@property(nonatomic) int photoCount; // @synthesize photoCount=_photoCount;
- (void)onDoneButtonTapped;
- (void)submitWithRemoveAll:(BOOL)arg1 startHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)submitWithStartHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 subtitleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

