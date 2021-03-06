//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView;

@interface IGDirectGrowingMessageTextView : UIView <UITextViewDelegate>
{
    id <IGDirectGrowingMessageTextViewDelegate> _delegate;
    UIImageView *_backgroundBubbleView;
    UIButton *_messageTextViewClearButton;
    UILabel *_placeholderTextLabel;
    UITextView *_messageTextView;
}

+ (float)messageViewDefaultHeight;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UILabel *placeholderTextLabel; // @synthesize placeholderTextLabel=_placeholderTextLabel;
@property(retain, nonatomic) UIButton *messageTextViewClearButton; // @synthesize messageTextViewClearButton=_messageTextViewClearButton;
@property(retain, nonatomic) UIImageView *backgroundBubbleView; // @synthesize backgroundBubbleView=_backgroundBubbleView;
@property(nonatomic) __weak id <IGDirectGrowingMessageTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateClearButton;
- (void)updateMessageTextView;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)messageTextViewClearButtonTapped;
- (void)layoutSubviews;
- (void)startEditing;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (id)text;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

