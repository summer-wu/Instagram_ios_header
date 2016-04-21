//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGGenericMegaphoneViewV2Delegate.h"
#import "IGMegaphonePresenterProtocol.h"

@class IGGenericMegaphoneViewV2;

@interface IGTwoFactorEnrollmentMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    BOOL _megaphoneSeen;
    id <IGMegaphonePresenterDelegate> _delegate;
    IGGenericMegaphoneViewV2 *_megaphoneView;
    id <IGGenericMegaphoneLogger> _logger;
    unsigned int _displaySource;
}

+ (unsigned int)buttonActionFromString:(id)arg1;
@property(nonatomic) BOOL megaphoneSeen; // @synthesize megaphoneSeen=_megaphoneSeen;
@property(readonly, nonatomic) unsigned int displaySource; // @synthesize displaySource=_displaySource;
@property(readonly, nonatomic) id <IGGenericMegaphoneLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGGenericMegaphoneViewV2 *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
@property(nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTwoFactorEnabled:(id)arg1;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)logMegaphoneSeen;
- (id)viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 displaySource:(unsigned int)arg2;
- (void)dealloc;

@end

