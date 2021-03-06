//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "FBKeyboardObserverDelegate.h"
#import "IGDirectShareManagerDataSource.h"
#import "IGTokenFieldDelegate.h"

@class FBKeyboardObserver, IGDirectShareManager, IGDirectThread, IGTokenField, NSString, UIBarButtonItem;

@interface IGDirectAddPeopleViewController : IGViewController <IGDirectShareManagerDataSource, IGTokenFieldDelegate, FBKeyboardObserverDelegate>
{
    IGDirectThread *_thread;
    IGTokenField *_tokenField;
    IGDirectShareManager *_shareManager;
    FBKeyboardObserver *_keyboardObserver;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) FBKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(retain, nonatomic) IGDirectShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) IGTokenField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) IGDirectThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)manager:(id)arg1 triedToAddFilteredUser:(id)arg2;
- (BOOL)manager:(id)arg1 wantsToSelectUser:(id)arg2;
- (id)currentQueryForManager:(id)arg1;
- (id)recipientsForManager:(id)arg1;
- (void)tokenFieldWillBeginEditing:(id)arg1;
- (void)tokenField:(id)arg1 didDeleteToken:(id)arg2;
- (void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
- (void)tokenFieldDidRequestSearch:(id)arg1;
- (BOOL)tokenFieldCanFinishEditing:(id)arg1;
- (void)tokenFieldDidBeginEditing:(id)arg1;
- (void)tokenFieldWillFocusUser:(id)arg1;
- (id)tokenFieldViewForTokenOverlay:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)updateDoneButtonState;
- (void)addUsers:(id)arg1;
- (void)doneTapped;
- (struct UIEdgeInsets)contentInsetsForManager:(id)arg1;
- (void)viewDidLoad;
- (id)initWithThread:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

