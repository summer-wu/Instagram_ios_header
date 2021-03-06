//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGClusterAnnotationView, IGClusterTileView, IGPhotoMapEditManager, IGQuadtreeCluster, QuadtreePoint;

@protocol IGClusterAnnotationViewDelegate <NSObject>
- (IGPhotoMapEditManager *)editManager;
- (BOOL)hasPermanentlyDeletedMedia;
- (BOOL)isInEditMode;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 onDoubleTapFor:(QuadtreePoint *)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 infoButtonTappedFor:(QuadtreePoint *)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 showAllPhotosInCluster:(IGQuadtreeCluster *)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 closeCluster:(BOOL)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 restoreDidFinish:(BOOL)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 fullScreenClosed:(BOOL)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 fullScreenOpened:(BOOL)arg2 withTouchedTile:(IGClusterTileView *)arg3;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 implosionDidFinish:(BOOL)arg2;
- (void)clusterAnnotationView:(IGClusterAnnotationView *)arg1 explosionDidFinish:(BOOL)arg2;
@end

