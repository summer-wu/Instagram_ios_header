//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGAnalyticsSearchRankInfo, NSString;

@interface IGNavEvent : NSObject <NSCopying>
{
    NSString *_moduleName;
    IGAnalyticsSearchRankInfo *_searchRankInfo;
}

@property(readonly, copy, nonatomic) IGAnalyticsSearchRankInfo *searchRankInfo; // @synthesize searchRankInfo=_searchRankInfo;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModuleName:(id)arg1 searchRankInfo:(id)arg2;

@end

