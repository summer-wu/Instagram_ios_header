//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectCommentable.h"
#import "IGDirectContentReactable.h"
#import "IGDirectContentUploadable.h"

@class IGDirectContentUploadInfo, NSArray, NSString;

@interface IGDirectShareHashtag : IGDirectContent <IGDirectContentUploadable, IGDirectCommentable, IGDirectContentReactable>
{
    BOOL _reactionsNeedsReRender;
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_uploadComment;
    NSArray *_reactions;
    unsigned int _likeCount;
    unsigned int _lastReactionType;
    NSString *_hashtagName;
    unsigned int _mediaCount;
    NSArray *_previewMedia;
}

@property(retain, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(nonatomic) unsigned int mediaCount; // @synthesize mediaCount=_mediaCount;
@property(copy, nonatomic) NSString *hashtagName; // @synthesize hashtagName=_hashtagName;
@property(nonatomic) unsigned int lastReactionType; // @synthesize lastReactionType=_lastReactionType;
@property(nonatomic) BOOL reactionsNeedsReRender; // @synthesize reactionsNeedsReRender=_reactionsNeedsReRender;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(retain, nonatomic) NSString *uploadComment; // @synthesize uploadComment=_uploadComment;
@property(retain, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyOfContentWithReactionFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)digestDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initAsUploadWithComment:(id)arg1 hashtagName:(id)arg2 recipient:(id)arg3;
- (BOOL)isUploading;
- (id)contentTypeString;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

