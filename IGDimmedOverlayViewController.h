//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface IGDimmedOverlayViewController : UIViewController
{
    id <IGDimmedOverlayViewControllerDelegate> _delegate;
    int _statusBarStyle;
    UIView *_grayOverlayView;
}

@property(retain, nonatomic) UIView *grayOverlayView; // @synthesize grayOverlayView=_grayOverlayView;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) __weak id <IGDimmedOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)grayOverlayViewTapped;
- (void)setDimmedOverlayAlpha:(float)arg1;
- (void)viewDidLoad;
- (int)preferredStatusBarStyle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
