//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface IGExplorePromptTooltipView : UIView
{
    UIView *_contentView;
    UIView *_tooltipSeperatorView;
    float _cornerRadiusSize;
}

@property(nonatomic) float cornerRadiusSize; // @synthesize cornerRadiusSize=_cornerRadiusSize;
@property(retain, nonatomic) UIView *tooltipSeperatorView; // @synthesize tooltipSeperatorView=_tooltipSeperatorView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureContentView:(id)arg1 tooltipCenterX:(float)arg2 cornerRadiusSize:(float)arg3;

@end

