//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAlbumCameraViewController, PHAsset;

@protocol IGAlbumCameraViewControllerDelegate <NSObject>
- (void)albumCameraViewController:(IGAlbumCameraViewController *)arg1 didTapDisabledAsset:(PHAsset *)arg2;
- (void)albumCameraViewControllerDidTapRetake:(IGAlbumCameraViewController *)arg1;
- (void)albumCameraViewControllerDidTapCurrentAlbumButton:(IGAlbumCameraViewController *)arg1;
- (void)albumCameraViewControllerDidTapAddPeople:(IGAlbumCameraViewController *)arg1;
- (void)albumCameraViewControllerDidTapTitle:(IGAlbumCameraViewController *)arg1;
- (void)albumCameraViewController:(IGAlbumCameraViewController *)arg1 didPickAsset:(id <IGQuickCamOutputAsset>)arg2;
- (void)albumCameraViewControllerDidDismiss:(IGAlbumCameraViewController *)arg1;
- (void)albumCameraViewController:(IGAlbumCameraViewController *)arg1 didEnterState:(int)arg2;
@end

