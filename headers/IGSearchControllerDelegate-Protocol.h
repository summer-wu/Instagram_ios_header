//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSearchController, NSString;

@protocol IGSearchControllerDelegate <NSObject>

@optional
- (void)searchControllerSearchButtonTapped:(IGSearchController *)arg1;
- (void)searchController:(IGSearchController *)arg1 searchTextDidChange:(NSString *)arg2;
- (BOOL)searchController:(IGSearchController *)arg1 shouldChangeSearchTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchControllerWillEndSearch:(IGSearchController *)arg1;
- (void)searchControllerWillBeginSearch:(IGSearchController *)arg1;
@end

