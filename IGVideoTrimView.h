//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class IGFilmStripView, IGTimeRulerView, IGVideoTrimViewControl, NSString, UIImageView, UILabel, UIScrollView;

@interface IGVideoTrimView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _showsConfirmationControl;
    BOOL _playheadHidden;
    id <IGVideoTrimViewDelegate> _delegate;
    float _timeScale;
    float _assetDuration;
    float _minimumTrimLength;
    float _maximumTrimLength;
    float _playbackOffset;
    UIScrollView *_scrollView;
    IGFilmStripView *_filmstripView;
    IGVideoTrimViewControl *_confirmationControl;
    unsigned int _panningTrimHandle;
    UIView *_leftDistortionView;
    UIImageView *_trimHandlesView;
    UIView *_rightDistortionView;
    IGTimeRulerView *_rulerView;
    UIImageView *_playheadImageView;
    UILabel *_playheadLabel;
    float _previousPanningOffset;
    struct _IGRange _trimmedRange;
}

@property(nonatomic) float previousPanningOffset; // @synthesize previousPanningOffset=_previousPanningOffset;
@property(retain, nonatomic) UILabel *playheadLabel; // @synthesize playheadLabel=_playheadLabel;
@property(retain, nonatomic) UIImageView *playheadImageView; // @synthesize playheadImageView=_playheadImageView;
@property(retain, nonatomic) IGTimeRulerView *rulerView; // @synthesize rulerView=_rulerView;
@property(retain, nonatomic) UIView *rightDistortionView; // @synthesize rightDistortionView=_rightDistortionView;
@property(retain, nonatomic) UIImageView *trimHandlesView; // @synthesize trimHandlesView=_trimHandlesView;
@property(retain, nonatomic) UIView *leftDistortionView; // @synthesize leftDistortionView=_leftDistortionView;
@property(readonly, nonatomic) unsigned int panningTrimHandle; // @synthesize panningTrimHandle=_panningTrimHandle;
@property(readonly, nonatomic) IGVideoTrimViewControl *confirmationControl; // @synthesize confirmationControl=_confirmationControl;
@property(retain, nonatomic) IGFilmStripView *filmstripView; // @synthesize filmstripView=_filmstripView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL playheadHidden; // @synthesize playheadHidden=_playheadHidden;
@property(nonatomic) float playbackOffset; // @synthesize playbackOffset=_playbackOffset;
@property(nonatomic) float maximumTrimLength; // @synthesize maximumTrimLength=_maximumTrimLength;
@property(nonatomic) float minimumTrimLength; // @synthesize minimumTrimLength=_minimumTrimLength;
@property(nonatomic) struct _IGRange trimmedRange; // @synthesize trimmedRange=_trimmedRange;
@property(nonatomic) BOOL showsConfirmationControl; // @synthesize showsConfirmationControl=_showsConfirmationControl;
@property(nonatomic) float assetDuration; // @synthesize assetDuration=_assetDuration;
@property(nonatomic) float timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) __weak id <IGVideoTrimViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned int)trimHandleAtPoint:(struct CGPoint)arg1;
- (struct CGRect)touchRectForTrimHandle:(unsigned int)arg1;
- (struct CGRect)rectForTrimRange:(struct _IGRange)arg1;
- (void)userDidPanTrimHandles:(id)arg1;
- (id)durationStringForNumber:(id)arg1;
- (void)updatePlayheadLabel;
- (void)layoutSubviews;
- (void)scrollToTrimHandles;
- (void)setPlayheadHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)pointInsideTrimHandles:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

