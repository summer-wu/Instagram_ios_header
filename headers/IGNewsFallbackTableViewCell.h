//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIWebViewDelegate.h"

@class IGNewsStory, NSString, UIWebView;

@interface IGNewsFallbackTableViewCell : UITableViewCell <UIWebViewDelegate>
{
    IGNewsStory *_story;
    id <IGWebViewTableViewCellDelegate> _delegate;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <IGWebViewTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGNewsStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
@property(readonly, nonatomic) BOOL hasPayloadSize;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

