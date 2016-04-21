//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAnalyticsModule.h"
#import "IGAutocompleteControllerDelegate.h"
#import "IGCameraViewControllerProtocol.h"
#import "IGCaptionCellDelegate.h"
#import "IGMediaRequestDelegate.h"
#import "IGShareModeDropdownViewDataSource.h"
#import "IGShareModeDropdownViewDelegate.h"

@class IGAutocompleteController, IGBroadcastShareManager, IGCameraNavigationController, IGCaptionCell, IGChevronTitleButton, IGDirectMainCamShareViewController, IGKVOHandle, IGMediaMetadata, IGShareButton, IGShareModeDropdownView, IGShareToggle, IGVideoComposition, NSString, UIBarButtonItem, UIView, UIViewController<IGShareManager>;

@interface IGShareViewController : IGViewController <IGAutocompleteControllerDelegate, IGShareModeDropdownViewDataSource, IGShareModeDropdownViewDelegate, IGCaptionCellDelegate, IGMediaRequestDelegate, IGAnalyticsModule, IGCameraViewControllerProtocol>
{
    IGKVOHandle *_readyToShareObserver;
    IGKVOHandle *_scrollViewObserver;
    BOOL _isInMode;
    BOOL _overlayIsOpaque;
    BOOL _overlayHasDropShadow;
    BOOL _renderInProgress;
    BOOL _shouldUseNavBarShareButton;
    BOOL _shouldUseDropDownTitleButton;
    id <IGShareViewControllerDelegate> _delegate;
    IGVideoComposition *_video;
    IGMediaMetadata *_mediaMetadata;
    int _shareMode;
    IGChevronTitleButton *_chevronTitleButton;
    UIBarButtonItem *_shareItem;
    IGShareModeDropdownView *_shareModeDropdownView;
    UIViewController<IGShareManager> *_shareManager;
    IGBroadcastShareManager *_broadcastShareManager;
    IGDirectMainCamShareViewController *_directShareManager;
    IGCaptionCell *_captionCell;
    IGAutocompleteController *_autocompleteController;
    UIView *_headerView;
    IGShareToggle *_legacyShareToggle;
    IGShareButton *_bottomShareButton;
    UIView *_overlayView;
}

@property(readonly, nonatomic) BOOL shouldUseDropDownTitleButton; // @synthesize shouldUseDropDownTitleButton=_shouldUseDropDownTitleButton;
@property(readonly, nonatomic) BOOL shouldUseNavBarShareButton; // @synthesize shouldUseNavBarShareButton=_shouldUseNavBarShareButton;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) IGShareButton *bottomShareButton; // @synthesize bottomShareButton=_bottomShareButton;
@property(retain, nonatomic) IGShareToggle *legacyShareToggle; // @synthesize legacyShareToggle=_legacyShareToggle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IGAutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(retain, nonatomic) IGCaptionCell *captionCell; // @synthesize captionCell=_captionCell;
@property(retain, nonatomic) IGDirectMainCamShareViewController *directShareManager; // @synthesize directShareManager=_directShareManager;
@property(retain, nonatomic) IGBroadcastShareManager *broadcastShareManager; // @synthesize broadcastShareManager=_broadcastShareManager;
@property(retain, nonatomic) UIViewController<IGShareManager> *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) IGShareModeDropdownView *shareModeDropdownView; // @synthesize shareModeDropdownView=_shareModeDropdownView;
@property(retain, nonatomic) UIBarButtonItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) IGChevronTitleButton *chevronTitleButton; // @synthesize chevronTitleButton=_chevronTitleButton;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) BOOL renderInProgress; // @synthesize renderInProgress=_renderInProgress;
@property(retain, nonatomic) IGVideoComposition *video; // @synthesize video=_video;
@property(nonatomic) __weak id <IGShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL overlayHasDropShadow; // @synthesize overlayHasDropShadow=_overlayHasDropShadow;
@property(nonatomic) BOOL overlayIsOpaque; // @synthesize overlayIsOpaque=_overlayIsOpaque;
- (void).cxx_destruct;
- (id)analyticsModule;
- (int)viewType;
- (BOOL)enableNavState;
- (id)analyticsMetadata;
@property(readonly, nonatomic) IGCameraNavigationController *navController;
- (void)stopProgressHUDIfSlowDevice;
- (void)startProgressHUDIfSlowDevice;
- (BOOL)shouldEnableStickySharing;
- (void)configureStickySharingSelections;
- (void)share;
- (void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(BOOL)arg3 allResults:(id)arg4;
- (void)autocompleteController:(id)arg1 willHideTableView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowTableView:(id)arg2;
- (void)autocompleteControllerDidAutocomplete:(id)arg1;
- (void)onOverlayViewTapped:(id)arg1;
- (void)onCaptionModeOKButtonTapped;
- (void)updateNavigationItemWithModeTitle:(id)arg1 animated:(BOOL)arg2;
- (void)exitCaptionMode;
- (void)enterCaptionMode;
- (void)removeOverlayView;
- (void)addOverlayViewHidden;
- (void)captionCellMediaOverlayViewTapped;
- (BOOL)captionCellMediaOverlayViewTapEnabled;
- (void)captionTextViewDidBeginEditing:(id)arg1;
- (void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;
- (void)captionTextViewDidChange:(id)arg1;
- (BOOL)captionTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)captionTextViewWillBeginEditing:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)layoutAutocompleteTableForKeyboardHeight:(float)arg1;
- (void)onShareButtonTapped;
- (void)onChevronTitleButtonTapped;
- (void)onBackButtonTapped;
- (void)internalSetShareMode:(int)arg1;
- (float)navigationBarMaxY;
- (void)toggleTitleShareMode;
- (void)dropdownView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)dropdownView:(id)arg1 titleForItemForIndex:(int)arg2;
- (int)numberOfItemsInDropdownView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateCaptionOffset;
- (struct CGRect)viewRectMinusNavigationBar;
- (struct CGRect)viewRectMinusNavigationBarAndShareButton;
- (void)updateShareButton;
- (BOOL)prefersNavbarBottomBorderHidden;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)prefersStatusBarHidden;
- (id)ig_keyViewControllers;
- (id)initWithMediaMetadata:(id)arg1;
- (void)dealloc;
- (id)allResultsList:(id)arg1;
- (void)logAutocomplete:(id)arg1 clickEventAtIndex:(int)arg2 isUserSearch:(BOOL)arg3 allResults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

