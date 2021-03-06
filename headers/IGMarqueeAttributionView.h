//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UILabel;

@interface IGMarqueeAttributionView : UICollectionReusableView
{
    id <IGMarqueeAttributionViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_usernameLabel;
}

+ (float)heightForFooter;
+ (id)footerIdentifier;
@property(readonly, nonatomic) __weak UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <IGMarqueeAttributionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithUsername:(id)arg1;
- (void)didReceiveTapFromGestureRecognizer:(id)arg1;
- (void)setupAndConfigureViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

