//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRetroRegistrationBackgroundView, IGRetroRegistrationPhoneConfirmationFrontView;

@interface IGRetroRegistrationPhoneConfirmationView : UIView
{
    IGRetroRegistrationPhoneConfirmationFrontView *_confirmationFrontView;
    IGRetroRegistrationBackgroundView *_backgroundView;
}

@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGRetroRegistrationPhoneConfirmationFrontView *confirmationFrontView; // @synthesize confirmationFrontView=_confirmationFrontView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 phoneNumber:(id)arg2;

@end

