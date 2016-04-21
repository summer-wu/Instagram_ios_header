//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGInlineInsightsHeaderView, IGInlineInsightsUnitView, IGInsightsContentRowListView, IGInsightsLoggingHelper, NSString, UIActivityIndicatorView, UILabel;

@interface IGInlineInsightsView : UIView
{
    BOOL _setSeparator;
    IGInsightsContentRowListView *_educationView;
    id <IGInlineInsightsViewDelegate> _delegate;
    IGInlineInsightsHeaderView *_headerView;
    IGInlineInsightsUnitView *_impressionUnitView;
    IGInlineInsightsUnitView *_reachUnitView;
    IGInlineInsightsUnitView *_engagementUnitView;
    UILabel *_errorTitleLabel;
    UILabel *_errorSubtitleLabel;
    id <IGInsightsContentRowListViewDelegate> _educationUnitDelegate;
    NSString *_impressionString;
    NSString *_reachString;
    NSString *_engagementString;
    IGInsightsLoggingHelper *_loggingHelper;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
@property(readonly, copy, nonatomic) NSString *engagementString; // @synthesize engagementString=_engagementString;
@property(readonly, copy, nonatomic) NSString *reachString; // @synthesize reachString=_reachString;
@property(readonly, copy, nonatomic) NSString *impressionString; // @synthesize impressionString=_impressionString;
@property(nonatomic) BOOL setSeparator; // @synthesize setSeparator=_setSeparator;
@property(nonatomic) __weak id <IGInsightsContentRowListViewDelegate> educationUnitDelegate; // @synthesize educationUnitDelegate=_educationUnitDelegate;
@property(retain, nonatomic) UILabel *errorSubtitleLabel; // @synthesize errorSubtitleLabel=_errorSubtitleLabel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(retain, nonatomic) IGInlineInsightsUnitView *engagementUnitView; // @synthesize engagementUnitView=_engagementUnitView;
@property(retain, nonatomic) IGInlineInsightsUnitView *reachUnitView; // @synthesize reachUnitView=_reachUnitView;
@property(retain, nonatomic) IGInlineInsightsUnitView *impressionUnitView; // @synthesize impressionUnitView=_impressionUnitView;
@property(retain, nonatomic) IGInlineInsightsHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <IGInlineInsightsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGInsightsContentRowListView *educationView; // @synthesize educationView=_educationView;
- (void).cxx_destruct;
- (void)showErrors;
- (void)hideErrors;
- (void)showUnitsAndEducation;
- (void)hideUnitsAndEducation;
- (void)setupSeparator;
- (void)updateViewWithInsights:(id)arg1;
- (void)updateViewWithNoInsightsErrorTitle:(id)arg1 subtitle:(id)arg2;
- (void)layoutErrorLabelsWithCurrentY:(float)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initializeSpinner;
- (void)initializeUnitViews;
- (void)initializeEducationView;
- (void)initializeErrorTextLabel;
- (void)handleGraphQLRequestError:(id)arg1;
- (void)queryFailureHandleError:(id)arg1;
- (void)querySuccessApplyInsights:(id)arg1;
- (id)initWithFeedItem:(id)arg1 educationUnitDelegate:(id)arg2 loggingHelper:(id)arg3;

@end
