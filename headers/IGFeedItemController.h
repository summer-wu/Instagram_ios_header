//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListItemController.h"

#import "IGActionSheetDelegate.h"
#import "IGAlbumFullscreenViewControllerDelegate.h"
#import "IGFeedItemActionCellDelegate.h"
#import "IGFeedItemAlbumCellDelegate.h"
#import "IGFeedItemBusinessCellDelegate.h"
#import "IGFeedItemHeaderDelegate.h"
#import "IGFeedItemPageCellDelegate.h"
#import "IGFeedItemPhotoCellDelegate.h"
#import "IGFeedItemTextCellDelegate.h"
#import "IGFeedVideoCellAnalyticsDelegate.h"
#import "IGFeedVideoCellInteractionDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGListItemType.h"
#import "IGListSupplementaryViewSource.h"
#import "IGRaindropAnalyticsDelegate.h"
#import "IGUserInTagDisplayDelegate.h"

@class IGAlbumFocusCoordinator, IGAnalyticsMetadata, IGFeedDirectResponseHandler, IGFeedHeartAnimator, IGFeedItem, IGFeedItemPageCellState, IGFeedItemTimelineViewModel, IGFeedVideoCellManager, IGListAdapterScrollingContext, IGUser, NSArray, NSString;

@interface IGFeedItemController : IGListItemController <IGActionSheetDelegate, IGAlbumFullscreenViewControllerDelegate, IGFeedItemActionCellDelegate, IGFeedItemAlbumCellDelegate, IGFeedItemHeaderDelegate, IGFeedItemPageCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedItemTextCellDelegate, IGFeedVideoCellInteractionDelegate, IGFeedVideoCellAnalyticsDelegate, IGListDisplayDelegate, IGListSupplementaryViewSource, IGRaindropAnalyticsDelegate, IGUserInTagDisplayDelegate, IGFeedItemBusinessCellDelegate, IGListItemType>
{
    BOOL _pendingDidEndDisplayCollapse;
    IGAnalyticsMetadata *_analyticsMetadata;
    IGFeedItem *_feedItem;
    id <IGFeedItemConfigurationType> _configuration;
    NSArray *_cellClasses;
    IGFeedHeartAnimator *_heartAnimator;
    IGUser *_currentUser;
    IGFeedVideoCellManager *_videoCellManager;
    IGListAdapterScrollingContext *_scrollingContext;
    id <IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> _loggingProvider;
    IGFeedDirectResponseHandler *_directResponseHandler;
    IGFeedItemTimelineViewModel *_itemViewModel;
    IGFeedItemPageCellState *_pageCellState;
    IGAlbumFocusCoordinator *_albumFocusCoordinator;
}

+ (id)feedCellTypeClassMap;
@property(nonatomic) BOOL pendingDidEndDisplayCollapse; // @synthesize pendingDidEndDisplayCollapse=_pendingDidEndDisplayCollapse;
@property(readonly, nonatomic) IGAlbumFocusCoordinator *albumFocusCoordinator; // @synthesize albumFocusCoordinator=_albumFocusCoordinator;
@property(retain, nonatomic) IGFeedItemPageCellState *pageCellState; // @synthesize pageCellState=_pageCellState;
@property(retain, nonatomic) IGFeedItemTimelineViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(retain, nonatomic) IGFeedDirectResponseHandler *directResponseHandler; // @synthesize directResponseHandler=_directResponseHandler;
@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> loggingProvider; // @synthesize loggingProvider=_loggingProvider;
@property(readonly, nonatomic) __weak IGListAdapterScrollingContext *scrollingContext; // @synthesize scrollingContext=_scrollingContext;
@property(readonly, nonatomic) __weak IGFeedVideoCellManager *videoCellManager; // @synthesize videoCellManager=_videoCellManager;
@property(readonly, nonatomic) __weak IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) __weak IGFeedHeartAnimator *heartAnimator; // @synthesize heartAnimator=_heartAnimator;
@property(readonly, nonatomic) NSArray *cellClasses; // @synthesize cellClasses=_cellClasses;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) IGAnalyticsMetadata *analyticsMetadata; // @synthesize analyticsMetadata=_analyticsMetadata;
- (void).cxx_destruct;
- (void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3;
- (void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2;
- (int)feedVideoCellPosition:(id)arg1;
- (id)feedVideoCellCurrentIGAnalyticsMetadata:(id)arg1;
- (void)videoCellDidDoubleTap:(id)arg1;
- (void)actionSheetFinishedHiding;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)feedItemPageCellDidDoubleTapToLike:(id)arg1;
- (void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(BOOL)arg2;
- (void)feedItemPageCellDidInitialSingleTap:(id)arg1;
- (void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
- (void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2;
- (void)feedItemPhotoCellImageDidLoadImage:(id)arg1;
- (void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(BOOL)arg2;
- (void)feedItemPhotoCellDidInitialSingleTap:(id)arg1;
- (void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1;
- (void)albumFullscreenViewControllerShouldDismiss:(id)arg1;
- (void)feedItemAlbumCellDidTap:(id)arg1;
- (void)feedItemHeaderDidTapFollowButton:(id)arg1;
- (void)feedItemHeaderDidTapCustomizableButton:(id)arg1;
- (void)feedItemHeaderDidTapAddLocation:(id)arg1;
- (void)feedItemHeaderDidTapOnMoreButton:(id)arg1;
- (void)feedItemHeaderDidTapLocation:(id)arg1;
- (void)feedItemHeaderDidTapUser:(id)arg1;
- (void)feedItemActionCellPageControlDidChangeValue:(id)arg1;
- (void)feedItemActionCellDidTapCustomizableButton:(id)arg1;
- (void)feedItemActionCellDidTapSendButton:(id)arg1;
- (void)feedItemActionCellDidTapLikeButton:(id)arg1;
- (void)feedItemActionCellDidTapMoreButton:(id)arg1;
- (void)feedItemActionCellDidTapCommentButton:(id)arg1;
- (void)feedItemBusinessCellDidTapPromote:(id)arg1;
- (void)feedItemBusinessCellDidTapViewInsights:(id)arg1;
- (void)feedItemTextCellDidTapOnMore:(id)arg1;
- (void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2;
- (void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2;
- (void)onFeedItemDeleted:(id)arg1;
- (void)onFeedItemHidden:(id)arg1;
- (void)onFeedItemUpdated:(id)arg1;
- (void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4;
- (struct CGSize)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2;
- (id)supplementaryViewKindClasses;
- (id)displayDelegate;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)cellForItemAtIndex:(int)arg1;
- (struct CGSize)estimatedSizeForItemAtIndex:(int)arg1;
- (struct CGSize)sizeForItemAtIndex:(int)arg1;
- (unsigned int)numberOfItems;
- (void)configureBusinessCell:(id)arg1;
- (void)configureHiddenNoReasonCell:(id)arg1;
- (void)configureAlbumCell:(id)arg1;
- (void)configurePageCell:(id)arg1;
- (void)configureVideoCell:(id)arg1;
- (void)configureTextCell:(id)arg1 forIndex:(int)arg2;
- (void)configurePhotoCell:(id)arg1;
- (void)configureActionCell:(id)arg1;
- (void)configurePlaceholderCell:(id)arg1 forType:(int)arg2;
- (void)pushLocationController;
- (void)pushCommentsWithReplyText:(id)arg1;
- (void)presentUsertagsController;
- (id)ctaPresenterContextForFeedItem:(id)arg1 presentationContext:(id)arg2;
- (void)pushControllerForUser:(id)arg1;
- (void)handleFeedItemChange:(int)arg1;
- (void)reloadLikeAndUFICells;
- (void)hideForDidEndDisplay;
- (id)pageCell;
- (id)actionCell;
- (void)showOverlayWithDelay:(float)arg1 index:(int)arg2;
- (void)animateHeartAndPerformLike;
@property(readonly, copy) NSString *description;
- (id)initWithFeedItem:(id)arg1 configuration:(id)arg2 heartAnimator:(id)arg3 videoCellManager:(id)arg4 scrollingContext:(id)arg5 loggingProvider:(id)arg6 currentUser:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

