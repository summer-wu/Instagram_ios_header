//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UILabel;

@interface IGNuxTapOnCameraView : UIView
{
    BOOL _isAnimating;
    UIImage *_shadowImage;
    UIView *_shadowView;
    UIView *_backgroundView;
    UILabel *_textLabel;
    UIImage *_arrowImage;
    UIImageView *_arrowImageView;
}

+ (BOOL)shouldShowTapOnCameraNuxForUser:(id)arg1;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 animateTranslatationWithCurrentOffset:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)showInView:(id)arg1;
- (id)init;
- (void)dealloc;

@end

