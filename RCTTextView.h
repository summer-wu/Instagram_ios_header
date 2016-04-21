//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTView.h"

#import "UITextViewDelegate.h"

@class NSAttributedString, NSMutableArray, NSNumber, NSString, RCTEventDispatcher, RCTText, UIColor, UIFont, UIScrollView, UITextRange, UITextView;

@interface RCTTextView : RCTView <UITextViewDelegate>
{
    RCTEventDispatcher *_eventDispatcher;
    NSString *_placeholder;
    UITextView *_placeholderView;
    UITextView *_textView;
    int _nativeEventCount;
    RCTText *_richTextView;
    NSAttributedString *_pendingAttributedText;
    NSMutableArray *_subviews;
    BOOL _blockTextShouldChange;
    UITextRange *_previousSelectionRange;
    unsigned int _previousTextLength;
    float _previousContentHeight;
    UIScrollView *_scrollView;
    BOOL _blurOnSubmit;
    BOOL _clearTextOnFocus;
    BOOL _selectTextOnFocus;
    BOOL _automaticallyAdjustContentInsets;
    UIColor *_placeholderTextColor;
    int _mostRecentEventCount;
    NSNumber *_maxLength;
    CDUnknownBlockType _onSelectionChange;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) int mostRecentEventCount; // @synthesize mostRecentEventCount=_mostRecentEventCount;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) BOOL automaticallyAdjustContentInsets; // @synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) BOOL selectTextOnFocus; // @synthesize selectTextOnFocus=_selectTextOnFocus;
@property(nonatomic) BOOL clearTextOnFocus; // @synthesize clearTextOnFocus=_clearTextOnFocus;
@property(nonatomic) BOOL blurOnSubmit; // @synthesize blurOnSubmit=_blurOnSubmit;
- (void).cxx_destruct;
- (id)defaultPlaceholderTextColor;
- (id)defaultPlaceholderFont;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)reactDidMakeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)reactWillMakeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
@property(nonatomic) BOOL autoCorrect;
- (void)_setPlaceholderVisibility;
@property(copy, nonatomic) NSString *text;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setPlaceholder:(id)arg1;
@property(retain, nonatomic) UIFont *font;
- (void)updatePlaceholder;
- (void)updateContentSize;
- (void)updateFrames;
- (void)performPendingTextUpdate;
- (void)performTextUpdate;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (id)reactSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
