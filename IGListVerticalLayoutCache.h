//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSMutableDictionary, NSSet;

@interface IGListVerticalLayoutCache : NSObject
{
    NSSet *_lastKnownAttributesInRect;
    NSMutableDictionary *_itemAttributesCache;
    NSMutableDictionary *_headerAttributesCache;
    struct CGSize _lastKnownContentSize;
}

@property(readonly, nonatomic) NSMutableDictionary *headerAttributesCache; // @synthesize headerAttributesCache=_headerAttributesCache;
@property(readonly, nonatomic) NSMutableDictionary *itemAttributesCache; // @synthesize itemAttributesCache=_itemAttributesCache;
@property(nonatomic) struct CGSize lastKnownContentSize; // @synthesize lastKnownContentSize=_lastKnownContentSize;
@property(copy, nonatomic) NSSet *lastKnownAttributesInRect; // @synthesize lastKnownAttributesInRect=_lastKnownAttributesInRect;
- (void).cxx_destruct;
- (id)sortedAttribuesFromCachedAttributes:(id)arg1;
- (void)removeAttributesInSection:(unsigned int)arg1 numberOfItems:(int)arg2;
- (void)removeItemAttributesAtIndexPath:(id)arg1;
- (void)removeHeaderAttributesAtIndexPath:(id)arg1;
- (void)removeAttributes:(id)arg1;
- (void)saveAttributes:(id)arg1;
- (id)itemAttributesAtIndexPath:(id)arg1;
- (id)headerAttributesAtIndexPath:(id)arg1;
- (void)clearEstimatedData;
- (void)clearAllData;
- (id)description;
@property(readonly, nonatomic) NSIndexSet *lastKnownVisibleSections;
@property(readonly, nonatomic) unsigned int itemCount;
@property(readonly, nonatomic) unsigned int headerCount;
- (id)init;

@end

