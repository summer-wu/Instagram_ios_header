//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGBannerView, IGFollowPeopleMegaphoneConfiguration, UITableView;

@interface IGFeedFollowPeopleView : UIView
{
    IGBannerView *_bannerView;
    UITableView *_accountListView;
    IGFollowPeopleMegaphoneConfiguration *_megaphoneConfig;
    IGBannerView *_footerBannerView;
    UIView *_bottomLineView;
    UIView *_accountListBottomLineView;
    struct UIEdgeInsets _accountListViewInsets;
}

@property(retain, nonatomic) UIView *accountListBottomLineView; // @synthesize accountListBottomLineView=_accountListBottomLineView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) IGBannerView *footerBannerView; // @synthesize footerBannerView=_footerBannerView;
@property(readonly, nonatomic) IGFollowPeopleMegaphoneConfiguration *megaphoneConfig; // @synthesize megaphoneConfig=_megaphoneConfig;
@property(nonatomic) struct UIEdgeInsets accountListViewInsets; // @synthesize accountListViewInsets=_accountListViewInsets;
@property(retain, nonatomic) UITableView *accountListView; // @synthesize accountListView=_accountListView;
@property(retain, nonatomic) IGBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (float)cellHeightForAccountListViewHeight:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1 megaphoneConfig:(id)arg2;

@end
