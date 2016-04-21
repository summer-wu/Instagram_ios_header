//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class IGStringStyle;

@interface IGLabel : UILabel
{
    id _target;
    SEL _action;
    IGStringStyle *_style;
}

@property(retain, nonatomic) IGStringStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)ig_enabled;
- (BOOL)isInside:(struct CGPoint)arg1;
- (void)highlight:(BOOL)arg1;
- (id)defaultColor;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithStyle:(id)arg1;

@end
