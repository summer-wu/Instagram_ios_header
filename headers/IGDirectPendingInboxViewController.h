//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectPendingThreadViewDelegate.h"
#import "IGPullToRefreshProtocol.h"
#import "IGUIPerfLoggable.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGDirectUIPerfLogProxy, IGPullToRefreshViewManager, NSNumber, NSOrderedSet, NSSet, NSString, UIBarButtonItem, UIButton, UITableView, UIView;

@interface IGDirectPendingInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingThreadViewDelegate, IGPullToRefreshProtocol, IGUIPerfLoggable>
{
    BOOL _loadingPreviousThreads;
    BOOL _hasFakedPullToRefresh;
    BOOL _hasPendingChanges;
    id <IGDirectPendingInboxDelegate> _delegate;
    NSNumber *_totalPending;
    UITableView *_tableView;
    NSOrderedSet *_threads;
    NSString *_nextMaxId;
    IGPullToRefreshViewManager *_pullToRefreshViewManager;
    UIView *_headerLabel;
    UIView *_footerView;
    NSSet *_selectedThreads;
    UIButton *_declineButton;
    UIButton *_allowButton;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerButton;
    IGDirectUIPerfLogProxy *_perfLogProxy;
}

@property(retain, nonatomic) IGDirectUIPerfLogProxy *perfLogProxy; // @synthesize perfLogProxy=_perfLogProxy;
@property(retain, nonatomic) UIBarButtonItem *spinnerButton; // @synthesize spinnerButton=_spinnerButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(copy, nonatomic) UIButton *allowButton; // @synthesize allowButton=_allowButton;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) NSSet *selectedThreads; // @synthesize selectedThreads=_selectedThreads;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) BOOL hasFakedPullToRefresh; // @synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh;
@property(retain, nonatomic) IGPullToRefreshViewManager *pullToRefreshViewManager; // @synthesize pullToRefreshViewManager=_pullToRefreshViewManager;
@property(copy, nonatomic) NSString *nextMaxId; // @synthesize nextMaxId=_nextMaxId;
@property(nonatomic) BOOL loadingPreviousThreads; // @synthesize loadingPreviousThreads=_loadingPreviousThreads;
@property(retain, nonatomic) NSOrderedSet *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSNumber *totalPending; // @synthesize totalPending=_totalPending;
@property(nonatomic) __weak id <IGDirectPendingInboxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)allEventsLoggedWithResult:(id)arg1;
- (unsigned int)lastLogEvent;
- (BOOL)shouldLogEvent:(unsigned int)arg1;
- (BOOL)prefersTabBarHidden;
- (void)updateRightButton;
- (void)setEditing:(BOOL)arg1;
- (id)allowString;
- (id)declineString;
- (void)updateFooterView;
- (void)reloadDataFromPullToRefresh;
- (id)currentActiveScrollView;
- (void)refreshDataWithNextMaxID:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)loadMoreThreads;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)remainingInviterForThreads:(id)arg1;
- (void)threadViewController:(id)arg1 didDeclineThread:(id)arg2;
- (void)threadViewController:(id)arg1 didAcceptThread:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)cellProfilePictureVerticalPadding;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)actionSheetHeaderLabelWithString:(id)arg1;
- (void)declineTapped;
- (void)allowTapped;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (struct UIEdgeInsets)preferredContentInsets;
- (BOOL)disableNonEdgeNavigationGesture;
- (void)toggleEditMode;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
