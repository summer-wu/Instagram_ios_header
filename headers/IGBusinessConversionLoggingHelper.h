//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNavigationControllerDelegate.h"

@class NSString;

@interface IGBusinessConversionLoggingHelper : NSObject <IGNavigationControllerDelegate>
{
    NSString *_entrypoint;
    NSString *_waterfallID;
}

@property(copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;
@property(copy, nonatomic) NSString *entrypoint; // @synthesize entrypoint=_entrypoint;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)logSubmitErrorWithInfo:(id)arg1;
- (void)logSubmitSuccessWithInfo:(id)arg1;
- (id)logEvent:(id)arg1 atStep:(id)arg2 withInfo:(id)arg3;
- (id)logChangeEvent:(id)arg1 atStep:(id)arg2 withStartPageInfo:(id)arg3 endPageInfo:(id)arg4;
- (void)logChangeOptionAtStep:(id)arg1 withStartPageInfo:(id)arg2 endPageInfo:(id)arg3;
- (void)logChangeOptionErrorAtStep:(id)arg1 withStartPageInfo:(id)arg2 endPageInfo:(id)arg3 withError:(id)arg4;
- (void)logFlowErrorAtStep:(id)arg1 withMessage:(id)arg2;
- (void)logFlowFinishStep:(id)arg1;
- (void)logFlowCancelStep:(id)arg1;
- (void)logFlowStartStep:(id)arg1;
- (void)logFlowStart;
- (id)initWithEntrypoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

