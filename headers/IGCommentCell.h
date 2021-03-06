//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCellSwipeActionManagerDelegate.h"

@class CALayer, IGCellSwipeActionManager, IGCommentContentView, NSString, UIButton, UIView;

@interface IGCommentCell : UICollectionViewCell <IGCellSwipeActionManagerDelegate>
{
    BOOL _isShowingEditActions;
    BOOL _showActions;
    IGCommentContentView *_commentView;
    id <IGCommentCellDelegate> _delegate;
    id <IGCommentCellInteractionDelegate> _interactionDelegate;
    UIView *_separatorView;
    UIButton *_replyButton;
    UIButton *_deleteButton;
    UIButton *_reportButton;
    CALayer *_reportButtonSeparatorLayer;
    IGCellSwipeActionManager *_cellSwipeActionManager;
    float _beginningX;
    int _maxActionBarWidth;
}

@property(nonatomic) int maxActionBarWidth; // @synthesize maxActionBarWidth=_maxActionBarWidth;
@property(nonatomic) BOOL showActions; // @synthesize showActions=_showActions;
@property(nonatomic) float beginningX; // @synthesize beginningX=_beginningX;
@property(retain, nonatomic) IGCellSwipeActionManager *cellSwipeActionManager; // @synthesize cellSwipeActionManager=_cellSwipeActionManager;
@property(readonly, nonatomic) CALayer *reportButtonSeparatorLayer; // @synthesize reportButtonSeparatorLayer=_reportButtonSeparatorLayer;
@property(readonly, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak id <IGCommentCellInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) __weak id <IGCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL isShowingEditActions; // @synthesize isShowingEditActions=_isShowingEditActions;
@property(readonly, nonatomic) IGCommentContentView *commentView; // @synthesize commentView=_commentView;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (BOOL)isAccessibilityElement;
- (int)accessibilityElementCount;
- (void)cellSwipeActionManagerDidStartPanGestureRecognition:(id)arg1;
- (void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2;
- (BOOL)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2;
- (void)toggleActions;
- (void)peekActions;
- (void)showActions:(BOOL)arg1 duration:(float)arg2;
- (void)showActions:(BOOL)arg1 animated:(BOOL)arg2;
- (void)deleteButtonTapped:(id)arg1;
- (void)reportButtonTapped:(id)arg1;
- (void)replyButtonTapped:(id)arg1;
- (void)setActionButtons:(int)arg1;
- (void)setupDeleteButton;
- (void)setupReplyButton;
- (void)setupReportButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

