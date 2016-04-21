//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface IGAnalyticsSearchRankInfo : NSObject
{
    NSString *_searchType;
    NSString *_searchQueryText;
    NSString *_viewSubType;
    NSString *_rankToken;
    NSNumber *_itemRankResponseOffset;
    NSNumber *_itemRankDisplayOffset;
    NSNumber *_rankDisplayRowSize;
    NSNumber *_rankDisplayColumnSize;
    NSString *_sectionType;
    NSString *_searchSessionId;
    NSString *_entityId;
    NSString *_searchImpressionToken;
}

@property(copy, nonatomic) NSString *searchImpressionToken; // @synthesize searchImpressionToken=_searchImpressionToken;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSNumber *rankDisplayColumnSize; // @synthesize rankDisplayColumnSize=_rankDisplayColumnSize;
@property(retain, nonatomic) NSNumber *rankDisplayRowSize; // @synthesize rankDisplayRowSize=_rankDisplayRowSize;
@property(retain, nonatomic) NSNumber *itemRankDisplayOffset; // @synthesize itemRankDisplayOffset=_itemRankDisplayOffset;
@property(retain, nonatomic) NSNumber *itemRankResponseOffset; // @synthesize itemRankResponseOffset=_itemRankResponseOffset;
@property(copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(copy, nonatomic) NSString *viewSubType; // @synthesize viewSubType=_viewSubType;
@property(copy, nonatomic) NSString *searchQueryText; // @synthesize searchQueryText=_searchQueryText;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;

@end

