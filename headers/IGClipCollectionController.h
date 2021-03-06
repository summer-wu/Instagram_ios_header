//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LXReorderableCollectionViewDataSource.h"
#import "LXReorderableCollectionViewDelegateFlowLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGClipTrayView, IGVideoClip, IGVideoComposition, NSString;

@interface IGClipCollectionController : NSObject <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _scrollingToClip;
    IGClipTrayView *_view;
    IGVideoClip *_selectedClip;
    id <IGClipCollectionControllerDelegate> _delegate;
    IGClipTrayView *_clipTrayView;
    IGVideoComposition *_videoComposition;
}

@property(nonatomic) BOOL scrollingToClip; // @synthesize scrollingToClip=_scrollingToClip;
@property(retain, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) IGClipTrayView *clipTrayView; // @synthesize clipTrayView=_clipTrayView;
@property(nonatomic) __weak id <IGClipCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGVideoClip *selectedClip; // @synthesize selectedClip=_selectedClip;
@property(readonly, nonatomic) IGClipTrayView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(struct CGPoint)arg3;
- (BOOL)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 wasRemovedAtPoint:(struct CGPoint)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadClipAtIndex:(unsigned int)arg1;
- (void)reloadCollectionWithVideoComposition:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

