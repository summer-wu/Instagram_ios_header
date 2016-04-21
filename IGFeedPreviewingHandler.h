//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewingDelegate.h"

@class IGHashtagPreviewingHandler, IGUserPreviewingHandler, NSString;

@interface IGFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate>
{
    IGUserPreviewingHandler *_userDelegate;
    IGHashtagPreviewingHandler *_hashtagDelegate;
    id <UIViewControllerPreviewingDelegate> _usedDelegate;
}

@property(retain, nonatomic) id <UIViewControllerPreviewingDelegate> usedDelegate; // @synthesize usedDelegate=_usedDelegate;
@property(retain, nonatomic) IGHashtagPreviewingHandler *hashtagDelegate; // @synthesize hashtagDelegate=_hashtagDelegate;
@property(retain, nonatomic) IGUserPreviewingHandler *userDelegate; // @synthesize userDelegate=_userDelegate;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithFeedViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

