//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentContentView, IGUser, NSString, NSURL;

@protocol IGCommentContentViewDelegate <NSObject>
- (void)contentView:(IGCommentContentView *)arg1 didLongTapUser:(IGUser *)arg2;
- (void)contentView:(IGCommentContentView *)arg1 didTapUser:(IGUser *)arg2;
- (void)contentView:(IGCommentContentView *)arg1 didTapText:(NSString *)arg2 withURL:(NSURL *)arg3;
@end

