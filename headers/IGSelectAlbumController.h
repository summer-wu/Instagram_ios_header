//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ALAssetsLibrary, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, UIActivityIndicatorView, UITableView, UIView;

@interface IGSelectAlbumController : UIViewController <UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver>
{
    BOOL _needsSetPhotoLibraryOptions;
    id <IGSelectAlbumDelegate> _delegate;
    unsigned int _assetFilterType;
    int _selectAlbumAppearanceType;
    float _tableViewViewHeight;
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicator;
    NSObject<OS_dispatch_queue> *_queue;
    PHAssetCollection *_userLibrary;
    PHFetchResult *_unfilteredSmartAlbums;
    PHFetchResult *_smartAlbums;
    PHFetchResult *_albums;
    NSMutableDictionary *_keyImageFetchResults;
    PHCachingImageManager *_imageManager;
    PHImageRequestOptions *_options;
    ALAssetsLibrary *_assetsLibrary;
    NSArray *_assetGroups;
    NSArray *_filteredAssetGroups;
    UIView *_topSeparatorLine;
    struct CGSize _thumbnailSize;
    struct CGRect _previousPreheatRect;
}

+ (id)allAlbumTitle;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(retain, nonatomic) NSArray *filteredAssetGroups; // @synthesize filteredAssetGroups=_filteredAssetGroups;
@property(retain, nonatomic) NSArray *assetGroups; // @synthesize assetGroups=_assetGroups;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(nonatomic) BOOL needsSetPhotoLibraryOptions; // @synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions;
@property(retain, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain) NSMutableDictionary *keyImageFetchResults; // @synthesize keyImageFetchResults=_keyImageFetchResults;
@property(retain, nonatomic) PHFetchResult *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) PHFetchResult *smartAlbums; // @synthesize smartAlbums=_smartAlbums;
@property(retain, nonatomic) PHFetchResult *unfilteredSmartAlbums; // @synthesize unfilteredSmartAlbums=_unfilteredSmartAlbums;
@property(retain, nonatomic) PHAssetCollection *userLibrary; // @synthesize userLibrary=_userLibrary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) float tableViewViewHeight; // @synthesize tableViewViewHeight=_tableViewViewHeight;
@property(readonly, nonatomic) int selectAlbumAppearanceType; // @synthesize selectAlbumAppearanceType=_selectAlbumAppearanceType;
@property(nonatomic) unsigned int assetFilterType; // @synthesize assetFilterType=_assetFilterType;
@property(nonatomic) __weak id <IGSelectAlbumDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageForEmptyAlbum;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)collectionFetchResultAtIndexPath:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (void)viewDidOpen;
- (void)scrollToTop;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateCachedAssets;
- (void)resetCachedAssets;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathsFromIndexes:(id)arg1 section:(int)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setPhotosLibraryOptions;
- (void)filterAssetsGroup:(id)arg1;
- (id)fetchOptions;
- (void)assetsLibraryDidChange:(id)arg1;
- (id)filterALResults:(id)arg1;
- (id)keyImageFetchResultForAssetCollection:(id)arg1;
- (void)enumerateCollections:(CDUnknownBlockType)arg1;
- (id)filterSmartAlbums:(id)arg1;
- (void)configureForAppearanceType:(int)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (id)initWithAppearanceType:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

