//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGInsightsQuery, NSArray;

@interface IGInsightsFilterUnit : NSObject
{
    IGInsightsQuery *_activeQuery;
    NSArray *_mediaTypeUnits;
}

@property(readonly, copy, nonatomic) NSArray *mediaTypeUnits; // @synthesize mediaTypeUnits=_mediaTypeUnits;
@property(readonly, nonatomic) IGInsightsQuery *activeQuery; // @synthesize activeQuery=_activeQuery;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

