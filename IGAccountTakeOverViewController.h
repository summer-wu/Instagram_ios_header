//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class FBSDKAccessToken, IGAccountTakeOverView, NSDictionary;

@interface IGAccountTakeOverViewController : UIViewController
{
    id <IGAccountTakeOverViewControllerDelegate> _delegate;
    NSDictionary *_loggedInDictionary;
    IGAccountTakeOverView *_accountTakeOverView;
    FBSDKAccessToken *_facebookAccessToken;
}

@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) IGAccountTakeOverView *accountTakeOverView; // @synthesize accountTakeOverView=_accountTakeOverView;
@property(readonly, nonatomic) NSDictionary *loggedInDictionary; // @synthesize loggedInDictionary=_loggedInDictionary;
@property(nonatomic) __weak id <IGAccountTakeOverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)signUp;
- (void)login;
- (void)viewDidLoad;
- (id)initWithLoggedInDictionary:(id)arg1 facebookAccessToken:(id)arg2;

@end

