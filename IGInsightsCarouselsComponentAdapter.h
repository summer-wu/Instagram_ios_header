//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGInsightsComponentAdapter.h"
#import "IGInsightsComponentViewControllerNavigationDelegate.h"
#import "IGInsightsDataProviderDelegate.h"

@class IGInsightsCarouselsView, IGInsightsCarouselsViewController, IGInsightsDataProvider, IGInsightsLoggingHelper, IGInsightsQuery, NSArray, NSString;

@interface IGInsightsCarouselsComponentAdapter : NSObject <IGInsightsDataProviderDelegate, IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter>
{
    id <IGInsightsComponentNavigationDelegate> navigationDelegate;
    NSString *_header;
    NSString *_buttonText;
    IGInsightsQuery *_buttonQuery;
    NSArray *_mediaIDs;
    IGInsightsCarouselsView *_componentView;
    IGInsightsCarouselsViewController *_insightsCarouselsViewController;
    NSArray *_mediaBundles;
    IGInsightsDataProvider *_mediaBundleDataProvider;
    IGInsightsLoggingHelper *_loggingHelper;
}

@property(retain, nonatomic) IGInsightsLoggingHelper *loggingHelper; // @synthesize loggingHelper=_loggingHelper;
@property(retain, nonatomic) IGInsightsDataProvider *mediaBundleDataProvider; // @synthesize mediaBundleDataProvider=_mediaBundleDataProvider;
@property(copy, nonatomic) NSArray *mediaBundles; // @synthesize mediaBundles=_mediaBundles;
@property(retain, nonatomic) IGInsightsCarouselsViewController *insightsCarouselsViewController; // @synthesize insightsCarouselsViewController=_insightsCarouselsViewController;
@property(retain, nonatomic) IGInsightsCarouselsView *componentView; // @synthesize componentView=_componentView;
@property(copy, nonatomic) NSArray *mediaIDs; // @synthesize mediaIDs=_mediaIDs;
@property(retain, nonatomic) IGInsightsQuery *buttonQuery; // @synthesize buttonQuery=_buttonQuery;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) __weak id <IGInsightsComponentNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate;
- (void).cxx_destruct;
- (void)updateViewWithMediaBundle:(id)arg1;
- (void)fetchFeedItemsFromMediaIDs:(id)arg1;
- (id)getMediaIDsFromMedias:(id)arg1;
- (BOOL)isComponentValid;
- (void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2;
- (void)didGetResponseForDataProvider:(id)arg1;
- (id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

