//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAlbumTabBarEntryControllerDataSource.h"
#import "IGAlbumTabBarEntryControllerDelegate.h"
#import "IGDimmedOverlayViewControllerDelegate.h"
#import "IGExplorePromptTooltipPresenterDelegate.h"
#import "IGInlineGalleryPresenter.h"
#import "IGSwitchUsersControllerDelegate.h"
#import "IGToastViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGAlbumTabBarEntryController, IGDimmedOverlayViewController, IGExplorePromptTooltipPresenter, IGInlineGalleryViewController, IGNavigationController, IGNewsViewController, IGSwitchUsersController, IGTabBar, IGTabBarButton, IGToastData, IGToastViewPopup, NSArray, NSString, UIView, UIWindow;

@interface IGTabBarController : UIViewController <IGAlbumTabBarEntryControllerDataSource, IGAlbumTabBarEntryControllerDelegate, IGDimmedOverlayViewControllerDelegate, IGExplorePromptTooltipPresenterDelegate, IGInlineGalleryPresenter, IGSwitchUsersControllerDelegate, IGToastViewDelegate, UIGestureRecognizerDelegate>
{
    IGTabBar *_tabBar;
    IGTabBarButton *_homeButton;
    IGTabBarButton *_popularButton;
    IGTabBarButton *_cameraButton;
    IGTabBarButton *_newsButton;
    IGTabBarButton *_profileButton;
    BOOL _isPerformingTabBarAction;
    BOOL _isDisplayingSwitchUsersTableView;
    NSArray *_viewControllers;
    int _selectedTabBarItem;
    IGToastViewPopup *_activityToastView;
    int _cameraButtonMode;
    IGToastData *_suppressedToastData;
    int _pendingRequestCount;
    IGSwitchUsersController *_switchUsersController;
    UIWindow *_dimmedOverlayWindow;
    IGDimmedOverlayViewController *_dimmedOverlayViewController;
    IGInlineGalleryViewController *_inlineGalleryController;
    IGAlbumTabBarEntryController *_albumTabBarEntryController;
    IGExplorePromptTooltipPresenter *_tooltipPresenter;
}

@property(retain, nonatomic) IGExplorePromptTooltipPresenter *tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
@property(retain, nonatomic) IGAlbumTabBarEntryController *albumTabBarEntryController; // @synthesize albumTabBarEntryController=_albumTabBarEntryController;
@property(retain, nonatomic) IGInlineGalleryViewController *inlineGalleryController; // @synthesize inlineGalleryController=_inlineGalleryController;
@property(nonatomic) BOOL isDisplayingSwitchUsersTableView; // @synthesize isDisplayingSwitchUsersTableView=_isDisplayingSwitchUsersTableView;
@property(retain, nonatomic) IGDimmedOverlayViewController *dimmedOverlayViewController; // @synthesize dimmedOverlayViewController=_dimmedOverlayViewController;
@property(retain, nonatomic) UIWindow *dimmedOverlayWindow; // @synthesize dimmedOverlayWindow=_dimmedOverlayWindow;
@property(retain, nonatomic) IGSwitchUsersController *switchUsersController; // @synthesize switchUsersController=_switchUsersController;
@property(nonatomic) int pendingRequestCount; // @synthesize pendingRequestCount=_pendingRequestCount;
@property(retain, nonatomic) IGToastData *suppressedToastData; // @synthesize suppressedToastData=_suppressedToastData;
@property(nonatomic) int cameraButtonMode; // @synthesize cameraButtonMode=_cameraButtonMode;
@property(retain, nonatomic) IGToastViewPopup *activityToastView; // @synthesize activityToastView=_activityToastView;
@property(nonatomic) BOOL isPerformingTabBarAction; // @synthesize isPerformingTabBarAction=_isPerformingTabBarAction;
@property(readonly, nonatomic) int selectedTabBarItem; // @synthesize selectedTabBarItem=_selectedTabBarItem;
- (void).cxx_destruct;
- (void)setAttentionOnExploreTab;
- (void)directUserToSearchTab;
- (id)navigationControllerForTabBarItem:(int)arg1;
- (void)prefetchAndFocusInboxInNewsTab;
- (void)refetchUserProfile;
- (void)openURLInNewsTab:(id)arg1;
- (void)dimmedOverlayViewControllerDidTapDimmedOverlay:(id)arg1;
- (void)tabBarIsHiding;
- (void)albumTabBarEntryControllerShouldDismiss:(id)arg1;
- (void)albumTabBarEntryController:(id)arg1 didPickEntry:(int)arg2;
- (float)albumTabBarEntryTabBarBottomOffsetY;
- (void)animateAlbumTabBarEntryController:(CDUnknownBlockType)arg1;
- (void)hideAlbumTabBarEntryController;
- (void)showAlbumTabBarEntryController;
- (BOOL)albumsEnabled;
- (void)autoPromptInlineGallery:(id)arg1;
- (void)inlineGallery:(id)arg1 didUpdateToState:(int)arg2;
- (float)referenceYPositionForInlineGallery:(id)arg1;
- (void)impressionDebugging:(id)arg1;
- (void)toastCountsReceived:(id)arg1;
@property(readonly, nonatomic) BOOL shouldDelayToastPopup;
- (void)moveDownTabBarToOffset:(float)arg1;
- (BOOL)showingActivityToast;
- (void)displaySuppressedActivityToastWhenApporiate;
- (void)otherUserDidReceiveNotifications:(id)arg1;
- (void)settingsCountDidUpdate:(id)arg1;
- (void)inboxCountDidUpdate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (void)toastViewTapped:(id)arg1;
- (void)hideActivityToastAnimated:(BOOL)arg1;
- (void)hideActivityToastWithAnimation;
- (void)displayActivityToastWithToastData:(id)arg1;
- (void)layoutToast;
@property(readonly, nonatomic) UIViewController *selectedViewController;
@property(readonly, nonatomic) UIView *tabBar;
@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) BOOL isTabBarVisible;
- (BOOL)itemNeedsAttention:(int)arg1;
- (void)setNeedsAttention:(BOOL)arg1 forItem:(int)arg2;
- (void)updateTabBarButtonsToSelectedItem:(int)arg1;
- (void)setSelectedTabBarItem:(int)arg1 animated:(BOOL)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)switchUsersController:(id)arg1 wantsToUpdateNeedsAttention:(BOOL)arg2;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)arg1;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
- (void)logNavigationEventForClickPoint:(id)arg1;
- (void)animateSwitchUsersTableView;
- (void)grayOverlayViewTapped;
- (void)profileButtonLongPressed:(id)arg1;
- (void)profileButtonPressed;
- (void)newsButtonPressed;
- (void)cameraButtonLongPressed:(id)arg1;
- (void)startCamera;
- (void)cameraButtonPressed;
- (void)popularButtonLongPressed:(id)arg1;
- (void)popularButtonPressed;
- (void)homeButtonPressed;
- (void)initializeInlineGalleryVCIfNeeded;
- (void)removeInlineGalleryAsChildViewController;
- (BOOL)presentInlineGalleryWithStyle:(int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) IGNewsViewController *newsViewController;
@property(readonly, nonatomic) IGNavigationController *newsNavigationController;
- (void)initializeViewControllers;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

