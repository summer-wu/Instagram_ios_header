//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGenericMegaphoneViewV2Delegate.h"
#import "IGMegaphonePresenterProtocol.h"

@class IGGenericMegaphone;

@interface IGPaymentsMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    IGGenericMegaphone *_megaphone;
    id <IGMegaphonePresenterDelegate> _delegate;
}

+ (id)megaphoneForTesting;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
- (void).cxx_destruct;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
- (id)viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 delegate:(id)arg2;

@end

