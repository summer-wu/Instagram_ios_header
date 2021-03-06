//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGCountryCodeMapper : NSObject
{
}

+ (void)clearData;
+ (int)countryNumberLengthForPhoneNumber:(id)arg1;
+ (BOOL)validCountryNumber:(id)arg1;
+ (id)countryCodeForCountryName:(id)arg1;
+ (id)countryNameToCountryNumberMap;
+ (id)countryNumberForCountryCode:(id)arg1;
+ (void)initializeCountryNumberSet;
+ (void)initializeCountryCodeToCountryNumberMap;

@end

