//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerPreviewingDelegate.h"

@class IGHashtagModel, NSString;

@interface IGHashtagPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate>
{
    id _controller;
    id <IGPreviewingControllerHandler> _handler;
    IGHashtagModel *_hashtag;
}

@property(retain, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
@property(readonly, nonatomic) id <IGPreviewingControllerHandler> handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) __weak id controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithController:(id)arg1 handler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
