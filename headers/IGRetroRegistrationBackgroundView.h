//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRegistrationBackgroundView, UIButton, UILabel;

@interface IGRetroRegistrationBackgroundView : UIView
{
    UIButton *_footerButton;
    UIView *_footerView;
    IGRegistrationBackgroundView *_backgroundView;
    UIView *_footerViewSeperator;
    int _footerViewType;
    UILabel *_footerViewLabel;
}

@property(retain, nonatomic) UILabel *footerViewLabel; // @synthesize footerViewLabel=_footerViewLabel;
@property(nonatomic) int footerViewType; // @synthesize footerViewType=_footerViewType;
@property(retain, nonatomic) UIView *footerViewSeperator; // @synthesize footerViewSeperator=_footerViewSeperator;
@property(retain, nonatomic) IGRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
- (void).cxx_destruct;
- (id)footerViewButtonText;
- (id)footerViewLabelText;
- (void)setupFooterViewForType;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 footerViewType:(int)arg2;

@end
