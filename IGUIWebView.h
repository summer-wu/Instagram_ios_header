//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBWebView.h"
#import "NJKWebViewProgressDelegate.h"
#import "UIWebViewDelegate.h"

@class NJKWebViewProgress, NSString, NSURL, NSURLRequest, UIScrollView, UIWebView;

@interface IGUIWebView : UIView <NJKWebViewProgressDelegate, UIWebViewDelegate, FBWebView>
{
    BOOL _isBannerAtTop;
    BOOL _loading;
    BOOL _youtubeNavigationFix;
    UIView *_bannerView;
    id <FBWebViewDelegate> _delegate;
    int _displayState;
    UIView *_errorView;
    UIWebView *_webView;
    NJKWebViewProgress *_webViewProgress;
}

@property(readonly, nonatomic) NJKWebViewProgress *webViewProgress; // @synthesize webViewProgress=_webViewProgress;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL youtubeNavigationFix; // @synthesize youtubeNavigationFix=_youtubeNavigationFix;
@property(readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) BOOL isBannerAtTop; // @synthesize isBannerAtTop=_isBannerAtTop;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) int displayState; // @synthesize displayState=_displayState;
@property(nonatomic) __weak id <FBWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewProgress:(id)arg1 didUpdateProgress:(float)arg2;
- (void)setGestureRecognizersEnabled:(BOOL)arg1;
- (BOOL)hasOnlySecureContent;
- (void)updateOrientationWithOrientation:(int)arg1;
- (void)safeExecuteJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopLoading;
- (void)reload;
- (void)goForward;
- (void)goBack;
@property(readonly, nonatomic) BOOL canGoForward;
@property(readonly, nonatomic) BOOL canGoBack;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1;
@property(readonly, nonatomic) int webViewImplementation;
@property(nonatomic) unsigned int dataDetectorTypes;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, copy, nonatomic) NSURL *currentLocationURL;
@property(readonly, copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

