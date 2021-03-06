//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectCommentable.h"
#import "IGDirectContentFirstAppearance.h"
#import "IGDirectContentMediaUploadable.h"
#import "IGDirectContentReactable.h"
#import "IGDirectMediaContent.h"
#import "IGImageURLProvider.h"
#import "NSCoding.h"

@class IGDirectContentUploadInfo, IGDirectItemIdBasedImageURLProcessor, IGPhoto, IGUploadModel, IGVideo, NSArray, NSData, NSString, NSURL, NSValue;

@interface IGDirectVideo : IGDirectContent <IGDirectCommentable, IGDirectContentFirstAppearance, IGDirectContentMediaUploadable, IGDirectContentReactable, IGDirectMediaContent, IGImageURLProvider, NSCoding>
{
    BOOL _isFirstAppearance;
    BOOL _reactionsNeedsReRender;
    BOOL _useMainCameraUploadFlow;
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_uploadComment;
    IGUploadModel *_uploadModel;
    NSData *_imageData;
    NSArray *_reactions;
    unsigned int _likeCount;
    unsigned int _lastReactionType;
    IGDirectItemIdBasedImageURLProcessor *_previewImageURLProcessor;
    IGVideo *_video;
    NSData *_videoData;
    NSData *_renderedVideoData;
    NSValue *_renderedVideoSizeValue;
    NSString *_videoResult;
    int _numberOfFailedUploads;
    IGPhoto *_photo;
    struct CGSize _aspectRatio;
    struct CGRect _cropRect;
}

@property(nonatomic) BOOL useMainCameraUploadFlow; // @synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow;
@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
@property(nonatomic) int numberOfFailedUploads; // @synthesize numberOfFailedUploads=_numberOfFailedUploads;
@property(readonly, copy, nonatomic) NSString *videoResult; // @synthesize videoResult=_videoResult;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) NSValue *renderedVideoSizeValue; // @synthesize renderedVideoSizeValue=_renderedVideoSizeValue;
@property(retain, nonatomic) NSData *renderedVideoData; // @synthesize renderedVideoData=_renderedVideoData;
@property(retain, nonatomic) NSData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(nonatomic) unsigned int lastReactionType; // @synthesize lastReactionType=_lastReactionType;
@property(nonatomic) BOOL reactionsNeedsReRender; // @synthesize reactionsNeedsReRender=_reactionsNeedsReRender;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(nonatomic) BOOL isFirstAppearance; // @synthesize isFirstAppearance=_isFirstAppearance;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) IGUploadModel *uploadModel; // @synthesize uploadModel=_uploadModel;
@property(retain, nonatomic) NSString *uploadComment; // @synthesize uploadComment=_uploadComment;
@property(retain, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
- (void).cxx_destruct;
- (id)thumbnailURLForAspectFillSize:(struct CGSize)arg1 option:(int)arg2;
- (id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2;
- (id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3;
- (id)imageURLForWidth:(float)arg1 option:(int)arg2;
- (id)imageURLForWidth:(float)arg1;
@property(readonly, nonatomic) IGDirectItemIdBasedImageURLProcessor *previewImageURLProcessor; // @synthesize previewImageURLProcessor=_previewImageURLProcessor;
- (id)copyOfContentWithReactionFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)digestDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSURL *cacheKeyURL;
- (BOOL)isUploading;
- (id)contentTypeString;
- (id)initAsUploadWithComment:(id)arg1 recipient:(id)arg2 aspectRatio:(struct CGSize)arg3 useMainCameraUploadFlow:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

