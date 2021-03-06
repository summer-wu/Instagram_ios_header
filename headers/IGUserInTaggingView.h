//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGUsertagViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGMediaOverlayIndicator, IGUsertagView, NSMutableDictionary, NSMutableSet, NSString, UIImageView, UIScrollView;

@interface IGUserInTaggingView : UIView <UIScrollViewDelegate, IGUsertagViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_tagViews;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIView *_tagViewContainer;
    IGMediaOverlayIndicator *_indicator;
    IGUsertagView *_pendingUsertagView;
    BOOL _isAddingTag;
    BOOL _allowTagging;
    id <IGUserInTaggingViewDelegate> _delegate;
    NSMutableSet *_untaggedFaces;
}

@property(retain, nonatomic) NSMutableSet *untaggedFaces; // @synthesize untaggedFaces=_untaggedFaces;
@property(nonatomic) BOOL allowTagging; // @synthesize allowTagging=_allowTagging;
@property(nonatomic) __weak id <IGUserInTaggingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL isAddingTag; // @synthesize isAddingTag=_isAddingTag;
- (void).cxx_destruct;
- (void)fixOverlapsWithViews:(id)arg1;
- (void)tagViewWasRemoved:(id)arg1;
- (void)tagViewDidEndMove:(id)arg1;
- (void)tagViewDidMove:(id)arg1;
- (void)tagViewWillMove:(id)arg1;
- (void)tagViewWasSelected:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideAllTagsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentAllUsertags;
- (void)addTag:(id)arg1 andNotifyDelegate:(BOOL)arg2;
- (void)setUsertags:(id)arg1;
- (void)startTaggingAtPosition:(struct CGPoint)arg1;
- (void)dismissWithUser:(id)arg1;
- (void)onTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setImageView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

