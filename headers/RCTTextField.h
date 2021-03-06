//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSMutableArray, NSNumber, RCTEventDispatcher, UIColor, UITextRange;

@interface RCTTextField : UITextField
{
    RCTEventDispatcher *_eventDispatcher;
    NSMutableArray *_reactSubviews;
    BOOL _jsRequestingFirstResponder;
    int _nativeEventCount;
    BOOL _submitted;
    UITextRange *_previousSelectionRange;
    BOOL _caretHidden;
    BOOL _selectTextOnFocus;
    BOOL _blurOnSubmit;
    BOOL _textWasPasted;
    UIColor *_placeholderTextColor;
    int _mostRecentEventCount;
    NSNumber *_maxLength;
    CDUnknownBlockType _onSelectionChange;
    struct UIEdgeInsets _contentInset;
}

@property(copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(nonatomic) BOOL textWasPasted; // @synthesize textWasPasted=_textWasPasted;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) int mostRecentEventCount; // @synthesize mostRecentEventCount=_mostRecentEventCount;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) BOOL blurOnSubmit; // @synthesize blurOnSubmit=_blurOnSubmit;
@property(nonatomic) BOOL selectTextOnFocus; // @synthesize selectTextOnFocus=_selectTextOnFocus;
@property(nonatomic) BOOL caretHidden; // @synthesize caretHidden=_caretHidden;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)reactDidMakeFirstResponder;
- (void)reactWillMakeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)sendSelectionEvent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldBeginEditing;
- (void)textFieldSubmitEditing;
- (void)textFieldEndEditing;
- (void)textFieldDidChange;
@property(nonatomic) BOOL autoCorrect;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (void)removeReactSubview:(id)arg1;
- (id)reactSubviews;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (void)paste:(id)arg1;
- (void)sendKeyValueForString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithEventDispatcher:(id)arg1;

@end

