//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGEditPostViewControllerDelegate.h"
#import "IGUserInTaggingViewControllerDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"

@class NSString, UIViewController;

@interface IGDismisser : NSObject <MFMailComposeViewControllerDelegate, IGEditPostViewControllerDelegate, IGUserInTaggingViewControllerDelegate>
{
    UIViewController *_presentingController;
    IGDismisser *_strong;
}

@property(retain, nonatomic) IGDismisser *strong; // @synthesize strong=_strong;
@property(retain, nonatomic) UIViewController *presentingController; // @synthesize presentingController=_presentingController;
- (void).cxx_destruct;
- (void)editPostViewController:(id)arg1 didFinishWithPost:(id)arg2;
- (void)userInTaggingViewController:(id)arg1 didFinish:(BOOL)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
