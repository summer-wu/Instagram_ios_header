//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItemHeader;

@protocol IGFeedItemHeaderDelegate <NSObject>
- (void)feedItemHeaderDidTapOnMoreButton:(IGFeedItemHeader *)arg1;
- (void)feedItemHeaderDidTapFollowButton:(IGFeedItemHeader *)arg1;
- (void)feedItemHeaderDidTapCustomizableButton:(IGFeedItemHeader *)arg1;
- (void)feedItemHeaderDidTapAddLocation:(IGFeedItemHeader *)arg1;
- (void)feedItemHeaderDidTapLocation:(IGFeedItemHeader *)arg1;
- (void)feedItemHeaderDidTapUser:(IGFeedItemHeader *)arg1;
@end
