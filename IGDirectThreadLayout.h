//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

#import "NSCopying.h"

@class IGDirectContent, IGDirectThreadLayoutInvalidationContext, NSArray, NSCache, NSDictionary, NSIndexPath;

@interface IGDirectThreadLayout : UICollectionViewLayout <NSCopying>
{
    BOOL _isSeenStampExpanded;
    NSArray *_allContent;
    NSIndexPath *_currentlyExpandedIndexPath;
    NSArray *_seenUsers;
    IGDirectThreadLayoutInvalidationContext *_igInvalidationContext;
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
    NSDictionary *_footerAttributes;
    IGDirectContent *_currentlyExpandedContent;
    NSCache *_textHeightCache;
    float _collectionViewWidth;
    struct CGSize _calculatedCollectionViewContentSize;
}

+ (Class)invalidationContextClass;
@property(nonatomic) float collectionViewWidth; // @synthesize collectionViewWidth=_collectionViewWidth;
@property(retain, nonatomic) NSCache *textHeightCache; // @synthesize textHeightCache=_textHeightCache;
@property(retain, nonatomic) IGDirectContent *currentlyExpandedContent; // @synthesize currentlyExpandedContent=_currentlyExpandedContent;
@property(nonatomic) struct CGSize calculatedCollectionViewContentSize; // @synthesize calculatedCollectionViewContentSize=_calculatedCollectionViewContentSize;
@property(retain, nonatomic) NSDictionary *footerAttributes; // @synthesize footerAttributes=_footerAttributes;
@property(retain, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) NSDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(retain, nonatomic) IGDirectThreadLayoutInvalidationContext *igInvalidationContext; // @synthesize igInvalidationContext=_igInvalidationContext;
@property(retain, nonatomic) NSArray *seenUsers; // @synthesize seenUsers=_seenUsers;
@property(retain, nonatomic) NSIndexPath *currentlyExpandedIndexPath; // @synthesize currentlyExpandedIndexPath=_currentlyExpandedIndexPath;
@property(nonatomic) __weak NSArray *allContent; // @synthesize allContent=_allContent;
@property(nonatomic) BOOL isSeenStampExpanded; // @synthesize isSeenStampExpanded=_isSeenStampExpanded;
- (void).cxx_destruct;
- (BOOL)useFullSizePhotos;
- (BOOL)updateSeenUsers:(id)arg1;
- (id)allAttributes;
- (float)calculateHeightForContent:(id)arg1 andViewWidth:(float)arg2;
- (struct CGSize)sizeForContent:(id)arg1 withViewWidth:(float)arg2 showsUsername:(BOOL)arg3 isExpandedContent:(BOOL)arg4;
- (void)calculateContentSizeAndAdjustAttributesIfNeeded;
- (void)calculateAndCacheAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;

@end

