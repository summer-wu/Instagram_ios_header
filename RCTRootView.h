//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString, RCTBridge, RCTRootContentView, UIViewController;

@interface RCTRootView : UIView
{
    RCTBridge *_bridge;
    NSString *_moduleName;
    NSDictionary *_launchOptions;
    RCTRootContentView *_contentView;
    NSDictionary *_appProperties;
    int _sizeFlexibility;
    id <RCTRootViewDelegate> _delegate;
    UIViewController *_reactViewController;
    UIView *_loadingView;
    struct CGSize _intrinsicSize;
    double _loadingViewFadeDelay;
    double _loadingViewFadeDuration;
}

@property(nonatomic) double loadingViewFadeDuration; // @synthesize loadingViewFadeDuration=_loadingViewFadeDuration;
@property(nonatomic) double loadingViewFadeDelay; // @synthesize loadingViewFadeDelay=_loadingViewFadeDelay;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIViewController *reactViewController; // @synthesize reactViewController=_reactViewController;
@property(nonatomic) __weak id <RCTRootViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize intrinsicSize; // @synthesize intrinsicSize=_intrinsicSize;
@property(nonatomic) int sizeFlexibility; // @synthesize sizeFlexibility=_sizeFlexibility;
@property(copy, nonatomic) NSDictionary *appProperties; // @synthesize appProperties=_appProperties;
@property(readonly, nonatomic) RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)cancelTouches;
- (void)dealloc;
- (void)contentViewInvalidated;
- (void)layoutSubviews;
- (void)runApplication:(id)arg1;
- (void)bundleFinishedLoading:(id)arg1;
- (void)javaScriptDidLoad:(id)arg1;
- (void)bridgeDidReload;
- (id)reactTag;
- (void)hideLoadingView;
- (void)showLoadingView;
- (BOOL)canBecomeFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 launchOptions:(id)arg4;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3;

@end

