//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEventFeedData, NSMutableArray;

@interface IGEventFeedDataCache : NSObject
{
    IGEventFeedData *_lastSeenPage;
    NSMutableArray *_pages;
}

@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) IGEventFeedData *lastSeenPage; // @synthesize lastSeenPage=_lastSeenPage;
- (void).cxx_destruct;
- (id)pageThatContainsPost:(id)arg1;
- (id)trimmedPageWithStartIndex:(unsigned int)arg1 originalPage:(id)arg2;
- (void)resetCacheWithPost:(id)arg1;
- (void)updateCacheWithPage:(id)arg1;
- (void)removeDuplicatePostsFromPage:(id)arg1;
- (void)removePost:(id)arg1;
- (void)updateWithLastSeenPost:(id)arg1;
- (void)addPage:(id)arg1;
- (id)allPages;
- (id)initWithPage:(id)arg1;
- (id)init;

@end

