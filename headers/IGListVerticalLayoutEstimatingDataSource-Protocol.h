//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListVerticalLayout, NSIndexPath;

@protocol IGListVerticalLayoutEstimatingDataSource <NSObject>
- (struct CGSize)estimatedSizeForHeaderAtIndexPath:(NSIndexPath *)arg1 layout:(IGListVerticalLayout *)arg2;
- (struct CGSize)estimatedSizeForItemAtIndexPath:(NSIndexPath *)arg1 layout:(IGListVerticalLayout *)arg2;
@end

