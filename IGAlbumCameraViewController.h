//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAssetPlayerViewDelegate.h"
#import "IGAudioSampleBufferDelegate.h"
#import "IGCaptureManagerDelegate.h"
#import "IGCropViewUserInteractionDelegate.h"
#import "IGPanAnimationViewDelegate.h"
#import "IGQuickCamCaptureButtonDelegate.h"
#import "IGVideoSampleBufferDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class IGAdjustController, IGAlbumCreationViewModel, IGAssetPlayerView, IGCameraAccessPromptView, IGCameraGuideView, IGCaptureManager, IGCircularProgressView, IGContext, IGCropView, IGFilterCollectionController, IGLibraryAccessPromptView, IGPanAnimationView, IGPostPipelineFilter, IGQuickCamCaptureButton, IGSampleBuffer, IGStabilizationSampler, IGSurface, IGTapButton, IGVideoRecorder, NSArray, NSObject<OS_dispatch_queue>, NSString, UIImageView, UIView;

@interface IGAlbumCameraViewController : UIViewController <IGAssetPlayerViewDelegate, IGAudioSampleBufferDelegate, IGCaptureManagerDelegate, IGCropViewUserInteractionDelegate, IGPanAnimationViewDelegate, IGQuickCamCaptureButtonDelegate, IGVideoSampleBufferDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    BOOL _visible;
    BOOL _isBackgrounded;
    BOOL _hasStartedCapture;
    BOOL _hasReceivedAudioFrames;
    BOOL _hasShownAudioPermissionsDeniedAlertView;
    BOOL _hasCaptureButtonConfirmed;
    int _state;
    id <IGAlbumCameraViewControllerDelegate> _delegate;
    UIView *_contentView;
    IGTapButton *_currentAlbumButton;
    IGTapButton *_addPeopleButton;
    IGTapButton *_changeTitleButton;
    IGTapButton *_closeButton;
    IGTapButton *_retakeButton;
    IGQuickCamCaptureButton *_captureButton;
    IGTapButton *_flashButton;
    IGTapButton *_switchCameraButton;
    UIView *_cropBackground;
    IGCropView *_cropView;
    IGCameraGuideView *_guideView;
    UIImageView *_videoCoverFrameImageView;
    IGCircularProgressView *_progressView;
    UIView *_loadingOverlayView;
    UIImageView *_loadingThumbnailView;
    id <IGQuickCamInputAsset> _previewAsset;
    IGAssetPlayerView *_playerView;
    int _fullSizeRequestID;
    unsigned int _contentEditingInputRequestID;
    id <IGQuickCamInputAsset> _inputAsset;
    id <IGQuickCamOutputAsset> _outputAsset;
    UIView *_previewView;
    UIImageView *_focusRing;
    IGCaptureManager *_captureManager;
    IGVideoRecorder *_videoRecorder;
    NSObject<OS_dispatch_queue> *_imageBufferQueue;
    IGStabilizationSampler *_stabilizer;
    IGSampleBuffer *_imageBufferData;
    IGCameraAccessPromptView *_cameraPermissionDeniedView;
    IGLibraryAccessPromptView *_libraryAccessDeniedView;
    float _maxVideoDuration;
    IGSurface *_outSurface;
    IGPostPipelineFilter *_postPipelineFilter;
    IGContext *_renderingContext;
    IGFilterCollectionController *_filterTrayController;
    NSArray *_filters;
    int _selectedFilterIndex;
    IGPanAnimationView *_filterableDisplayView;
    IGAdjustController *_adjustController;
    IGAlbumCreationViewModel *_viewModel;
    struct CGSize _filteredRenderSize;
}

@property(retain, nonatomic) IGAlbumCreationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) IGAdjustController *adjustController; // @synthesize adjustController=_adjustController;
@property(retain, nonatomic) IGPanAnimationView *filterableDisplayView; // @synthesize filterableDisplayView=_filterableDisplayView;
@property(nonatomic) int selectedFilterIndex; // @synthesize selectedFilterIndex=_selectedFilterIndex;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) struct CGSize filteredRenderSize; // @synthesize filteredRenderSize=_filteredRenderSize;
@property(retain, nonatomic) IGFilterCollectionController *filterTrayController; // @synthesize filterTrayController=_filterTrayController;
@property(retain, nonatomic) IGContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(retain, nonatomic) IGPostPipelineFilter *postPipelineFilter; // @synthesize postPipelineFilter=_postPipelineFilter;
@property(retain, nonatomic) IGSurface *outSurface; // @synthesize outSurface=_outSurface;
@property(nonatomic) BOOL hasCaptureButtonConfirmed; // @synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed;
@property(nonatomic) float maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(nonatomic) BOOL hasShownAudioPermissionsDeniedAlertView; // @synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView;
@property BOOL hasReceivedAudioFrames; // @synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames;
@property(nonatomic) BOOL hasStartedCapture; // @synthesize hasStartedCapture=_hasStartedCapture;
@property(retain, nonatomic) IGLibraryAccessPromptView *libraryAccessDeniedView; // @synthesize libraryAccessDeniedView=_libraryAccessDeniedView;
@property(retain, nonatomic) IGCameraAccessPromptView *cameraPermissionDeniedView; // @synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView;
@property(retain) IGSampleBuffer *imageBufferData; // @synthesize imageBufferData=_imageBufferData;
@property(retain, nonatomic) IGStabilizationSampler *stabilizer; // @synthesize stabilizer=_stabilizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageBufferQueue; // @synthesize imageBufferQueue=_imageBufferQueue;
@property(retain, nonatomic) IGVideoRecorder *videoRecorder; // @synthesize videoRecorder=_videoRecorder;
@property(retain, nonatomic) IGCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(retain, nonatomic) UIImageView *focusRing; // @synthesize focusRing=_focusRing;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) BOOL isBackgrounded; // @synthesize isBackgrounded=_isBackgrounded;
@property(retain, nonatomic) id <IGQuickCamOutputAsset> outputAsset; // @synthesize outputAsset=_outputAsset;
@property(retain, nonatomic) id <IGQuickCamInputAsset> inputAsset; // @synthesize inputAsset=_inputAsset;
@property(nonatomic) unsigned int contentEditingInputRequestID; // @synthesize contentEditingInputRequestID=_contentEditingInputRequestID;
@property(nonatomic) int fullSizeRequestID; // @synthesize fullSizeRequestID=_fullSizeRequestID;
@property(retain, nonatomic) IGAssetPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) id <IGQuickCamInputAsset> previewAsset; // @synthesize previewAsset=_previewAsset;
@property(retain, nonatomic) UIImageView *loadingThumbnailView; // @synthesize loadingThumbnailView=_loadingThumbnailView;
@property(retain, nonatomic) UIView *loadingOverlayView; // @synthesize loadingOverlayView=_loadingOverlayView;
@property(retain, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *videoCoverFrameImageView; // @synthesize videoCoverFrameImageView=_videoCoverFrameImageView;
@property(retain, nonatomic) IGCameraGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) IGCropView *cropView; // @synthesize cropView=_cropView;
@property(retain, nonatomic) UIView *cropBackground; // @synthesize cropBackground=_cropBackground;
@property(retain, nonatomic) IGTapButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) IGTapButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) IGQuickCamCaptureButton *captureButton; // @synthesize captureButton=_captureButton;
@property(retain, nonatomic) IGTapButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(retain, nonatomic) IGTapButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IGTapButton *changeTitleButton; // @synthesize changeTitleButton=_changeTitleButton;
@property(retain, nonatomic) IGTapButton *addPeopleButton; // @synthesize addPeopleButton=_addPeopleButton;
@property(retain, nonatomic) IGTapButton *currentAlbumButton; // @synthesize currentAlbumButton=_currentAlbumButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <IGAlbumCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)hideNUX;
- (void)showNUXWithTitle:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)showVideoTooShortNUX;
- (void)showHoldToRecordNUX;
- (void)panAnimationViewDidUpdateCenterImage:(id)arg1;
- (void)panAnimationView:(id)arg1 didPanToLeftBy:(float)arg2;
- (void)panAnimationView:(id)arg1 didPanToRightBy:(float)arg2;
- (void)panAnimationViewDidFinishPanToLeft:(id)arg1;
- (void)panAnimationViewDidFinishPanToRight:(id)arg1;
- (void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(float)arg2;
- (void)panAnimationView:(id)arg1 willFinishPanAnimationWithDuration:(float)arg2;
- (id)getSurfaceFromImage:(id)arg1;
- (void)setImageForFilters:(id)arg1;
- (void)resetFilter;
- (BOOL)currentImageIsFiltered;
- (id)filteredImageFromPipelineUsingSize:(struct CGSize)arg1;
- (id)imageFromFilterIndex:(unsigned int)arg1;
- (int)filterIndexForIndexOffset:(int)arg1;
- (void)setupFilters;
- (void)stopRecording;
- (void)cancelRecording;
- (void)stopRecordingOnCaptureQueue:(BOOL)arg1;
- (void)startRecording;
- (void)updateStabilizationSampler;
- (void)captureSessionWillTakePhoto;
- (void)captureSessionNeedsResume:(BOOL)arg1;
- (void)captureSessionDidCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureSessionDidDropAudioBuffer;
- (void)captureSessionDidCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureSessionDidDropVideoBuffer;
- (BOOL)cameraIsReady;
- (void)captureDeviceDidSatisfyFocusRequest;
- (void)focusTap:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setViewColorToDefault;
- (void)stopVideoPlayer;
- (void)hideLoadingViews;
- (void)confirmInputAsset:(id)arg1;
- (void)updateVideoSize;
- (void)onSwitchCamerasButtonTapped;
- (void)captureButtonDidEndRecording;
- (void)captureButtonDidBeginRecording;
- (void)captureButtonDidTakePicture;
- (struct CGRect)cropRectForOutputAsset;
- (void)finalizeOutputAsset;
- (void)confirmAssetIfPossible;
- (void)captureButtonDidConfirm;
- (id)finalizeImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)assetPlayerView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)assetPlayerViewPlayStateDidChange:(id)arg1;
- (void)assetPlayerViewAssetLoaded:(id)arg1;
- (void)cropViewUserInteractionDidEnd:(id)arg1;
- (void)cropViewUserInteractionDidBegin:(id)arg1;
- (void)setFlashMode:(int)arg1;
- (void)updateFlashButton;
- (id)inputLibraryAssetForFrameworkAsset:(id)arg1;
- (void)internalSetState:(int)arg1;
- (void)showCameraPermissionDeniedView;
- (void)showAudioPermissionsDeniedAlertView;
- (void)currentAlbumButtonTapped;
- (void)retakeButtonTapped;
- (void)flashButtonTapped;
- (void)closeButtonTapped;
- (void)changeTitleButtonTapped;
- (void)addPeopleButtonTapped;
- (void)configureWithViewModel:(id)arg1;
- (void)updateCurrentAlbumButton;
- (void)updateChangeTitleButton;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)startCapture;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)startLibrary;
- (void)handleDismiss:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
