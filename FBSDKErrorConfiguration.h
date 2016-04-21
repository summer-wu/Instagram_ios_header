//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary;

@interface FBSDKErrorConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_configurationDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseArray:(id)arg1;
- (id)recoveryConfigurationForCode:(id)arg1 subcode:(id)arg2 request:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

