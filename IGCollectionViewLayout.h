//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

#import "IGCollectionViewLayoutAdditions.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface IGCollectionViewLayout : UICollectionViewLayout <IGCollectionViewLayoutAdditions>
{
    float _supplementaryHeaderViewHeight;
    float _headerAdjustmentAmount;
    id <IGCollectionViewLayoutDataSource> _dataSource;
    float _supplementaryFooterViewHeight;
    float _refreshHeight;
    NSObject<OS_dispatch_queue> *_layoutQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(nonatomic) float refreshHeight; // @synthesize refreshHeight=_refreshHeight;
@property(nonatomic) float supplementaryFooterViewHeight; // @synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight;
@property(nonatomic) __weak id <IGCollectionViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) float headerAdjustmentAmount; // @synthesize headerAdjustmentAmount=_headerAdjustmentAmount;
@property(nonatomic) float supplementaryHeaderViewHeight; // @synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight;
- (void).cxx_destruct;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

