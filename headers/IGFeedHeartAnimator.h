//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGHeartView, UICollectionView;

@interface IGFeedHeartAnimator : NSObject
{
    BOOL _usesLegacyAnimation;
    IGHeartView *_heartImageView;
    id _heartLikeFeedItem;
    UICollectionView *_collectionView;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) BOOL usesLegacyAnimation; // @synthesize usesLegacyAnimation=_usesLegacyAnimation;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id heartLikeFeedItem; // @synthesize heartLikeFeedItem=_heartLikeFeedItem;
@property(readonly, nonatomic) IGHeartView *heartImageView; // @synthesize heartImageView=_heartImageView;
- (void).cxx_destruct;
- (void)updateHeartImageViewLocationToSection:(unsigned int)arg1;
- (void)animateHeartLikeForCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateHeartLikeForItem:(id)arg1 atIndex:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCollectionView:(id)arg1 usesLegacyAnimation:(BOOL)arg2;

@end

