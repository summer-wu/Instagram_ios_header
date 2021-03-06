//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"
#import "UITextInputTraits.h"

@class IGButton, IGTextField, NSAttributedString, NSString, UIButton, UIImage;

@interface IGNavSearchBar : UIView <UITextFieldDelegate, UITextInputTraits>
{
    BOOL _editing;
    BOOL _hasCalculatedFrames;
    BOOL _showCancelButton;
    BOOL _showPeopleIcon;
    BOOL _showDirectIcon;
    id <IGNavSearchBarDelegate> _delegate;
    IGTextField *_searchTextField;
    IGButton *_cancelButton;
    UIButton *_backgroundButton;
    UIView *_searchLabelView;
    UIImage *_searchIcon;
    UIImage *_searchIconOn;
    UIButton *_peopleIconButton;
    UIButton *_directIconButton;
    double _searchBarAnimationDuration;
    struct CGRect _backgroundButtonFrameInactive;
    struct CGRect _backgroundButtonFrameActive;
    struct CGRect _cancelButtonFrameInactive;
    struct CGRect _cancelButtonFrameActive;
    struct CGRect _searchTextFieldFrameInactive;
    struct CGRect _searchTextFieldFrameActive;
    struct CGRect _searchLabelViewFrameInactive;
    struct CGRect _searchLabelViewFrameActive;
}

@property(nonatomic) BOOL showDirectIcon; // @synthesize showDirectIcon=_showDirectIcon;
@property(nonatomic) BOOL showPeopleIcon; // @synthesize showPeopleIcon=_showPeopleIcon;
@property(nonatomic) BOOL showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(nonatomic) BOOL hasCalculatedFrames; // @synthesize hasCalculatedFrames=_hasCalculatedFrames;
@property(nonatomic) struct CGRect searchLabelViewFrameActive; // @synthesize searchLabelViewFrameActive=_searchLabelViewFrameActive;
@property(nonatomic) struct CGRect searchLabelViewFrameInactive; // @synthesize searchLabelViewFrameInactive=_searchLabelViewFrameInactive;
@property(nonatomic) struct CGRect searchTextFieldFrameActive; // @synthesize searchTextFieldFrameActive=_searchTextFieldFrameActive;
@property(nonatomic) struct CGRect searchTextFieldFrameInactive; // @synthesize searchTextFieldFrameInactive=_searchTextFieldFrameInactive;
@property(nonatomic) struct CGRect cancelButtonFrameActive; // @synthesize cancelButtonFrameActive=_cancelButtonFrameActive;
@property(nonatomic) struct CGRect cancelButtonFrameInactive; // @synthesize cancelButtonFrameInactive=_cancelButtonFrameInactive;
@property(nonatomic) struct CGRect backgroundButtonFrameActive; // @synthesize backgroundButtonFrameActive=_backgroundButtonFrameActive;
@property(nonatomic) struct CGRect backgroundButtonFrameInactive; // @synthesize backgroundButtonFrameInactive=_backgroundButtonFrameInactive;
@property(retain, nonatomic) UIButton *directIconButton; // @synthesize directIconButton=_directIconButton;
@property(retain, nonatomic) UIButton *peopleIconButton; // @synthesize peopleIconButton=_peopleIconButton;
@property(retain, nonatomic) UIImage *searchIconOn; // @synthesize searchIconOn=_searchIconOn;
@property(retain, nonatomic) UIImage *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) UIView *searchLabelView; // @synthesize searchLabelView=_searchLabelView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) IGButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) IGTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) double searchBarAnimationDuration; // @synthesize searchBarAnimationDuration=_searchBarAnimationDuration;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <IGNavSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) int returnKeyType;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int spellCheckingType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) int autocapitalizationType;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)addSpringAnimations:(CDUnknownBlockType)arg1 duration:(double)arg2 complete:(CDUnknownBlockType)arg3;
- (void)makeInactive:(BOOL)arg1;
- (void)makeActive:(BOOL)arg1;
- (void)calculateAnimationFrames;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)directIconButtonTapped;
- (void)peopleIconButtonTapped;
- (void)cancelButtonTapped;
- (void)searchBarTapped;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholder;
@property(retain, nonatomic) NSString *placeholder;
@property(retain, nonatomic) NSString *text;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showPeopleIcon:(BOOL)arg2 showCancelButton:(BOOL)arg3 showDirectIcon:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(readonly) Class superclass;

@end

