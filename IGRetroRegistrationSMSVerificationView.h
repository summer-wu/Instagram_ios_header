//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRetroRegistrationBackgroundView, IGRetroRegistrationSMSVerificationScrollView;

@interface IGRetroRegistrationSMSVerificationView : UIView
{
    IGRetroRegistrationSMSVerificationScrollView *_smsVerificationScrollView;
    IGRetroRegistrationBackgroundView *_backgroundView;
}

@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGRetroRegistrationSMSVerificationScrollView *smsVerificationScrollView; // @synthesize smsVerificationScrollView=_smsVerificationScrollView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)smsVerificationView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

