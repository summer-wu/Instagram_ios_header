//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItemActionCell;

@protocol IGFeedItemActionCellDelegate <NSObject>
- (void)feedItemActionCellDidTapSendButton:(IGFeedItemActionCell *)arg1;
- (void)feedItemActionCellDidTapLikeButton:(IGFeedItemActionCell *)arg1;
- (void)feedItemActionCellDidTapCommentButton:(IGFeedItemActionCell *)arg1;
- (void)feedItemActionCellDidTapCustomizableButton:(IGFeedItemActionCell *)arg1;
- (void)feedItemActionCellPageControlDidChangeValue:(IGFeedItemActionCell *)arg1;
- (void)feedItemActionCellDidTapMoreButton:(IGFeedItemActionCell *)arg1;
@end

