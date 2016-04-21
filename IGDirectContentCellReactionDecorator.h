//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectContentCellDecorator.h"
#import "UIGestureRecognizerDelegate.h"

@class IGDirectContent<IGDirectContentReactable>, IGDirectContentCell, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface IGDirectContentCellReactionDecorator : NSObject <UIGestureRecognizerDelegate, IGDirectContentCellDecorator>
{
    id <IGDirectReactionDecoratorDelegate> _reactionDelegate;
    IGDirectContentCell *_cell;
    IGDirectContent<IGDirectContentReactable> *_reactableContent;
    UIView *_likesContainerView;
    UIImageView *_heartImageView;
    UIImage *_heartImage;
    UILabel *_likedThisLabel;
    UIView *_remainderBubbleView;
    UITapGestureRecognizer *_cellDoubleTapRecognizer;
    UILabel *_nuxLabel;
    UIImageView *_emptyHeartImage;
}

@property(retain, nonatomic) UIImageView *emptyHeartImage; // @synthesize emptyHeartImage=_emptyHeartImage;
@property(retain, nonatomic) UILabel *nuxLabel; // @synthesize nuxLabel=_nuxLabel;
@property(retain, nonatomic) UITapGestureRecognizer *cellDoubleTapRecognizer; // @synthesize cellDoubleTapRecognizer=_cellDoubleTapRecognizer;
@property(retain, nonatomic) UIView *remainderBubbleView; // @synthesize remainderBubbleView=_remainderBubbleView;
@property(retain, nonatomic) UILabel *likedThisLabel; // @synthesize likedThisLabel=_likedThisLabel;
@property(retain, nonatomic) UIImage *heartImage; // @synthesize heartImage=_heartImage;
@property(retain, nonatomic) UIImageView *heartImageView; // @synthesize heartImageView=_heartImageView;
@property(retain, nonatomic) UIView *likesContainerView; // @synthesize likesContainerView=_likesContainerView;
@property(retain, nonatomic) IGDirectContent<IGDirectContentReactable> *reactableContent; // @synthesize reactableContent=_reactableContent;
@property(nonatomic) __weak IGDirectContentCell *cell; // @synthesize cell=_cell;
@property(nonatomic) __weak id <IGDirectReactionDecoratorDelegate> reactionDelegate; // @synthesize reactionDelegate=_reactionDelegate;
- (void).cxx_destruct;
- (id)nuxEmptyHeartImage;
- (id)nuxLabelForOtherContent;
- (id)nuxLabelForReshare;
- (void)layoutNux;
- (id)labelForString:(id)arg1;
- (struct CGPoint)originForFrameOfWidth:(float)arg1 inCell:(id)arg2;
- (struct CGRect)viewFrameForProfilePicturesForCell:(id)arg1;
- (float)fullWidthForReactionCount:(unsigned int)arg1;
- (float)cellBottomOffset;
- (BOOL)alreadyLikedContent;
- (void)receiveDoubleTap;
- (void)setContent:(id)arg1;
- (struct CGSize)scaledHeartSize;
- (void)prepareForReuse;
- (id)remainderLabelForCount:(unsigned int)arg1;
- (void)detachGestureRecognizers;
- (void)attachGestureRecognizers;
- (unsigned int)maxReactionCountForWidth:(float)arg1;
- (void)layoutHeartsAndPicturesWithAnimation:(BOOL)arg1;
- (void)layoutHeartsAndPicturesWithAnimation;
- (void)layoutSubviews;
- (void)flashLikedMessage;
- (void)finishLayout;
- (void)removeSubviewsFromCell;
- (void)addSubviewsToCell;
- (void)dealloc;
- (id)initWithCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

