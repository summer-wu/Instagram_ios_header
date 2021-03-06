//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, IGVideoMetadata, NSObject<OS_dispatch_queue>, NSURL;

@interface IGVideoWriter : NSObject
{
    BOOL _videoWritingIsFinished;
    BOOL _audioWritingIsFinished;
    id <IGVideoWriterDelegate> _delegate;
    float _progress;
    IGVideoMetadata *_videoMetadata;
    NSURL *_outputFileURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_bufferAdaptor;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
    struct CGSize _size;
    CDStruct_1b6d18a9 _videoDuration;
}

@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) BOOL audioWritingIsFinished; // @synthesize audioWritingIsFinished=_audioWritingIsFinished;
@property(nonatomic) BOOL videoWritingIsFinished; // @synthesize videoWritingIsFinished=_videoWritingIsFinished;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *bufferAdaptor; // @synthesize bufferAdaptor=_bufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(retain, nonatomic) IGVideoMetadata *videoMetadata; // @synthesize videoMetadata=_videoMetadata;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <IGVideoWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startWriting;
- (id)initWithSize:(struct CGSize)arg1 videoMetadata:(id)arg2;

@end

