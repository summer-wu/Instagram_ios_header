//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGPublicThreadViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGTapButton, NSArray, NSIndexPath, NSString, UICollectionView, UILabel;

@interface IGPublicThreadInboxViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGPublicThreadViewControllerDelegate>
{
    BOOL _showAll;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    IGTapButton *_showHideButton;
    NSArray *_threads;
    NSIndexPath *_selectedPublicThreadIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedPublicThreadIndexPath; // @synthesize selectedPublicThreadIndexPath=_selectedPublicThreadIndexPath;
@property(nonatomic) BOOL showAll; // @synthesize showAll=_showAll;
@property(retain, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) IGTapButton *showHideButton; // @synthesize showHideButton=_showHideButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)analyticsModule;
- (id)createTitleLabel;
- (id)createShowHideButton;
- (id)createCollectionViewLayout;
- (id)createCollectionView;
- (void)onShowHideButtonTapped;
- (void)updateThreads;
- (void)setupView;
- (void)pushToThread:(id)arg1 animated:(BOOL)arg2;
- (void)publicThreadViewControllerDidScrollToNextThread:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)threadAtNextIndexPath:(id)arg1;
- (id)threadAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateCollectionViewFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
