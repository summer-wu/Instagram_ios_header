//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, UIActivityIndicatorView, UILabel;

@interface IGCommentLoadMoreCell : UICollectionViewCell
{
    CALayer *_separatorLayer;
    UILabel *_textLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
- (void).cxx_destruct;
- (void)setActivityAnimating:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setupActivityIndicator;
- (void)setupSeparatorLayer;
- (void)setupTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

