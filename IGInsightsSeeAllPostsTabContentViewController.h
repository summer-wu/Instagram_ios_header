//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGInsightsContentRowListViewDelegate.h"
#import "IGInsightsSeeAllPostsFilterSelectorViewDelegate.h"
#import "IGInsightsSeeAllPostsTabContentViewDataSourceDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGPullToRefreshProtocol.h"
#import "UICollectionViewDelegate.h"

@class IGInsightsFilterUnit, IGInsightsLoggingHelper, IGInsightsMediaFeedListItemController, IGInsightsSeeAllPostsFilterSelectorView, IGInsightsSeeAllPostsFilterSummaryView, IGInsightsSeeAllPostsTabContentViewDataSource, IGListAdapter, IGListCollectionView, IGPullToRefreshView, IGPullToRefreshViewManager, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UIView;

@interface IGInsightsSeeAllPostsTabContentViewController : UIViewController <IGFeedNetworkSourceDelegate, IGListAdapterDataSource, UICollectionViewDelegate, IGPullToRefreshProtocol, IGInsightsSeeAllPostsTabContentViewDataSourceDelegate, IGInsightsSeeAllPostsFilterSelectorViewDelegate, IGInsightsContentRowListViewDelegate>
{
    BOOL _isDefaultTab;
    BOOL _showSelectorView;
    id <IGInsightsSeeAllPostsTabContentViewControllerDelegate> _delegate;
    IGListAdapter *_listAdapter;
    NSMutableArray *_objects;
    IGListCollectionView *_collectionView;
    IGInsightsMediaFeedListItemController *_feedListItemController;
    int _mediaCellCategory;
    UIActivityIndicatorView *_spinner;
    IGPullToRefreshViewManager *_pullToRefreshViewManager;
    IGPullToRefreshView *_pullRefreshControlView;
    IGInsightsSeeAllPostsTabContentViewDataSource *_dataSource;
    IGInsightsSeeAllPostsFilterSummaryView *_summaryView;
    IGInsightsSeeAllPostsFilterSelectorView *_selectorView;
    unsigned int _activeMediaTypeIndex;
    unsigned int _activeDataOrderingIndex;
    unsigned int _activeTimeframeIndex;
    unsigned int _queriedMediaTypeIndex;
    unsigned int _queriedDataOrderingIndex;
    unsigned int _queriedTimeframeIndex;
    NSArray *_mediaTypes;
    NSArray *_dataOrderings;
    NSArray *_timeframes;
    NSArray *_mediaTypeQueryItems;
    NSArray *_dataOrderingQueryItems;
    NSArray *_timeframeQueryItems;
    IGInsightsFilterUnit *_filterUnit;
    NSArray *_educationUnits;
    UIView *_overlayForMainView;
    IGInsightsLoggingHelper *_loggingHelper;
}

@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
@property(retain, nonatomic) UIView *overlayForMainView; // @synthesize overlayForMainView=_overlayForMainView;
@property(nonatomic) BOOL showSelectorView; // @synthesize showSelectorView=_showSelectorView;
@property(copy, nonatomic) NSArray *educationUnits; // @synthesize educationUnits=_educationUnits;
@property(retain, nonatomic) IGInsightsFilterUnit *filterUnit; // @synthesize filterUnit=_filterUnit;
@property(retain, nonatomic) NSArray *timeframeQueryItems; // @synthesize timeframeQueryItems=_timeframeQueryItems;
@property(retain, nonatomic) NSArray *dataOrderingQueryItems; // @synthesize dataOrderingQueryItems=_dataOrderingQueryItems;
@property(retain, nonatomic) NSArray *mediaTypeQueryItems; // @synthesize mediaTypeQueryItems=_mediaTypeQueryItems;
@property(copy, nonatomic) NSArray *timeframes; // @synthesize timeframes=_timeframes;
@property(copy, nonatomic) NSArray *dataOrderings; // @synthesize dataOrderings=_dataOrderings;
@property(copy, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property(nonatomic) unsigned int queriedTimeframeIndex; // @synthesize queriedTimeframeIndex=_queriedTimeframeIndex;
@property(nonatomic) unsigned int queriedDataOrderingIndex; // @synthesize queriedDataOrderingIndex=_queriedDataOrderingIndex;
@property(nonatomic) unsigned int queriedMediaTypeIndex; // @synthesize queriedMediaTypeIndex=_queriedMediaTypeIndex;
@property(nonatomic) unsigned int activeTimeframeIndex; // @synthesize activeTimeframeIndex=_activeTimeframeIndex;
@property(nonatomic) unsigned int activeDataOrderingIndex; // @synthesize activeDataOrderingIndex=_activeDataOrderingIndex;
@property(nonatomic) unsigned int activeMediaTypeIndex; // @synthesize activeMediaTypeIndex=_activeMediaTypeIndex;
@property(retain, nonatomic) IGInsightsSeeAllPostsFilterSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(retain, nonatomic) IGInsightsSeeAllPostsFilterSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) IGInsightsSeeAllPostsTabContentViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) IGPullToRefreshView *pullRefreshControlView; // @synthesize pullRefreshControlView=_pullRefreshControlView;
@property(retain, nonatomic) IGPullToRefreshViewManager *pullToRefreshViewManager; // @synthesize pullToRefreshViewManager=_pullToRefreshViewManager;
@property(nonatomic) BOOL isDefaultTab; // @synthesize isDefaultTab=_isDefaultTab;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) int mediaCellCategory; // @synthesize mediaCellCategory=_mediaCellCategory;
@property(retain, nonatomic) IGInsightsMediaFeedListItemController *feedListItemController; // @synthesize feedListItemController=_feedListItemController;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(nonatomic) __weak id <IGInsightsSeeAllPostsTabContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)reloadDataFromPullToRefresh;
- (id)currentActiveScrollView;
- (void)initializeSpinner;
- (BOOL)shouldFetchOnViewDidLoad;
- (BOOL)shouldFetchOnInit;
- (void)updateOrderingAndTimeframeForMediaTypeCell:(id)arg1;
- (unsigned int)getActiveIndexForTimeframe:(id)arg1;
- (unsigned int)getActiveIndexForDataOrdering:(id)arg1;
- (unsigned int)getActiveIndexForMediaType:(id)arg1;
- (void)updateActiveQuery;
- (void)parseFilterUnit;
- (void)updateSummaryView;
- (void)updateFilterViews;
- (id)currentQueryItems;
- (void)summaryViewClick:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2;
- (id)itemsForListAdapter:(id)arg1;
- (void)logMediaBundleFetchFailureWithErrorMessage:(id)arg1;
- (void)logFilterApply;
- (void)logFilterAppear;
- (void)logSeeAllPostsPageLoaded;
- (void)mediaBundleRequestFailureForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1 errorMessage:(id)arg2;
- (void)didUpdateMediaBundlesForInsightsSeeAllPostsTabContentViewDataSource:(id)arg1;
- (void)didTapSubmitButton;
- (void)didSelectTimeframeOnSelectorView:(id)arg1 AtIndex:(unsigned int)arg2;
- (int)mediaCellCategoryFromActiveDataOrderingIndex:(unsigned int)arg1;
- (void)didSelectDataOrderingOnSelectorView:(id)arg1 AtIndex:(unsigned int)arg2;
- (void)didSelectMediaTypeOnSelectorView:(id)arg1 AtIndex:(unsigned int)arg2;
- (void)needAnimateContentRowListView:(id)arg1 upForDistance:(float)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)resetSelectorViewActiveIndexAfterDismiss;
- (void)dismissSelectorViewAndStartQuery:(id)arg1;
- (void)dismissSelectorView;
- (void)overlayViewTapped:(id)arg1;
- (void)loadOverlays;
- (void)loadView;
- (id)initWithCollectionViewComponent:(id)arg1 filterUnit:(id)arg2 filterSummaryText:(id)arg3 educationUnits:(id)arg4 query:(id)arg5 loggingHelper:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
