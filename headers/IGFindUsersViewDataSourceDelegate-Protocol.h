//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFindUsersViewDataSource, IGRequestError, NSArray;

@protocol IGFindUsersViewDataSourceDelegate <NSObject>
- (void)findUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 didLoadAllUserIDs:(NSArray *)arg2;
- (void)findUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 didLoadMoreUsers:(NSArray *)arg2 allUsers:(NSArray *)arg3;
- (void)findUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 didFailWithError:(IGRequestError *)arg2;
- (void)findUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 didLoadThumbnailsForUsers:(NSArray *)arg2;
- (void)findUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 didLoadUserList:(NSArray *)arg2;
@end

