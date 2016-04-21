//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSObject<IGSimilarAccountsViewDelegate>, UIButton, UILabel, UIView;

@interface IGSimilarAccountsView : UITableView
{
    BOOL _isChainingSeeAllButtonEnabled;
    BOOL _isHScrollUnitEnabled;
    NSObject<IGSimilarAccountsViewDelegate> *_similarAccountsViewDelegate;
    UIButton *_closeButton;
    UIView *_topHeaderInnerView;
    UIView *_topHeaderView;
    UILabel *_titleLabel;
    UIView *_triangleView;
    UIButton *_seeAllButton;
}

+ (struct CGSize)sizeForWidth:(float)arg1;
+ (float)defaultHeight;
@property(readonly, nonatomic) BOOL isHScrollUnitEnabled; // @synthesize isHScrollUnitEnabled=_isHScrollUnitEnabled;
@property(readonly, nonatomic) BOOL isChainingSeeAllButtonEnabled; // @synthesize isChainingSeeAllButtonEnabled=_isChainingSeeAllButtonEnabled;
@property(retain, nonatomic) UIButton *seeAllButton; // @synthesize seeAllButton=_seeAllButton;
@property(retain, nonatomic) UIView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topHeaderView; // @synthesize topHeaderView=_topHeaderView;
@property(retain, nonatomic) UIView *topHeaderInnerView; // @synthesize topHeaderInnerView=_topHeaderInnerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak NSObject<IGSimilarAccountsViewDelegate> *similarAccountsViewDelegate; // @synthesize similarAccountsViewDelegate=_similarAccountsViewDelegate;
- (void).cxx_destruct;
- (void)onSeeAllButtonTapped:(id)arg1;
- (void)onCloseTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setTriangleViewCenterOffsetX:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

