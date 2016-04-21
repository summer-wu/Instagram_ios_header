//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOrderedSet, NSString;

@interface IGSearchCacheEntry : NSObject
{
    NSString *_queryString;
    NSDictionary *_additionalParams;
    NSOrderedSet *_suggestions;
    unsigned int _state;
    NSString *_rankToken;
    NSOrderedSet *_localSuggestions;
    NSDictionary *_analyticsInfo;
}

@property(retain, nonatomic) NSDictionary *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(retain, nonatomic) NSOrderedSet *localSuggestions; // @synthesize localSuggestions=_localSuggestions;
@property(copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSOrderedSet *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams=_additionalParams;
@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (BOOL)isEqualToQueryString:(id)arg1 additionalParams:(id)arg2;
- (id)initWithQueryString:(id)arg1 additionalParams:(id)arg2;

@end

