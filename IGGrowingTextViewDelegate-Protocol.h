//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGrowingTextView, NSString;

@protocol IGGrowingTextViewDelegate <NSObject>
- (BOOL)growingTextViewShouldReturn:(IGGrowingTextView *)arg1;
- (void)growingTextView:(IGGrowingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(IGGrowingTextView *)arg1 willChangeHeight:(float)arg2;
- (BOOL)growingTextView:(IGGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)growingTextViewDidChange:(IGGrowingTextView *)arg1;
- (void)growingTextViewDidEndEditing:(IGGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(IGGrowingTextView *)arg1;
@end

