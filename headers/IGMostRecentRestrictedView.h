//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UILabel;

@interface IGMostRecentRestrictedView : UIView
{
    CALayer *_separatorLayer;
    UILabel *_messageLabel;
    UIButton *_learnButton;
}

@property(readonly, nonatomic) UIButton *learnButton; // @synthesize learnButton=_learnButton;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
- (void).cxx_destruct;
- (void)addLearnMoreTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFeedName:(id)arg1;

@end

