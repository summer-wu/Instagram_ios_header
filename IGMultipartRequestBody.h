//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMultipartComponent, NSMutableArray, NSString;

@interface IGMultipartRequestBody : NSObject
{
    IGMultipartComponent *_boundaryComponent;
    IGMultipartComponent *_terminalComponent;
    NSMutableArray *_components;
    NSString *_contentType;
}

@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)inputStream;
@property(readonly, nonatomic) unsigned int contentLength;
- (id)initWithRequestParameters:(id)arg1 files:(id)arg2;

@end

