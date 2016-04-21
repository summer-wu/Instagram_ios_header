//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewingDelegate.h"

@class IGExploreMainFeedViewController, IGFeedItem, NSIndexPath, NSString;

@interface IGExploreMainFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate>
{
    IGExploreMainFeedViewController *_controller;
    NSIndexPath *_thumbnailIndexPath;
    IGFeedItem *_thumbnailFeedItem;
}

@property(retain, nonatomic) IGFeedItem *thumbnailFeedItem; // @synthesize thumbnailFeedItem=_thumbnailFeedItem;
@property(retain, nonatomic) NSIndexPath *thumbnailIndexPath; // @synthesize thumbnailIndexPath=_thumbnailIndexPath;
@property(readonly, nonatomic) __weak IGExploreMainFeedViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
