//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBusinessConversionCityViewControllerDelegate.h"
#import "IGBusinessConversionEditableProfileCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGFacebookPageInfo, NSString, UITableView, UIView;

@interface IGBusinessConversionAddressViewController : IGViewController <IGBusinessConversionCityViewControllerDelegate, IGBusinessConversionEditableProfileCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    BOOL _showStatusBar;
    BOOL _isEditing;
    id <IGBusinessConversionAddressViewControllerDelegate> _delegate;
    IGFacebookPageInfo *_pageInfo;
    UIView *_headerView;
    UITableView *_tableView;
}

@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IGFacebookPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) BOOL showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property(nonatomic) __weak id <IGBusinessConversionAddressViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)editableProfileCell:(id)arg1 toggledBoolValue:(BOOL)arg2 forKey:(id)arg3;
- (void)cityViewController:(id)arg1 dismissWithCity:(id)arg2;
- (void)updateButtonState;
- (BOOL)editableProfileCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3;
- (void)editableProfileCellDidBeginEditing:(id)arg1;
- (void)editableProfileCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3;
- (BOOL)prefersStatusBarHidden;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)removeAddress;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)footerString;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (void)saveChanges;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
