//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFindUsersViewDataSource.h"

@class IGUser;

@interface IGProfileChainingFindUsersViewDataSource : IGFindUsersViewDataSource
{
    IGUser *_user;
}

@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)requestWithMaxId:(id)arg1 parameters:(id)arg2;
- (void)fetchMore;
- (void)fetchList;
- (id)parseListResponse:(id)arg1;
- (id)initWithUser:(id)arg1;

@end

