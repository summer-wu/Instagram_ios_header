//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITextView;

@protocol IGCommentTextViewProtocol <NSObject>
- (id <IGAutocompleteControllerTextInput>)autocompleteTextInput;
- (void)clearText;
- (void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonEnabled:(BOOL)arg1;
- (void)insertText:(NSString *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setPlaceholderText:(NSString *)arg1;
- (void)setTextViewDelegate:(id <IGGrowingTextViewDelegate>)arg1;
- (UITextView *)textView;
@end

