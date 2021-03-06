//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDKDiffable.h"
#import "NSCoding.h"

@class IGDate, IGPost, IGUser, NSString;

@interface IGCommentModel : NSObject <NSCoding, IGDKDiffable>
{
    id <NSObject> _diffIdentifier;
    BOOL _wasMarkedAsSpam;
    BOOL _didReportAsSpam;
    NSString *_pk;
    IGPost *_post;
    IGUser *_user;
    NSString *_text;
    int _type;
    IGDate *_createdAt;
    int _postedState;
    NSString *_idempotenceToken;
    NSString *_failureReason;
}

+ (id)postCommentWithText:(id)arg1 forPost:(id)arg2;
+ (id)moreTruncationTokenString;
+ (id)defaultTruncationTokenString;
@property(copy, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(retain, nonatomic) NSString *idempotenceToken; // @synthesize idempotenceToken=_idempotenceToken;
@property(nonatomic) BOOL didReportAsSpam; // @synthesize didReportAsSpam=_didReportAsSpam;
@property(nonatomic) BOOL wasMarkedAsSpam; // @synthesize wasMarkedAsSpam=_wasMarkedAsSpam;
@property(nonatomic) int postedState; // @synthesize postedState=_postedState;
@property(retain, nonatomic) IGDate *createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) __weak IGPost *post; // @synthesize post=_post;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL canDelete;
- (void)reportInappropriateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportWithReason:(int)arg1;
- (void)onCommentDeleted;
- (id)styledStringForWidth:(float)arg1 feedItem:(id)arg2 shouldCollapseCaption:(BOOL)arg3;
- (void)forceRemoveAndReportWithReason:(int)arg1;
- (void)removeAndReportWithReason:(int)arg1;
- (void)postComment;
- (id)initWithText:(id)arg1 post:(id)arg2 user:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)stringWithCollapsedEmptyLines:(id)arg1;
- (id)buildStyledStringWithNewline:(BOOL)arg1 width:(float)arg2 maximumUntruncatedNumberOfLines:(int)arg3 truncatedToNumberOfLines:(int)arg4 truncationToken:(id)arg5;
- (id)buildStyledStringWithNewline:(BOOL)arg1 width:(float)arg2 numberOfLines:(int)arg3 truncationToken:(id)arg4;
- (id)buildStyledStringWithNewline:(BOOL)arg1;

@end

