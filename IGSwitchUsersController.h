//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGImageViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, UITableView;

@interface IGSwitchUsersController : NSObject <IGImageViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isSubmitting;
    UITableView *_tableView;
    id <IGSwitchUsersControllerDelegate> _delegate;
    NSArray *_usersArray;
    unsigned int _switchUsersMode;
    NSDictionary *_badgeDict;
}

@property(nonatomic) BOOL isSubmitting; // @synthesize isSubmitting=_isSubmitting;
@property(retain, nonatomic) NSDictionary *badgeDict; // @synthesize badgeDict=_badgeDict;
@property(nonatomic) unsigned int switchUsersMode; // @synthesize switchUsersMode=_switchUsersMode;
@property(retain, nonatomic) NSArray *usersArray; // @synthesize usersArray=_usersArray;
@property(nonatomic) __weak id <IGSwitchUsersControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateNeedsAttention;
- (void)fetchBadges;
- (id)addAccountCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)userCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)imageViewLoadedImage:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateUserData;
- (float)minimumTableViewHeight;
- (id)initWithSwitchUsersMode:(unsigned int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

