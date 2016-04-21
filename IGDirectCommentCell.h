//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

#import "IGCoreTextLinkHandler.h"
#import "IGDirectContentUploadCell.h"

@class IGCoreTextView, IGDirectContentCellUploadDecorator, NSString;

@interface IGDirectCommentCell : IGDirectContentCell <IGCoreTextLinkHandler, IGDirectContentUploadCell>
{
    IGDirectContentCellUploadDecorator *_uploadDecorator;
    id <IGDirectContentUpoadCellDelegate> _delegate;
    IGCoreTextView *_commentTextView;
}

+ (float)commentWidthForFrameWidth:(float)arg1;
+ (id)emojiCommentStyle;
+ (id)commentStyle;
+ (BOOL)handlesExternalURLs;
+ (float)heightForCellWithCommentText:(id)arg1 forWidth:(float)arg2;
@property(retain, nonatomic) IGCoreTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(nonatomic) __weak id <IGDirectContentUpoadCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGDirectContentCellUploadDecorator *uploadDecorator; // @synthesize uploadDecorator=_uploadDecorator;
- (void).cxx_destruct;
- (void)setCellDecorator:(id)arg1;
- (id)cellDecorator;
- (void)showUploadSendingUI;
- (void)showUploadFailedUI;
- (void)performDelete;
- (void)performRetry;
- (void)handleUploadCellTap;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)timestampText;
- (void)prepareForReuse;
- (void)setContent:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)tapTargetFrame;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

