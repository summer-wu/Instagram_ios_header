//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class NSString, RCTRootView;

@interface IGReactViewController : IGViewController
{
    NSString *_appKey;
    RCTRootView *_rctRootView;
}

@property(retain, nonatomic) RCTRootView *rctRootView; // @synthesize rctRootView=_rctRootView;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersTabBarHidden;

@end

