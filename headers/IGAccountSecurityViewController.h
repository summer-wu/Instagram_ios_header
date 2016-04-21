//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGChangePhoneNumberViewControllerDelegate.h"
#import "IGConfirmPhoneNumberViewControllerDelegate.h"

@class IGGroupedTableViewFooterView, IGSwitch, NSArray, NSString;

@interface IGAccountSecurityViewController : IGGroupedTableViewController <IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate>
{
    BOOL _hasTwoFactor;
    BOOL _hasPhoneNumber;
    NSString *_countryNumber;
    NSString *_phoneNumber;
    NSArray *_backupCodes;
    IGGroupedTableViewFooterView *_twoFactorFooterView;
    IGGroupedTableViewFooterView *_backupAccessFooterView;
    IGSwitch *_twoFactorSwitch;
    int _dataState;
    int _twoFactorState;
}

@property(nonatomic) BOOL hasPhoneNumber; // @synthesize hasPhoneNumber=_hasPhoneNumber;
@property(nonatomic) BOOL hasTwoFactor; // @synthesize hasTwoFactor=_hasTwoFactor;
@property(nonatomic) int twoFactorState; // @synthesize twoFactorState=_twoFactorState;
@property(nonatomic) int dataState; // @synthesize dataState=_dataState;
@property(retain, nonatomic) IGSwitch *twoFactorSwitch; // @synthesize twoFactorSwitch=_twoFactorSwitch;
@property(retain, nonatomic) IGGroupedTableViewFooterView *backupAccessFooterView; // @synthesize backupAccessFooterView=_backupAccessFooterView;
@property(retain, nonatomic) IGGroupedTableViewFooterView *twoFactorFooterView; // @synthesize twoFactorFooterView=_twoFactorFooterView;
@property(retain, nonatomic) NSArray *backupCodes; // @synthesize backupCodes=_backupCodes;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *countryNumber; // @synthesize countryNumber=_countryNumber;
- (void).cxx_destruct;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
- (void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned int)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)adjustTableViewForDataState;
- (void)cancelTwoFactor;
- (void)startConfirmPhoneNumberFlow:(id)arg1;
- (void)sendTwoFactorSMS;
- (void)startAddPhoneNumberFlow;
- (void)updateTwoFactorSettings:(BOOL)arg1;
- (void)dataFetchFailed:(id)arg1;
- (void)dataFetchedWithDictionary:(id)arg1;
- (void)fetchUserData;
- (void)configureBackupAccessCell:(id)arg1 forRow:(int)arg2;
- (void)configureTwoFactorCell:(id)arg1 forRow:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
