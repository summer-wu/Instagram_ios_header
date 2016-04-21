//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface IGExploreMainFeedLogger : NSObject
{
    NSString *_module;
    NSMutableSet *_loggedImpressions;
}

@property(readonly, nonatomic) NSMutableSet *loggedImpressions; // @synthesize loggedImpressions=_loggedImpressions;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (id)stringForPosition:(CDStruct_c0454aff)arg1;
- (void)logMarauderClickForChannel:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logMarauderClickForMedia:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logMarauderImpressionForChannel:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logMarauderImpressionForMedia:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logClickForChannel:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logClickForMedia:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logImpressionForChannel:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logImpressionForMedia:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logClickForItem:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (void)logImpressionForItem:(id)arg1 position:(CDStruct_c0454aff)arg2;
- (id)initWithModule:(id)arg1;

@end

