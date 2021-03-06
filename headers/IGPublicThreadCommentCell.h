//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPublicThreadContentCell.h"

#import "IGCoreTextLinkHandler.h"
#import "IGDirectContentUploadCell.h"

@class IGCoreTextView, IGDirectContentCellUploadDecorator, NSString;

@interface IGPublicThreadCommentCell : IGPublicThreadContentCell <IGCoreTextLinkHandler, IGDirectContentUploadCell>
{
    id <IGDirectContentUpoadCellDelegate> _delegate;
    IGDirectContentCellUploadDecorator *_uploadDecorator;
    IGCoreTextView *_commentTextView;
}

+ (float)commentWidthForFrameWidth:(float)arg1;
+ (id)emojiCommentStyle;
+ (id)commentStyle;
+ (BOOL)handlesExternalURLs;
+ (float)bottomPadding:(BOOL)arg1;
+ (float)topPadding:(BOOL)arg1;
+ (BOOL)shouldAddTopSeparatorLineWithCurrentContent:(id)arg1 prevContent:(id)arg2;
+ (float)heightForCellWithCommentText:(id)arg1 forWidth:(float)arg2;
@property(retain, nonatomic) IGCoreTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) IGDirectContentCellUploadDecorator *uploadDecorator; // @synthesize uploadDecorator=_uploadDecorator;
@property(nonatomic) __weak id <IGDirectContentUpoadCellDelegate> delegate; // @synthesize delegate=_delegate;
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
- (struct CGRect)tapTargetFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

