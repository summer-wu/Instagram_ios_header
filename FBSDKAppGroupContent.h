//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FBSDKAppGroupContent : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSString *_groupDescription;
    NSString *_name;
    unsigned int _privacy;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int privacy; // @synthesize privacy=_privacy;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToAppGroupContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

