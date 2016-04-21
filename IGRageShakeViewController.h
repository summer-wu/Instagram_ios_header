//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCaptionCellDelegate.h"

@class IGCaptionCell, IGGroupedTableViewHeaderView, NSData, NSMutableDictionary, NSString;

@interface IGRageShakeViewController : IGViewController <IGCaptionCellDelegate>
{
    IGCaptionCell *_captionCell;
    IGGroupedTableViewHeaderView *_headerLabel;
    int _reportType;
    NSData *_screenshotImageData;
    NSData *_windowDescriptionData;
    id <IGRageShakeViewControllerDelegate> _delegate;
    NSMutableDictionary *_attachments;
}

@property(retain, nonatomic) NSMutableDictionary *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) __weak id <IGRageShakeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSData *windowDescriptionData; // @synthesize windowDescriptionData=_windowDescriptionData;
@property(copy, nonatomic) NSData *screenshotImageData; // @synthesize screenshotImageData=_screenshotImageData;
@property(nonatomic) int reportType; // @synthesize reportType=_reportType;
- (void).cxx_destruct;
- (void)sendReport;
- (id)subscriberIDs;
- (id)tagIDs;
- (id)tagIDForReportType;
- (void)addAttachmentWithString:(id)arg1 filename:(id)arg2;
- (void)addActiveExperimentSettingsAttachments;
- (BOOL)captionTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;
- (void)captionTextViewDidBeginEditing:(id)arg1;
- (void)captionTextViewWillBeginEditing:(id)arg1;
- (void)captionCellMediaOverlayViewTapped;
- (BOOL)captionCellMediaOverlayViewTapEnabled;
- (void)captionTextViewDidChange:(id)arg1;
- (void)onCancelModal;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

