//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IGCollectionViewChangeSet : NSObject
{
    NSArray *_addedIndexPaths;
    NSArray *_removedIndexPaths;
    NSArray *_fromMoveIndexPaths;
    NSArray *_toMoveIndexPaths;
}

@property(retain, nonatomic) NSArray *toMoveIndexPaths; // @synthesize toMoveIndexPaths=_toMoveIndexPaths;
@property(retain, nonatomic) NSArray *fromMoveIndexPaths; // @synthesize fromMoveIndexPaths=_fromMoveIndexPaths;
@property(retain, nonatomic) NSArray *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property(retain, nonatomic) NSArray *addedIndexPaths; // @synthesize addedIndexPaths=_addedIndexPaths;
- (void).cxx_destruct;
- (id)description;

@end
