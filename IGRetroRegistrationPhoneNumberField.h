//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGRetroRegistrationTextField.h"

@class NSString, UIButton, UIView;

@interface IGRetroRegistrationPhoneNumberField : IGRetroRegistrationTextField
{
    UIButton *_countryCodeButton;
    UIView *_textFieldLeftView;
    UIView *_lineSeparatorView;
    UIButton *_countrycodeButton;
    NSString *_countryNumber;
}

@property(copy, nonatomic) NSString *countryNumber; // @synthesize countryNumber=_countryNumber;
@property(retain, nonatomic) UIButton *countrycodeButton; // @synthesize countrycodeButton=_countrycodeButton;
@property(readonly, nonatomic) UIView *lineSeparatorView; // @synthesize lineSeparatorView=_lineSeparatorView;
@property(readonly, nonatomic) UIView *textFieldLeftView; // @synthesize textFieldLeftView=_textFieldLeftView;
@property(readonly, nonatomic) UIButton *countryCodeButton; // @synthesize countryCodeButton=_countryCodeButton;
- (void).cxx_destruct;
- (id)formatPhoneNumber;
- (void)updateCountryName:(id)arg1 countryNumber:(id)arg2;
- (id)configureCountryCodeButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
