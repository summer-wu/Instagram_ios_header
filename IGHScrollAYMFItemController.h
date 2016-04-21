//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListItemController.h"

#import "IGHScrollAYMFBannerCellDelegate.h"
#import "IGHScrollAYMFCellItemControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGListItemType.h"
#import "UICollectionViewDelegate.h"

@class IGHScrollAYMFModel, IGListAdapter, NSMutableArray, NSString;

@interface IGHScrollAYMFItemController : IGListItemController <IGListAdapterDataSource, IGListAdapterDelegate, IGHScrollAYMFCellItemControllerDelegate, UICollectionViewDelegate, IGHScrollAYMFBannerCellDelegate, IGListItemType>
{
    IGListAdapter *_listAdapter;
    IGHScrollAYMFModel *_hScrollAYMFModel;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) IGHScrollAYMFModel *hScrollAYMFModel; // @synthesize hScrollAYMFModel=_hScrollAYMFModel;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void).cxx_destruct;
- (void)logFeaturedUserInfoDismissed:(id)arg1 atIndex:(unsigned int)arg2 wasLastUser:(BOOL)arg3;
- (void)pushControllerForUser:(id)arg1;
- (void)pushPeopleFeedController;
- (void)didTapActionButton:(id)arg1;
- (void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2;
- (void)didTapAYMFCell:(id)arg1;
- (void)didDismissAYMFCell:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3;
- (void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2;
- (id)itemsForListAdapter:(id)arg1;
- (id)supplementaryViewSource;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)cellForItemAtIndex:(int)arg1;
- (struct CGSize)estimatedSizeForItemAtIndex:(int)arg1;
- (struct CGSize)sizeForItemAtIndex:(int)arg1;
- (unsigned int)numberOfItems;
- (id)cellClasses;
- (id)initWithHScrollAYMFModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

