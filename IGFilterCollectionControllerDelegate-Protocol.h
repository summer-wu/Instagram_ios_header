//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFilterCollectionController;

@protocol IGFilterCollectionControllerDelegate <NSObject>
- (void)filterController:(IGFilterCollectionController *)arg1 didSelectFilterWithClass:(Class)arg2 changed:(BOOL)arg3 willScroll:(BOOL)arg4;

@optional
- (void)filterControllerDidFinishReordering:(IGFilterCollectionController *)arg1;
- (void)filterControllerDidStartReordering:(IGFilterCollectionController *)arg1;
- (void)filterControllerDidScroll:(IGFilterCollectionController *)arg1;
- (void)filterController:(IGFilterCollectionController *)arg1 didScrollToSelectedFilter:(Class)arg2;
- (void)filterControllerDidSelectAddMoreFilters:(IGFilterCollectionController *)arg1;
- (float)filterController:(IGFilterCollectionController *)arg1 filterStrengthForClass:(Class)arg2;
- (void)filterController:(IGFilterCollectionController *)arg1 didSelectFilterStrengthForClass:(Class)arg2;
@end

