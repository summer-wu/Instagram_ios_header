//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGFeedItemActionCellFactory : NSObject
{
}

+ (void)updateButtonForFeedItemActionCell:(id)arg1 postItem:(id)arg2;
+ (struct CGSize)actionCellSizeForFeedItem:(id)arg1 configuration:(id)arg2 containerWidth:(float)arg3;
+ (void)configureCell:(id)arg1 forFeedItem:(id)arg2 pageCellState:(id)arg3 feedConfiguration:(id)arg4 cellDelegate:(id)arg5 loggingDelegate:(id)arg6;
+ (id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2;
+ (void)registerCellWithCollectionView:(id)arg1;

@end

