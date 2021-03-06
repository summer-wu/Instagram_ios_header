//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UITextField, UIView;

@interface IGAlbumTitleViewController : UIViewController <UITextFieldDelegate, UIViewControllerTransitioningDelegate>
{
    id <IGAlbumTitleViewControllerDelegate> _delegate;
    NSString *_albumTitle;
    UITextField *_titleTextField;
    UIView *_showLocationsOverlay;
}

@property(retain, nonatomic) UIView *showLocationsOverlay; // @synthesize showLocationsOverlay=_showLocationsOverlay;
@property(retain, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(nonatomic) __weak id <IGAlbumTitleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tappedView:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)finishedEditing;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithAlbumTitle:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

