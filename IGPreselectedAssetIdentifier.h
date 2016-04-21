//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface IGPreselectedAssetIdentifier : NSObject
{
    NSURL *_assetURL;
    NSString *_localIdentifier;
    NSString *_filePathOnDisk;
    int _assetType;
}

+ (id)preselectedIdentifierWithFilePathOnDisk:(id)arg1 assetType:(int)arg2;
+ (id)preselectedIdentifierWithAssetIdentifier:(id)arg1 assetType:(int)arg2;
@property(readonly, nonatomic) int assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSString *filePathOnDisk; // @synthesize filePathOnDisk=_filePathOnDisk;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (id)initWithAssetURL:(id)arg1 localIdentifier:(id)arg2 filePathOnDisk:(id)arg3 assetType:(int)arg4;

@end

