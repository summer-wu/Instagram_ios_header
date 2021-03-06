//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSString, UIImageView, UILongPressGestureRecognizer, UIView;

@interface IGSearchResultCell : IGPlainTableViewCell <UIGestureRecognizerDelegate>
{
    BOOL _showUnseen;
    UIView *_iconView;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
    id <IGSearchResultCellDelegate> _delegate;
    NSString *_itemId;
    CALayer *_separatorLayer;
    UILongPressGestureRecognizer *_contentMenuLongPressRecognizer;
    UIImageView *_unseenToastView;
}

+ (id)formatedPostCount:(unsigned int)arg1;
+ (struct CGRect)unseenToastViewFrame;
+ (struct CGRect)iconViewFrame;
+ (id)backgroundColor;
+ (float)height;
@property(nonatomic) BOOL showUnseen; // @synthesize showUnseen=_showUnseen;
@property(retain, nonatomic) UIImageView *unseenToastView; // @synthesize unseenToastView=_unseenToastView;
@property(retain, nonatomic) UILongPressGestureRecognizer *contentMenuLongPressRecognizer; // @synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) __weak id <IGSearchResultCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)onContentMenuPress:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)layoutLabels:(float)arg1 bounds:(struct CGRect)arg2;
- (float)labelMinXForIconFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setPlace:(id)arg1;
- (void)setHashtag:(id)arg1;
- (void)setSearchQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

