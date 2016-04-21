//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGTabControlDelegate.h"

@class IGTabControl, NSArray, NSString, UIFont;

@interface IGInsightsTabBarController : UIViewController <IGTabControlDelegate>
{
    BOOL _tabControlScrollable;
    BOOL _showButtonBorder;
    NSArray *_contentViewControllers;
    UIViewController *_currentViewController;
    NSString *_tabBarTitle;
    id <IGInsightsTabBarControllerDelegate> _delegate;
    IGTabControl *_tabControl;
    UIFont *_tabFont;
}

@property(readonly, nonatomic) BOOL showButtonBorder; // @synthesize showButtonBorder=_showButtonBorder;
@property(retain, nonatomic) UIFont *tabFont; // @synthesize tabFont=_tabFont;
@property(readonly, nonatomic) BOOL tabControlScrollable; // @synthesize tabControlScrollable=_tabControlScrollable;
@property(readonly, nonatomic) IGTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(nonatomic) __weak id <IGInsightsTabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *tabBarTitle; // @synthesize tabBarTitle=_tabBarTitle;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (void).cxx_destruct;
- (id)_viewControllerAtIndex:(int)arg1;
- (BOOL)_showTabControl;
- (void)_initializeTabControl;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned int)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithTabControlScrollable:(BOOL)arg1 tabFont:(id)arg2 showButtonBorder:(BOOL)arg3;

@end
