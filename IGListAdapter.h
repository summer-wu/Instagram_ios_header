//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListCollectionContext.h"
#import "IGListVerticalLayoutDataSource.h"
#import "IGListVerticalLayoutEstimatingDataSource.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGListAdapterProxy, IGListCollectionView, IGListDisplayHandler, IGListItemMap, NSMutableSet, NSString, UICollectionView, UIView;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListVerticalLayoutDataSource, IGListVerticalLayoutEstimatingDataSource, IGListCollectionContext>
{
    UICollectionView *_collectionView;
    BOOL _isInUpdateItemBlock;
    id <IGNavigationContext> _navigationContext;
    id <IGPresentationContext> _presentationContext;
    id <IGListAdapterDataSource> _dataSource;
    id <IGListAdapterDelegate> _delegate;
    id <UICollectionViewDelegate> _collectionViewDelegate;
    id <IGListUpdatingDelegate> _updatingDelegate;
    IGListItemMap *_itemMap;
    IGListDisplayHandler *_displayHandler;
    IGListAdapterProxy *_delegateProxy;
    UIView *_emptyBackgroundView;
    IGListItemMap *_previousItemMap;
    NSMutableSet *_registeredItemControllerClasses;
}

@property(retain, nonatomic) NSMutableSet *registeredItemControllerClasses; // @synthesize registeredItemControllerClasses=_registeredItemControllerClasses;
@property(retain, nonatomic) IGListItemMap *previousItemMap; // @synthesize previousItemMap=_previousItemMap;
@property(nonatomic) BOOL isInUpdateItemBlock; // @synthesize isInUpdateItemBlock=_isInUpdateItemBlock;
@property(retain, nonatomic) UIView *emptyBackgroundView; // @synthesize emptyBackgroundView=_emptyBackgroundView;
@property(retain, nonatomic) IGListAdapterProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) IGListDisplayHandler *displayHandler; // @synthesize displayHandler=_displayHandler;
@property(readonly, nonatomic) IGListItemMap *itemMap; // @synthesize itemMap=_itemMap;
@property(readonly, nonatomic) id <IGListUpdatingDelegate> updatingDelegate; // @synthesize updatingDelegate=_updatingDelegate;
@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(nonatomic) __weak id <IGListAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGListAdapterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak id <IGPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
@property(readonly, nonatomic) __weak id <IGNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)performBatchItemUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadListItemController:(id)arg1 animated:(BOOL)arg2;
- (void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
- (void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
- (void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
- (id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4;
- (id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3;
- (void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(BOOL)arg3;
- (id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2;
- (unsigned int)indexForCell:(id)arg1 listItemController:(id)arg2;
@property(readonly, nonatomic) struct CGSize containerSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)estimatedSizeForHeaderAtIndexPath:(id)arg1 layout:(id)arg2;
- (struct CGSize)estimatedSizeForItemAtIndexPath:(id)arg1 layout:(id)arg2;
- (struct CGSize)sizeForHeaderAtIndexPath:(id)arg1 layout:(id)arg2;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)layoutAttributesForIndexPath:(id)arg1;
- (id)indexPathForItemController:(id)arg1 index:(int)arg2;
- (id)indexPathsFromListItemController:(id)arg1 indexes:(id)arg2 adjustForUpdateBlock:(BOOL)arg3;
- (id)validSupplementaryViewKindsForItemControllerAtIndexPath:(id)arg1;
- (id)cellIdentifierForClass:(Class)arg1;
- (void)updateBackgroundViewWithItemCount:(unsigned int)arg1;
- (void)checkAndRegisterListItemController:(id)arg1;
- (void)registerAllItemControllerCells;
- (void)updateItems:(id)arg1;
- (BOOL)isValidSupplementaryViewSourceForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)estimatedSizeForItemAtIndexPath:(id)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)visibleListItemControllers;
- (id)supplementaryViewSourceAtIndexPath:(id)arg1;
- (id)items;
- (unsigned int)sectionForItem:(id)arg1;
- (id)itemAtSection:(unsigned int)arg1;
- (id)listItemControllerForItem:(id)arg1;
- (unsigned int)sectionForListItemController:(id)arg1;
- (void)reloadItems:(id)arg1;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUpdatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollToItem:(id)arg1 scrollDirection:(int)arg2 animated:(BOOL)arg3;
- (void)updateCollectionViewDelegate;
- (void)updateAfterPublicSettingsChange;
@property(nonatomic) __weak IGListCollectionView *collectionView;
- (id)initWithNavigationContext:(id)arg1 presentationContext:(id)arg2;
- (id)initWithUpdatingDelegate:(id)arg1 navigationContext:(id)arg2 presentationContext:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

