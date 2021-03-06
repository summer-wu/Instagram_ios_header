//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class IGDate, IGUser, NSString;

@interface IGDirectContent : NSObject <NSCoding, NSCopying>
{
    NSString *_clientContextId;
    BOOL _isUploading;
    NSString *_itemId;
    IGUser *_user;
    IGDate *_sentAt;
}

@property(readonly, nonatomic) BOOL isUploading; // @synthesize isUploading=_isUploading;
@property(copy, nonatomic) NSString *clientContextId; // @synthesize clientContextId=_clientContextId;
@property(retain, nonatomic) IGDate *sentAt; // @synthesize sentAt=_sentAt;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)contentHasReactions;
@property(readonly, nonatomic) NSString *contentTypeString;
@property(readonly, copy, nonatomic) NSString *digestDescription;
@property(readonly, nonatomic) BOOL senderIsCurrentUser;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyBySettingItemID:(id)arg1;
- (id)initWithUser:(id)arg1 sentAt:(id)arg2 itemID:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

