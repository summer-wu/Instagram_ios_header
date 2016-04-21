//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListItemController.h"

#import "IGHScrollAYMFCellDelegate.h"
#import "IGListItemType.h"

@class IGFeaturedUserInfo, NSString;

@interface IGHScrollAYMFCellItemController : IGListItemController <IGHScrollAYMFCellDelegate, IGListItemType>
{
    id <IGHScrollAYMFCellItemControllerDelegate> _delegate;
    IGFeaturedUserInfo *_userInfo;
    int _cellType;
}

@property(readonly, nonatomic) int cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) IGFeaturedUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <IGHScrollAYMFCellItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2;
- (void)didTapAYMFCell:(id)arg1;
- (void)didDismissAYMFCell:(id)arg1;
- (id)supplementaryViewSource;
- (id)displayDelegate;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)cellForItemAtIndex:(int)arg1;
- (struct CGSize)estimatedSizeForItemAtIndex:(int)arg1;
- (struct CGSize)sizeForItemAtIndex:(int)arg1;
- (unsigned int)numberOfItems;
- (id)cellClasses;
- (id)initWithFeaturedUserInfo:(id)arg1 cellType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

