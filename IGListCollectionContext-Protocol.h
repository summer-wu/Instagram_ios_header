//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListItemController<IGListItemType>, NSIndexSet, NSString, UICollectionReusableView, UICollectionViewCell;

@protocol IGListCollectionContext <NSObject>
@property(readonly, nonatomic) struct CGSize containerSize;
- (void)performBatchItemUpdates:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)reloadListItemController:(IGListItemController<IGListItemType> *)arg1 animated:(BOOL)arg2;
- (void)deleteItemsInListItemController:(IGListItemController<IGListItemType> *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)insertItemsInListItemController:(IGListItemController<IGListItemType> *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)reloadItemsInListItemController:(IGListItemController<IGListItemType> *)arg1 atIndexes:(NSIndexSet *)arg2;
- (UICollectionReusableView *)dequeReusableSupplementaryViewOfKind:(NSString *)arg1 forListItemController:(IGListItemController<IGListItemType> *)arg2 class:(Class)arg3 atIndex:(int)arg4;
- (UICollectionViewCell *)dequeReusableCellOfClass:(Class)arg1 forListItemController:(IGListItemController<IGListItemType> *)arg2 atIndex:(int)arg3;
- (unsigned int)sectionForListItemController:(IGListItemController<IGListItemType> *)arg1;
- (void)deselectItemAtIndex:(int)arg1 listItemController:(IGListItemController<IGListItemType> *)arg2 animated:(BOOL)arg3;
- (UICollectionViewCell *)cellForItemAtIndex:(int)arg1 listItemController:(IGListItemController<IGListItemType> *)arg2;
- (unsigned int)indexForCell:(UICollectionViewCell *)arg1 listItemController:(IGListItemController<IGListItemType> *)arg2;
@end
