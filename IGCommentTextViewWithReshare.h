//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCommentTextViewWithReshareProtocol.h"

@class IGGrowingTextView, NSString, UIButton;

@interface IGCommentTextViewWithReshare : UIView <IGCommentTextViewWithReshareProtocol>
{
    UIView *_topLine;
    IGGrowingTextView *_growingTextView;
    UIButton *_sendButton;
    UIButton *_reshareButton;
    UIButton *_postButton;
    UIButton *_modeSwitchButton;
}

@property(readonly, nonatomic) UIButton *modeSwitchButton; // @synthesize modeSwitchButton=_modeSwitchButton;
@property(readonly, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(readonly, nonatomic) UIButton *reshareButton; // @synthesize reshareButton=_reshareButton;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) IGGrowingTextView *growingTextView; // @synthesize growingTextView=_growingTextView;
@property(readonly, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (id)autocompleteTextInput;
- (void)insertText:(id)arg1;
- (void)clearText;
- (float)modeSwitchButtonCenterX;
- (void)addModeSwitchButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonEnabled:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (id)textView;
- (void)layoutSubviews;
- (void)updateUIForStatus:(int)arg1;
- (void)setupModeSwitchButton;
- (void)setupSendButton;
- (void)setupGrowingTextView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

