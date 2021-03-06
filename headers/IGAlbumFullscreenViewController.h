//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAlbumPlayerViewProgressDelegate.h"

@class IGAlbumFocusCoordinator, IGAlbumFullscreenProfilePictureView, IGAlbumFullscreenProgressView, IGAlbumPlayerView, IGAlbumPlayerViewConfiguration, IGGradientView, IGKVOHandle, IGTapButton, NSString, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface IGAlbumFullscreenViewController : UIViewController <IGAlbumPlayerViewProgressDelegate>
{
    BOOL _shouldShowCameraButton;
    BOOL _isCurrentAlbum;
    IGKVOHandle *_focusCoordinatorObserver;
    IGAlbumFocusCoordinator *_focusCoordinator;
    id <IGAlbumFullscreenViewControllerDelegate> _delegate;
    IGAlbumPlayerView *_albumPlayerView;
    IGAlbumPlayerViewConfiguration *_albumPlayerConfig;
    IGGradientView *_topGradientView;
    IGAlbumFullscreenProfilePictureView *_profilePic;
    IGTapButton *_dismissButton;
    IGTapButton *_commentsButton;
    IGTapButton *_cameraButton;
    IGAlbumFullscreenProgressView *_progressView;
    UISwipeGestureRecognizer *_swipe;
    UITapGestureRecognizer *_tap;
}

@property(nonatomic) BOOL isCurrentAlbum; // @synthesize isCurrentAlbum=_isCurrentAlbum;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipe; // @synthesize swipe=_swipe;
@property(retain, nonatomic) IGAlbumFullscreenProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) IGTapButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) IGTapButton *commentsButton; // @synthesize commentsButton=_commentsButton;
@property(retain, nonatomic) IGTapButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGAlbumFullscreenProfilePictureView *profilePic; // @synthesize profilePic=_profilePic;
@property(retain, nonatomic) IGGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) IGAlbumPlayerViewConfiguration *albumPlayerConfig; // @synthesize albumPlayerConfig=_albumPlayerConfig;
@property(retain, nonatomic) IGAlbumPlayerView *albumPlayerView; // @synthesize albumPlayerView=_albumPlayerView;
@property(readonly, nonatomic) __weak id <IGAlbumFullscreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGAlbumFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
@property(readonly, nonatomic) IGKVOHandle *focusCoordinatorObserver; // @synthesize focusCoordinatorObserver=_focusCoordinatorObserver;
@property(nonatomic) BOOL shouldShowCameraButton; // @synthesize shouldShowCameraButton=_shouldShowCameraButton;
- (void).cxx_destruct;
- (void)cameraButtonTapped;
- (void)commentsDoneTapped;
- (void)commentsButtonTapped;
- (void)swipeToDismiss;
- (void)tapToAdvance;
- (void)dismissButtonTapped;
- (void)albumPlayerViewDidComplete:(id)arg1;
- (void)albumPlayerView:(id)arg1 didProgress:(float)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFocusCoordinator:(id)arg1 isCurrentAlbum:(BOOL)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

