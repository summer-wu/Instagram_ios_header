//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFURLConnectionOperation.h"

@class AFHTTPResponseSerializer<AFURLResponseSerialization>, NSHTTPURLResponse;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    AFHTTPResponseSerializer<AFURLResponseSerialization> *_responseSerializer;
}

@property(retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) NSHTTPURLResponse *response;

@end

