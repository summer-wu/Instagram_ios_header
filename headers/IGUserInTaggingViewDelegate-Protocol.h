//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUsertag;

@protocol IGUserInTaggingViewDelegate <NSObject>
- (void)userInTaggingViewDidFinishTagging;
- (void)userInTaggingViewDidRemoveTag:(IGUsertag *)arg1;
- (void)userInTaggingViewDidMoveTag:(IGUsertag *)arg1;
- (void)userInTaggingViewDidAddTag:(IGUsertag *)arg1;
- (void)userInTaggingViewDidStartTaggingAtPosition:(struct CGPoint)arg1;
@end
