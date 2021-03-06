//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectKeyboardTextViewController, NSString, UITextView;

@protocol IGDirectKeyboardTextViewControllerDelegate <NSObject>
- (void)keyboardTextViewControllerDidTapCameraBackButton:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidDismissCamera:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidTapLike:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewControllerDidTapCamera:(IGDirectKeyboardTextViewController *)arg1;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 didTapSendWithText:(NSString *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 didChangeContentHeightToHeight:(float)arg2;

@optional
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 showSelectAlbumController:(BOOL)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 didObserveKeyboardFrameChangingToFrame:(struct CGRect)arg2;
- (BOOL)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewDidChange:(UITextView *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewDidEndEditing:(UITextView *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewDidBeginEditing:(UITextView *)arg2;
- (void)keyboardTextViewController:(IGDirectKeyboardTextViewController *)arg1 textViewWillBeginEditing:(UITextView *)arg2;
@end

