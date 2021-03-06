//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGBusinessConversionViewControllerDelegate.h"
#import "IGGenericMegaphoneViewV2Delegate.h"
#import "IGMegaphonePresenterProtocol.h"

@class IGDefaultGenericMegaphoneLogger, IGGenericMegaphone, NSString;

@interface IGBusinessConversionMegaphonePresenter : NSObject <IGBusinessConversionViewControllerDelegate, IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    BOOL _megaphoneSeen;
    IGGenericMegaphone *_megaphone;
    id <IGMegaphonePresenterDelegate> _delegate;
    IGDefaultGenericMegaphoneLogger *_logger;
}

+ (id)megaphoneForTesting;
@property(nonatomic) BOOL megaphoneSeen; // @synthesize megaphoneSeen=_megaphoneSeen;
@property(retain, nonatomic) IGDefaultGenericMegaphoneLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
- (void).cxx_destruct;
- (void)businessConversionViewControllerDidDismiss:(id)arg1;
- (void)businessConversionViewControllerDidCompleteFlow:(id)arg1;
- (void)logMegaphoneSeen;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)showConvertLaterAlert;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (id)viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 delegate:(id)arg2 displaySource:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

