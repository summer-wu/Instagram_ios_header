//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIWebViewDelegate.h"

@class IGFeedItem, NSString, UIButton, UIImageView, UIView;

@interface IGFeedItemBusinessCell : UICollectionViewCell <UIWebViewDelegate>
{
    IGFeedItem *_feedItem;
    id <IGFeedItemBusinessCellDelegate> _delegate;
    UIButton *_promoteButton;
    UIButton *_insightsButton;
    UIImageView *_insightsIcon;
    UIView *_lineView;
}

+ (float)height;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *insightsIcon; // @synthesize insightsIcon=_insightsIcon;
@property(retain, nonatomic) UIButton *insightsButton; // @synthesize insightsButton=_insightsButton;
@property(retain, nonatomic) UIButton *promoteButton; // @synthesize promoteButton=_promoteButton;
@property(nonatomic) __weak id <IGFeedItemBusinessCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)organicInsightsButtonClick:(id)arg1;
- (void)promoteButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)initializeInsightsButton;
- (void)initializePromoteButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

