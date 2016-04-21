//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSURL, UIButton, UILabel;

@interface IGInsightsCenteredParagraphView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_urlbutton;
    NSURL *_url;
    struct CGRect _frame;
}

@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) UIButton *urlbutton; // @synthesize urlbutton=_urlbutton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onWebsiteExternalLinkTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 paragraphUnit:(id)arg2;

@end
