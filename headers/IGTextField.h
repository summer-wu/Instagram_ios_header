//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class UIColor, UIImage, UIImageView, UIView;

@interface IGTextField : UITextField
{
    BOOL _isValid;
    BOOL _isVerifying;
    BOOL _hideCursor;
    BOOL _shouldHoldFirstResponder;
    UIImage *_icon;
    int _validity;
    int _iconSpacing;
    int _leftViewVerticalLayoutType;
    UIColor *_caretOverlayTintColor;
    UIView *_caretOverlayView;
    UIImageView *_iconImageView;
    struct UIEdgeInsets _insets;
}

+ (id)iconTintColorForValidity:(int)arg1;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *caretOverlayView; // @synthesize caretOverlayView=_caretOverlayView;
@property(nonatomic) BOOL shouldHoldFirstResponder; // @synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder;
@property(retain, nonatomic) UIColor *caretOverlayTintColor; // @synthesize caretOverlayTintColor=_caretOverlayTintColor;
@property(nonatomic) int leftViewVerticalLayoutType; // @synthesize leftViewVerticalLayoutType=_leftViewVerticalLayoutType;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) int iconSpacing; // @synthesize iconSpacing=_iconSpacing;
@property(nonatomic) BOOL hideCursor; // @synthesize hideCursor=_hideCursor;
@property(nonatomic) BOOL isVerifying; // @synthesize isVerifying=_isVerifying;
@property(nonatomic) int validity; // @synthesize validity=_validity;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)wiggleAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)canResignFirstResponder;
- (void)deleteBackward;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (void)didChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPlaceholder:(id)arg1;
- (id)init;

@end

