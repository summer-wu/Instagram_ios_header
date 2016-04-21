//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFindUsersViewDataSource.h"

@class NSArray;

@interface IGClusterBrowsingSuggestedUsersViewDataSource : IGFindUsersViewDataSource
{
    NSArray *_parameters;
    struct CGSize _thumbnailSize;
}

@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)requestWithMaxId:(id)arg1 parameters:(id)arg2;
- (void)fetchMore;
- (void)fetchList;
- (id)parseListResponse:(id)arg1;
- (id)initWithThumbnailSize:(struct CGSize)arg1;

@end
