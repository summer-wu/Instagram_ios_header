//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAlbumCreationViewController, NSString;

@protocol IGAlbumCreationViewControllerDataDelegate <NSObject>
- (void)creationViewController:(IGAlbumCreationViewController *)arg1 didUpdateTitle:(NSString *)arg2;
- (void)creationViewController:(IGAlbumCreationViewController *)arg1 didPickAsset:(id <IGQuickCamOutputAsset>)arg2;
@end
