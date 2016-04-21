//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class IGCameraBar, NSString, UIActivityIndicatorView, UIWebView;

@interface IGHybridWebView : UIView <UIWebViewDelegate>
{
    id <IGHybridWebViewDelegate> _delegate;
    UIWebView *_webView;
    IGCameraBar *_headerBar;
    UIView *_statusBarDummyView;
    UIActivityIndicatorView *_spinner;
    unsigned int _context;
}

@property(readonly, nonatomic) unsigned int context; // @synthesize context=_context;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UIView *statusBarDummyView; // @synthesize statusBarDummyView=_statusBarDummyView;
@property(readonly, nonatomic) IGCameraBar *headerBar; // @synthesize headerBar=_headerBar;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <IGHybridWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearTemporaryAuthCookies;
- (void)callToJS:(id)arg1;
- (void)didClickLeftButtonBack:(id)arg1;
- (void)updateHeaderForCurrentStateWithParams:(id)arg1;
- (void)updateHeaderToLoadingView;
- (void)setUpRightButtonForHeader:(id)arg1 withTextValue:(id)arg2 activeValue:(id)arg3 withCallbackJS:(id)arg4;
- (void)setUpLeftButtonForHeader:(id)arg1 withValue:(id)arg2 withCallbackJS:(id)arg3;
- (id)headerBarForParams:(id)arg1;
- (unsigned int)actionForScreen:(id)arg1 isRootScreen:(BOOL)arg2;
- (void)popToScreen:(id)arg1 isRootScreen:(BOOL)arg2;
- (void)setUpNavigationBarWithParams:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)layoutSubviews;
- (void)hideSpinner;
- (void)showSpinner;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)loadRequest:(id)arg1;
- (id)createInitialHeader;
- (void)setUpHeaderBar;
- (void)setUpViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1 from:(unsigned int)arg2;
- (id)initFrom:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

