//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPhotoMapEditManager, IGQuadtree;

@protocol IGPhotoMapEditManagerDelegate <NSObject>
- (void)photoMapEditManager:(IGPhotoMapEditManager *)arg1 onDeleteRequestStarted:(int)arg2;
- (void)photoMapEditManager:(IGPhotoMapEditManager *)arg1 onDeleteRequestFailed:(BOOL)arg2;
- (void)photoMapEditManager:(IGPhotoMapEditManager *)arg1 onDeleteRequestFinished:(IGQuadtree *)arg2;
@end

