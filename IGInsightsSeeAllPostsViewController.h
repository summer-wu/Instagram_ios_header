//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGInsightsDataProviderDelegate.h"
#import "IGInsightsSeeAllPostsTabContentViewControllerDelegate.h"
#import "IGInsightsTabBarControllerDelegate.h"

@class IGChevronTitleButton, IGInsightsDataProvider, IGInsightsFilterUnit, IGInsightsLoggingHelper, IGInsightsQuery, IGInsightsTabBarController, NSArray, NSString, UIActivityIndicatorView;

@interface IGInsightsSeeAllPostsViewController : IGViewController <IGInsightsDataProviderDelegate, IGInsightsSeeAllPostsTabContentViewControllerDelegate, IGInsightsTabBarControllerDelegate>
{
    BOOL _needRefreshView;
    IGInsightsTabBarController *_tabBarViewController;
    UIActivityIndicatorView *_spinner;
    IGInsightsDataProvider *_dataProvider;
    NSArray *_defaultTabComponents;
    NSArray *_defaultTabMediaOrderSelectorTabs;
    IGChevronTitleButton *_postTypeButton;
    IGInsightsFilterUnit *_filterUnit;
    NSString *_filterSummaryTitle;
    NSArray *_titles;
    unsigned int _activeIndex;
    IGInsightsQuery *_buttonQuery;
    NSArray *_educationUnits;
    IGInsightsLoggingHelper *_loggingHelper;
}

@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
@property(copy, nonatomic) NSArray *educationUnits; // @synthesize educationUnits=_educationUnits;
@property(retain, nonatomic) IGInsightsQuery *buttonQuery; // @synthesize buttonQuery=_buttonQuery;
@property(nonatomic) unsigned int activeIndex; // @synthesize activeIndex=_activeIndex;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) BOOL needRefreshView; // @synthesize needRefreshView=_needRefreshView;
@property(copy, nonatomic) NSString *filterSummaryTitle; // @synthesize filterSummaryTitle=_filterSummaryTitle;
@property(retain, nonatomic) IGInsightsFilterUnit *filterUnit; // @synthesize filterUnit=_filterUnit;
@property(retain, nonatomic) IGChevronTitleButton *postTypeButton; // @synthesize postTypeButton=_postTypeButton;
@property(copy, nonatomic) NSArray *defaultTabMediaOrderSelectorTabs; // @synthesize defaultTabMediaOrderSelectorTabs=_defaultTabMediaOrderSelectorTabs;
@property(copy, nonatomic) NSArray *defaultTabComponents; // @synthesize defaultTabComponents=_defaultTabComponents;
@property(retain, nonatomic) IGInsightsDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) IGInsightsTabBarController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
- (void).cxx_destruct;
- (id)createTabContentViewControllerWithQuery:(id)arg1;
- (id)getTitlesFromDropDownCells:(id)arg1;
- (void)setUpDefaultComponentsEducationUnit;
- (void)setupTabBarViewController;
- (void)requestTabBarItemsAndDefaultTabContent;
- (void)startRequest;
- (void)initializeSpinner;
- (void)didSelectNavigateInSeeAllPostsTabContentViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2;
- (void)didGetResponseForDataProvider:(id)arg1;
- (void)insightsTabBarController:(id)arg1 tappedSegmentIndex:(unsigned int)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithButtonQuery:(id)arg1 loggingHelper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
