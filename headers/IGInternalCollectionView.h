//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class NSSet;

@interface IGInternalCollectionView : UICollectionView
{
    int _ignoresContentOffsetChanges;
    NSSet *_visibleIndexPaths;
}

@property(retain, nonatomic) NSSet *visibleIndexPaths; // @synthesize visibleIndexPaths=_visibleIndexPaths;
@property(nonatomic) int ignoresContentOffsetChanges; // @synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)notifyForVisibleCells;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end

