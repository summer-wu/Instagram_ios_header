//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGExploreFeedViewController.h"

#import "IGAnalyticsModule.h"
#import "IGContactsFriendsViewControllerDelegate.h"
#import "IGFindUsersViewDataSourceDelegate.h"

@class IGDiscoverMorePeopleConnectionView, IGFindUsersViewDataSource, NSArray, NSMutableSet, NSString, UIView;

@interface IGPeopleFeedViewController : IGExploreFeedViewController <IGFindUsersViewDataSourceDelegate, IGContactsFriendsViewControllerDelegate, IGAnalyticsModule>
{
    id _delegate;
    NSArray *_forcedUserIDs;
    CDUnknownBlockType _dismissBlock;
    NSMutableSet *_loggedImpressions;
    IGFindUsersViewDataSource *_dataSource;
    UIView *_connectionHeaderView;
    IGDiscoverMorePeopleConnectionView *_facebookConnectionView;
    IGDiscoverMorePeopleConnectionView *_contactsConnectionView;
    IGDiscoverMorePeopleConnectionView *_vkConnectionView;
    int _feedType;
}

@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) IGDiscoverMorePeopleConnectionView *vkConnectionView; // @synthesize vkConnectionView=_vkConnectionView;
@property(retain, nonatomic) IGDiscoverMorePeopleConnectionView *contactsConnectionView; // @synthesize contactsConnectionView=_contactsConnectionView;
@property(retain, nonatomic) IGDiscoverMorePeopleConnectionView *facebookConnectionView; // @synthesize facebookConnectionView=_facebookConnectionView;
@property(retain, nonatomic) UIView *connectionHeaderView; // @synthesize connectionHeaderView=_connectionHeaderView;
@property(retain, nonatomic) IGFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) NSArray *forcedUserIDs; // @synthesize forcedUserIDs=_forcedUserIDs;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (BOOL)enableNavState;
- (int)viewType;
- (void)contactsViewControllerWillDisconnectContacts:(id)arg1;
- (void)contactsViewController:(id)arg1 didDisconnectContactsWithSuccess:(BOOL)arg2;
- (void)logMediaImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(int)arg3 mediaIndex:(unsigned int)arg4;
- (void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)logDismiss:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logFollow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logTap:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(unsigned int)arg3;
- (void)logAYMFEvent:(id)arg1 userID:(id)arg2 atPosition:(unsigned int)arg3 fullScreen:(BOOL)arg4 algorithm:(id)arg5;
- (void)followStatusNotification:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (BOOL)disableNonEdgeNavigationGesture;
- (BOOL)disableNavigationGesture;
- (void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)didDisplayObject:(id)arg1 atIndex:(int)arg2;
- (void)willDisplayObject:(id)arg1 atIndex:(int)arg2;
- (void)didUnfollowObject:(id)arg1 atIndex:(int)arg2;
- (void)didFollowObject:(id)arg1 atIndex:(int)arg2;
- (void)didDismissObject:(id)arg1 atIndex:(int)arg2;
- (void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned int)arg3;
- (void)didSelectObject:(id)arg1 atIndex:(int)arg2;
- (id)exploreViewModelForObject:(id)arg1;
- (void)fetchMoreData;
- (void)fetchData;
- (id)feedStatusViewDataSource;
- (id)headerView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithDataSource:(id)arg1 feedType:(int)arg2;
- (void)dealloc;
- (void)setProfileChainingDismissBlockWithUser:(id)arg1;
- (id)titleLabelWithUserName:(id)arg1;
- (id)initProfileChainingPeopleFeedViewControllerWithUser:(id)arg1;
- (id)initExplorePeopleFeedViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
