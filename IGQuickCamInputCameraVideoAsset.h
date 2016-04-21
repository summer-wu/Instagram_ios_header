//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamInputAsset.h"
#import "IGQuickCamInputVideoAsset.h"

@class IGVideoInfo, NSString;

@interface IGQuickCamInputCameraVideoAsset : NSObject <IGQuickCamInputAsset, IGQuickCamInputVideoAsset>
{
    int _devicePosition;
    IGVideoInfo *_videoInfo;
}

@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) int devicePosition; // @synthesize devicePosition=_devicePosition;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFromLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

