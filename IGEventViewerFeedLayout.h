//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSIndexPath, NSMutableDictionary;

@interface IGEventViewerFeedLayout : UICollectionViewLayout
{
    BOOL _lockContentOffsetForUpdates;
    id <IGEventViewerFeedLayoutDataSource> _dataSource;
    id <IGEventViewerFeedLayoutDelegate> _delegate;
    NSIndexPath *_currentlyCenteredIndexPath;
    NSMutableDictionary *_cachedItemFrames;
    NSIndexPath *_previousSpinnerIndexPath;
    struct CGPoint _lockedContentOffset;
}

@property(retain, nonatomic) NSIndexPath *previousSpinnerIndexPath; // @synthesize previousSpinnerIndexPath=_previousSpinnerIndexPath;
@property(nonatomic) struct CGPoint lockedContentOffset; // @synthesize lockedContentOffset=_lockedContentOffset;
@property(readonly, nonatomic) NSMutableDictionary *cachedItemFrames; // @synthesize cachedItemFrames=_cachedItemFrames;
@property(nonatomic) BOOL lockContentOffsetForUpdates; // @synthesize lockContentOffsetForUpdates=_lockContentOffsetForUpdates;
@property(retain, nonatomic) NSIndexPath *currentlyCenteredIndexPath; // @synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath;
@property(nonatomic) __weak id <IGEventViewerFeedLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGEventViewerFeedLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)spinnerIndexPath;
- (id)lastItemIndexPath;
- (id)lastMediaIndexPath;
- (id)firstMediaIndexPath;
- (int)totalItemCount;
- (struct CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGRect)frameForMediaCellAtIndexPath:(id)arg1;
- (struct CGRect)frameForHeaderCellAtIndexPath:(id)arg1;
- (struct CGRect)frameForSingleCellSectionAtIndexPath:(id)arg1;
- (void)configureHeaderCellItemLayoutAttributes:(id)arg1;
- (void)configureMediaCellItemLayoutAttributes:(id)arg1;
- (void)configureSpinnerCellSectionItemLayoutAttributes:(id)arg1;
- (void)configureItemLayoutAttributes:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)clearLayoutCache;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (struct CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1;
- (id)init;

@end
