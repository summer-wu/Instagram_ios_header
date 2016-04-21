//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectContentRealtimeUploadable.h"

@class IGDirectContentUploadInfo, NSString;

@interface IGDirectComment : IGDirectContent <IGDirectContentRealtimeUploadable>
{
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)dictionaryForRealtimeUpload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)digestDescription;
- (id)initAsUploadWithText:(id)arg1 recipient:(id)arg2;
- (BOOL)isUploading;
- (id)contentTypeString;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

