//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListUpdatingDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate>
{
    BOOL _queuedReloadData;
    BOOL _batchUpdateInProgress;
    NSMutableArray *_completionBlocks;
    NSArray *_fromItems;
    NSArray *_toItems;
    NSArray *_pendingTransitionToItems;
    NSMutableSet *_deleteIndexPaths;
    NSMutableSet *_insertIndexPaths;
    NSMutableSet *_reloadIndexPaths;
    CDUnknownBlockType _itemTransitionBlock;
    NSMutableArray *_itemUpdateBlocks;
    CDUnknownBlockType _reloadUpdates;
}

@property(nonatomic) BOOL batchUpdateInProgress; // @synthesize batchUpdateInProgress=_batchUpdateInProgress;
@property(nonatomic, getter=hasQueuedReloadData) BOOL queuedReloadData; // @synthesize queuedReloadData=_queuedReloadData;
@property(copy, nonatomic) CDUnknownBlockType reloadUpdates; // @synthesize reloadUpdates=_reloadUpdates;
@property(copy, nonatomic) NSMutableArray *itemUpdateBlocks; // @synthesize itemUpdateBlocks=_itemUpdateBlocks;
@property(copy, nonatomic) CDUnknownBlockType itemTransitionBlock; // @synthesize itemTransitionBlock=_itemTransitionBlock;
@property(readonly, nonatomic) NSMutableSet *reloadIndexPaths; // @synthesize reloadIndexPaths=_reloadIndexPaths;
@property(readonly, nonatomic) NSMutableSet *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(readonly, nonatomic) NSMutableSet *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(copy, nonatomic) NSArray *pendingTransitionToItems; // @synthesize pendingTransitionToItems=_pendingTransitionToItems;
@property(copy, nonatomic) NSArray *toItems; // @synthesize toItems=_toItems;
@property(copy, nonatomic) NSArray *fromItems; // @synthesize fromItems=_fromItems;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void).cxx_destruct;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2 animated:(BOOL)arg3;
- (void)reloadDataWithCollectionView:(id)arg1 itemUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)performUpdateWithCollectionView:(id)arg1 itemUpdates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performUpdateWithCollectionView:(id)arg1 fromItems:(id)arg2 toItems:(id)arg3 itemTransitionBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)itemLookupPointerFunctions;
- (void)queueUpdateWithCollectionView:(id)arg1;
- (void)cleanupState;
- (id)trimmedIndexPaths:(id)arg1 inSections:(id)arg2;
- (void)endPerformBatchUpdates;
- (void)performBatchUpdatesItemBlockApplied;
- (void)beginPerformBatchUpdatesToItems:(id)arg1;
- (void)flushItemUpdateBlocks:(id)arg1 collectionView:(id)arg2 filterReloadSections:(id)arg3;
- (void)performBatchUpdatesWithCollectionView:(id)arg1;
- (void)performReloadDataWithCollectionView:(id)arg1;
- (BOOL)hasChanges;
- (id)init;

@end

