//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListItemController.h"

#import "IGListCollectionContext.h"
#import "IGListDisplayDelegate.h"
#import "IGListItemType.h"

@class NSArray, NSCountedSet, NSOrderedSet, NSString;

@interface IGListStackedItemController : IGListItemController <IGListCollectionContext, IGListDisplayDelegate, IGListItemType>
{
    NSOrderedSet *_itemControllers;
    id <IGListSupplementaryViewSource> _supplementaryViewSource;
    NSArray *_itemControllersForItems;
    NSArray *_itemControllerOffsets;
    unsigned int _flattenedNumberOfItems;
    NSCountedSet *_visibleItemControllers;
}

@property(readonly, nonatomic) NSCountedSet *visibleItemControllers; // @synthesize visibleItemControllers=_visibleItemControllers;
@property(nonatomic) unsigned int flattenedNumberOfItems; // @synthesize flattenedNumberOfItems=_flattenedNumberOfItems;
@property(copy, nonatomic) NSArray *itemControllerOffsets; // @synthesize itemControllerOffsets=_itemControllerOffsets;
@property(copy, nonatomic) NSArray *itemControllersForItems; // @synthesize itemControllersForItems=_itemControllersForItems;
@property(readonly, nonatomic) id <IGListSupplementaryViewSource> supplementaryViewSource; // @synthesize supplementaryViewSource=_supplementaryViewSource;
@property(readonly, nonatomic) NSOrderedSet *itemControllers; // @synthesize itemControllers=_itemControllers;
- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4;
- (void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4;
- (void)performBatchItemUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadListItemController:(id)arg1 animated:(BOOL)arg2;
- (void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
- (void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
- (void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
- (id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4;
- (id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3;
- (unsigned int)sectionForListItemController:(id)arg1;
- (void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(BOOL)arg3;
- (id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2;
- (unsigned int)indexForCell:(id)arg1 listItemController:(id)arg2;
@property(readonly, nonatomic) struct CGSize containerSize;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)cellForItemAtIndex:(int)arg1;
- (struct CGSize)estimatedSizeForItemAtIndex:(int)arg1;
- (struct CGSize)sizeForItemAtIndex:(int)arg1;
- (unsigned int)numberOfItems;
- (id)cellClasses;
- (void)setPresentationContext:(id)arg1;
- (void)setNavigationContext:(id)arg1;
- (id)itemIndexesForItemController:(id)arg1 indexes:(id)arg2;
- (unsigned int)localIndexForItemController:(id)arg1 index:(unsigned int)arg2;
- (unsigned int)offsetForItemController:(id)arg1;
- (id)itemControllerForItemIndex:(unsigned int)arg1;
- (void)reloadData;
- (id)initWithItemControllers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
