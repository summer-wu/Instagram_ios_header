//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IGDirectShareRecipient, NSHashTable, NSString;

@interface IGDirectContentUploadInfo : NSObject <NSCoding>
{
    BOOL _isViaRealtime;
    IGDirectShareRecipient *_recipient;
    NSString *_threadID;
    NSString *_uploadIndexKey;
    int _uploadStatus;
    float _uploadProgress;
    unsigned int _autoRetryCount;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned int autoRetryCount; // @synthesize autoRetryCount=_autoRetryCount;
@property(nonatomic) BOOL isViaRealtime; // @synthesize isViaRealtime=_isViaRealtime;
@property(nonatomic) float uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(copy, nonatomic) NSString *uploadIndexKey; // @synthesize uploadIndexKey=_uploadIndexKey;
@property(retain, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(retain, nonatomic) IGDirectShareRecipient *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (id)description;
- (id)stringForUploadStatus:(int)arg1;
- (void)removeUploadObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *digestDescription;
- (id)initWithRecipient:(id)arg1;

@end

