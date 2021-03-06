//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCTAPresenterContext, UIButton;

@interface IGGenericCTAView : UIView
{
    IGCTAPresenterContext *_context;
    UIButton *_ctaButton;
    float _hairlineHeight;
    UIView *_bottomHairline;
}

@property(readonly, nonatomic) UIView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(readonly, nonatomic) float hairlineHeight; // @synthesize hairlineHeight=_hairlineHeight;
@property(readonly, nonatomic) UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(readonly, nonatomic) IGCTAPresenterContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)ctaButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithContext:(id)arg1;

@end

