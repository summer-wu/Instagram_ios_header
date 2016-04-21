//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface FBKeyboardObserver : NSObject
{
    _Bool _observingKeyboardNotifications;
    BOOL _keyboardAppearing;
    BOOL _keyboardDisappearing;
    BOOL _keyboardAnimating;
    BOOL _keyboardVisible;
    id <FBKeyboardObserverDelegate> _delegate;
    UIView *_owner;
}

@property(readonly, nonatomic) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(readonly, nonatomic) BOOL keyboardAnimating; // @synthesize keyboardAnimating=_keyboardAnimating;
@property(readonly, nonatomic) BOOL keyboardDisappearing; // @synthesize keyboardDisappearing=_keyboardDisappearing;
@property(readonly, nonatomic) BOOL keyboardAppearing; // @synthesize keyboardAppearing=_keyboardAppearing;
@property(nonatomic) __weak UIView *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id <FBKeyboardObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_keyboardFrameDidChange:(id)arg1;
- (void)_keyboardFrameWillChange:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_resetKeyboardState;
- (void)stopObservingKeyboardNotifications;
- (void)startObservingKeyboardNotifications;
- (void)dealloc;

@end
