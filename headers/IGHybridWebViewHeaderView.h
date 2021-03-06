//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGHybridWebViewHeaderViewConfig, NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface IGHybridWebViewHeaderView : UIView
{
    NSString *_screenID;
    IGHybridWebViewHeaderViewConfig *_config;
    UIButton *_leftButton;
    UILabel *_titleLabel;
    UIButton *_rightButton;
    UIActivityIndicatorView *_spinner;
    CDUnknownBlockType _leftButtonCompletion;
    CDUnknownBlockType _rightButtonCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType rightButtonCompletion; // @synthesize rightButtonCompletion=_rightButtonCompletion;
@property(copy, nonatomic) CDUnknownBlockType leftButtonCompletion; // @synthesize leftButtonCompletion=_leftButtonCompletion;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, nonatomic) IGHybridWebViewHeaderViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *screenID; // @synthesize screenID=_screenID;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showSpinner:(BOOL)arg1;
- (void)setIsRightButtonHidden:(BOOL)arg1;
- (void)setIsRightButtonActive:(BOOL)arg1;
- (void)setUpRightButtonWithString:(id)arg1 onTapAction:(CDUnknownBlockType)arg2;
- (void)setUpLeftButtonWithImage:(id)arg1 onTapAction:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *title;
- (void)onRightButtonTapped:(id)arg1;
- (void)onLeftButtonTapped:(id)arg1;
- (void)setUpViewHierarchy;
- (id)initWithFrame:(struct CGRect)arg1 withConfig:(id)arg2;

@end

