//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITextView;

@protocol IGCaptionCellDelegate <NSObject>
- (BOOL)captionTextView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)captionTextViewDidEndEditing:(UITextView *)arg1 text:(NSString *)arg2;
- (void)captionTextViewDidBeginEditing:(UITextView *)arg1;
- (void)captionTextViewWillBeginEditing:(UITextView *)arg1;
- (void)captionTextViewDidChange:(UITextView *)arg1;
- (void)captionCellMediaOverlayViewTapped;
- (BOOL)captionCellMediaOverlayViewTapEnabled;
@end

