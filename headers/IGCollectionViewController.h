//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UICollectionViewDataSource.h"

@class IGCollectionViewLayout, IGInternalCollectionView, IGPullToRefreshControl, NSArray, NSDate, NSString, UICollectionViewLayout<IGCollectionViewLayoutAdditions>, UIView;

@interface IGCollectionViewController : IGViewController <UICollectionViewDataSource>
{
    BOOL _usesIgCollectionViewLayout;
    BOOL _hasNotifiedForEndOfContentReached;
    BOOL _showsPullToRefreshControl;
    id <IGCollectionViewControllerDelegate> _delegate;
    id <IGCollectionViewControllerDataSource> _dataSource;
    UICollectionViewLayout<IGCollectionViewLayoutAdditions> *_collectionViewLayout;
    NSArray *_objects;
    id _context;
    float _supplementaryHeaderViewHeight;
    float _supplementaryFooterViewHeight;
    float _headerAdjustmentAmount;
    UIView *_backgroundSupplementaryHeaderView;
    UIView *_backgroundSupplementaryFooterView;
    NSArray *_currentLoadingObjects;
    id _currentLoadingContext;
    IGInternalCollectionView *_collectionView;
    IGPullToRefreshControl *_pullToRefreshControl;
    float _pullToRefreshInset;
    NSDate *_pullToRefreshStartTime;
    int _reloadingCount;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) int reloadingCount; // @synthesize reloadingCount=_reloadingCount;
@property(retain, nonatomic) NSDate *pullToRefreshStartTime; // @synthesize pullToRefreshStartTime=_pullToRefreshStartTime;
@property(nonatomic) BOOL showsPullToRefreshControl; // @synthesize showsPullToRefreshControl=_showsPullToRefreshControl;
@property(nonatomic) float pullToRefreshInset; // @synthesize pullToRefreshInset=_pullToRefreshInset;
@property(nonatomic) BOOL hasNotifiedForEndOfContentReached; // @synthesize hasNotifiedForEndOfContentReached=_hasNotifiedForEndOfContentReached;
@property(retain, nonatomic) IGPullToRefreshControl *pullToRefreshControl; // @synthesize pullToRefreshControl=_pullToRefreshControl;
@property(retain, nonatomic) IGInternalCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) BOOL usesIgCollectionViewLayout; // @synthesize usesIgCollectionViewLayout=_usesIgCollectionViewLayout;
@property(retain, nonatomic) id currentLoadingContext; // @synthesize currentLoadingContext=_currentLoadingContext;
@property(retain, nonatomic) NSArray *currentLoadingObjects; // @synthesize currentLoadingObjects=_currentLoadingObjects;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIView *backgroundSupplementaryFooterView; // @synthesize backgroundSupplementaryFooterView=_backgroundSupplementaryFooterView;
@property(retain, nonatomic) UIView *backgroundSupplementaryHeaderView; // @synthesize backgroundSupplementaryHeaderView=_backgroundSupplementaryHeaderView;
@property(nonatomic) float headerAdjustmentAmount; // @synthesize headerAdjustmentAmount=_headerAdjustmentAmount;
@property(nonatomic) float supplementaryFooterViewHeight; // @synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight;
@property(nonatomic) float supplementaryHeaderViewHeight; // @synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) UICollectionViewLayout<IGCollectionViewLayoutAdditions> *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak id <IGCollectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishRefreshFromPullToRefreshControl;
@property(readonly, nonatomic) BOOL isReloadingContent;
- (void)didChangeHeaderAdjustmentAmount:(float)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)onPullToRefresh:(id)arg1;
- (void)updatePullToRefreshControl;
- (void)fakePullToRefreshWithDuration:(double)arg1 animated:(BOOL)arg2;
- (void)notifyChangeFromScrollPosition:(struct CGPoint)arg1 toScrollPosition:(struct CGPoint)arg2;
- (void)onScrollViewPan:(id)arg1;
- (void)layoutFooterView;
- (void)setSupplementaryHeaderViewHeight:(float)arg1 animated:(BOOL)arg2;
- (void)scrollToTopOfContentInsetAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)reloadWithCurrentObjectsAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reloadWithCurrentObjectsAnimated:(BOOL)arg1;
- (void)reloadWithCurrentObjects;
- (void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(BOOL)arg3 forceAnimated:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)currentReloadContext;
- (void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)applyContentInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (id)setupCollectionViewWithLayout:(id)arg1;
- (void)configureCollectionViewDataSource:(id)arg1;
- (void)registerClasses;
@property(readonly, nonatomic) IGCollectionViewLayout *igCollectionViewLayout;
- (id)initWithLayout:(id)arg1 showsPullToRefresh:(BOOL)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

