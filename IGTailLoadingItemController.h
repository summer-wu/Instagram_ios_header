//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListItemController.h"

#import "IGListItemType.h"

@class NSString;

@interface IGTailLoadingItemController : IGListItemController <IGListItemType>
{
}

- (id)displayDelegate;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)cellForItemAtIndex:(int)arg1;
- (struct CGSize)estimatedSizeForItemAtIndex:(int)arg1;
- (struct CGSize)sizeForItemAtIndex:(int)arg1;
- (unsigned int)numberOfItems;
- (id)cellClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

