//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGScrollingHeaderItemDelegate.h"

@class IGScrollingHeaderItem, NSString;

@interface IGExploreVolumeViewController : NSObject <IGScrollingHeaderItemDelegate>
{
    BOOL _didObserveHeaderBecomeFullyVisible;
    BOOL _viewIsVisible;
    IGScrollingHeaderItem *_headerItem;
}

@property(nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) BOOL didObserveHeaderBecomeFullyVisible; // @synthesize didObserveHeaderBecomeFullyVisible=_didObserveHeaderBecomeFullyVisible;
@property(readonly, nonatomic) IGScrollingHeaderItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)updateVolumeView;
- (BOOL)isHeaderFullyVisible;
- (void)headerItemScrolledStateDidChange:(id)arg1;
- (void)updateForViewControllerBecomeVisible:(BOOL)arg1;
- (id)initWithScrollingHeaderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
