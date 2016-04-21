//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTView.h"

#import "RCTAutoInsetsProtocol.h"
#import "UIWebViewDelegate.h"

@class NSDictionary, NSString, UIWebView;

@interface RCTWebView : RCTView <UIWebViewDelegate, RCTAutoInsetsProtocol>
{
    UIWebView *_webView;
    NSString *_injectedJavaScript;
    BOOL _automaticallyAdjustContentInsets;
    id <RCTWebViewDelegate> _delegate;
    NSDictionary *_source;
    CDUnknownBlockType _onLoadingStart;
    CDUnknownBlockType _onLoadingFinish;
    CDUnknownBlockType _onLoadingError;
    CDUnknownBlockType _onShouldStartLoadWithRequest;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) CDUnknownBlockType onShouldStartLoadWithRequest; // @synthesize onShouldStartLoadWithRequest=_onShouldStartLoadWithRequest;
@property(copy, nonatomic) CDUnknownBlockType onLoadingError; // @synthesize onLoadingError=_onLoadingError;
@property(copy, nonatomic) CDUnknownBlockType onLoadingFinish; // @synthesize onLoadingFinish=_onLoadingFinish;
@property(copy, nonatomic) CDUnknownBlockType onLoadingStart; // @synthesize onLoadingStart=_onLoadingStart;
@property(copy, nonatomic) NSString *injectedJavaScript; // @synthesize injectedJavaScript=_injectedJavaScript;
@property(nonatomic) BOOL automaticallyAdjustContentInsets; // @synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSDictionary *source; // @synthesize source=_source;
@property(nonatomic) __weak id <RCTWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)refreshContentInset;
- (id)baseEvent;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) BOOL scalesPageToFit;
- (void)layoutSubviews;
- (void)reload;
- (void)goBack;
- (void)goForward;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
