//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchBarDelegate.h"

@class IGKVOHandle, IGSearchBar, IGViewController, NSDate, NSString, UIView;

@interface IGSearchController : NSObject <IGSearchBarDelegate>
{
    BOOL _isActive;
    id <IGSearchControllerDelegate> _delegate;
    NSDate *_lastSearch;
    IGViewController *_contentsController;
    UIView *_searchBarSuperview;
    float _originalSearchBarY;
    float _originalContainingScrollViewY;
    IGSearchBar *_searchBar;
    IGKVOHandle *_contentOffsetObserver;
    struct CGPoint _originalContainingScrollViewContentOffset;
}

+ (int)preferredStatusBarStyle;
@property(retain, nonatomic) IGKVOHandle *contentOffsetObserver; // @synthesize contentOffsetObserver=_contentOffsetObserver;
@property(retain, nonatomic) IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) struct CGPoint originalContainingScrollViewContentOffset; // @synthesize originalContainingScrollViewContentOffset=_originalContainingScrollViewContentOffset;
@property(nonatomic) float originalContainingScrollViewY; // @synthesize originalContainingScrollViewY=_originalContainingScrollViewY;
@property(nonatomic) float originalSearchBarY; // @synthesize originalSearchBarY=_originalSearchBarY;
@property(retain, nonatomic) UIView *searchBarSuperview; // @synthesize searchBarSuperview=_searchBarSuperview;
@property(retain, nonatomic) IGViewController *contentsController; // @synthesize contentsController=_contentsController;
@property(retain, nonatomic) NSDate *lastSearch; // @synthesize lastSearch=_lastSearch;
@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <IGSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

