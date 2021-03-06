//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImage, UIImageView, UIView<IGEditorTabView>;

@interface IGEditorTabBar : UIView
{
    UIImage *_selectionIndicatorImage;
    NSArray *_tabViews;
    id <IGEditorTabBarDelegate> _delegate;
    unsigned int _selectedIndex;
    UIImageView *_selectedIndicatorImageView;
}

@property(retain, nonatomic) UIImageView *selectedIndicatorImageView; // @synthesize selectedIndicatorImageView=_selectedIndicatorImageView;
@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <IGEditorTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIView<IGEditorTabView> *selectedTabView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

