//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCTAPresenterProtocol.h"

@class IGCTAPresenterContext, NSString;

@interface IGGenericCTAPresenter : NSObject <IGCTAPresenterProtocol>
{
    IGCTAPresenterContext *_context;
}

@property(readonly, nonatomic) IGCTAPresenterContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)viewForCTA;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

