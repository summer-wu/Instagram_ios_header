//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentCell;

@protocol IGCommentCellInteractionDelegate <NSObject>
- (void)didTapReplyForCommentCell:(IGCommentCell *)arg1;
- (void)didTapReportForCommentCell:(IGCommentCell *)arg1;
- (void)didTapDeleteForCommentCell:(IGCommentCell *)arg1;
@end

