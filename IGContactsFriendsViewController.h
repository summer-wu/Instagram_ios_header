//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFindUsersViewController.h"

#import "IGActionSheetDelegate.h"
#import "IGContactsFriendsHelperDelegate.h"
#import "IGRaindropAnalyticsDelegate.h"

@class IGContactsFriendsHelper, NSString, UIBarButtonItem;

@interface IGContactsFriendsViewController : IGFindUsersViewController <IGActionSheetDelegate, IGContactsFriendsHelperDelegate, IGRaindropAnalyticsDelegate>
{
    id <IGContactsFriendsViewControllerDelegate> _delegate;
    IGContactsFriendsHelper *_helper;
    UIBarButtonItem *_configureButton;
}

@property(retain, nonatomic) UIBarButtonItem *configureButton; // @synthesize configureButton=_configureButton;
@property(retain, nonatomic) IGContactsFriendsHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) __weak id <IGContactsFriendsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)contactsFriendsHelperDidTapLearnMore:(id)arg1;
- (void)disconnectContacts;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (BOOL)allowEmptyStateAndEmptyFeedLoadingIndicator;
- (void)findUsersView:(id)arg1 didLoadUsers:(id)arg2;
- (void)onConfigureButtonTapped:(id)arg1;
- (void)authorizeAndFetchUsers;
- (void)updateNavigationRightBarButtonItem;
- (id)newFindUsersView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

