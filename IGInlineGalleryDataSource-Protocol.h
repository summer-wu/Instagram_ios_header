//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IGGridViewCell, IGMediaMetadata, NSIndexPath, NSString;

@protocol IGInlineGalleryDataSource
@property(nonatomic) __weak id <IGInlineGalleryDataSourceDelegate> delegate;
- (NSString *)errorMessageIfInvalidAssetAtIndexPath:(NSIndexPath *)arg1;
- (IGMediaMetadata *)metadataForAssetAtIndexPath:(NSIndexPath *)arg1;
- (void)decorateGridCell:(IGGridViewCell *)arg1 forAssetAtIndexPath:(NSIndexPath *)arg2;
- (int)numberOfItems;
- (int)numMediaSince:(double)arg1;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (BOOL)hasCameraRollAccess;
- (void)pauseDataFetch;
- (void)startDataFetchWithCompletion:(void (^)(void))arg1;
@end

