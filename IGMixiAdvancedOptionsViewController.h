//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class NSArray, NSDictionary, UIBarButtonItem;

@interface IGMixiAdvancedOptionsViewController : IGGroupedTableViewController
{
    NSArray *_availablePrivacySettings;
    NSDictionary *_privacySettingsMap;
    int _originalPrivacySetting;
    UIBarButtonItem *_doneButtonItem;
    id <IGMixiAdvancedOptionsDelegate> _delegate;
}

@property(nonatomic) __weak id <IGMixiAdvancedOptionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDoneTapped:(id)arg1;
- (void)onCancelModal;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)unlinkCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 optionCellForRow:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end
