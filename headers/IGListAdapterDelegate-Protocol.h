//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListAdapter;

@protocol IGListAdapterDelegate <NSObject>
- (void)listAdapter:(IGListAdapter *)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3;
- (void)listAdapter:(IGListAdapter *)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3;
@end

