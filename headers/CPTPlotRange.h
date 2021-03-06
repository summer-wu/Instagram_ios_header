//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSNumber;

@interface CPTPlotRange : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    BOOL inValueUpdate;
    double locationDouble;
    double lengthDouble;
    CDStruct_6ece915e locationDecimal;
    CDStruct_6ece915e lengthDecimal;
}

+ (id)plotRangeWithLocationDecimal:(CDStruct_6ece915e)arg1 lengthDecimal:(CDStruct_6ece915e)arg2;
+ (id)plotRangeWithLocation:(id)arg1 length:(id)arg2;
@property(nonatomic) BOOL inValueUpdate; // @synthesize inValueUpdate;
@property(nonatomic) double lengthDouble; // @synthesize lengthDouble;
@property(nonatomic) double locationDouble; // @synthesize locationDouble;
@property(nonatomic) CDStruct_6ece915e lengthDecimal; // @synthesize lengthDecimal;
@property(nonatomic) CDStruct_6ece915e locationDecimal; // @synthesize locationDecimal;
- (id)debugQuickLookObject;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)compareToDouble:(double)arg1;
- (int)compareToDecimal:(CDStruct_6ece915e)arg1;
- (int)compareToNumber:(id)arg1;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (BOOL)isEqualToRange:(id)arg1;
- (BOOL)containsNumber:(id)arg1;
- (BOOL)containsDouble:(double)arg1;
- (BOOL)contains:(CDStruct_6ece915e)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double maxLimitDouble; // @dynamic maxLimitDouble;
@property(readonly, nonatomic) CDStruct_6ece915e maxLimitDecimal; // @dynamic maxLimitDecimal;
@property(readonly, nonatomic) NSNumber *maxLimit; // @dynamic maxLimit;
@property(readonly, nonatomic) double midPointDouble; // @dynamic midPointDouble;
@property(readonly, nonatomic) CDStruct_6ece915e midPointDecimal; // @dynamic midPointDecimal;
@property(readonly, nonatomic) NSNumber *midPoint; // @dynamic midPoint;
@property(readonly, nonatomic) double minLimitDouble; // @dynamic minLimitDouble;
@property(readonly, nonatomic) CDStruct_6ece915e minLimitDecimal; // @dynamic minLimitDecimal;
@property(readonly, nonatomic) NSNumber *minLimit; // @dynamic minLimit;
@property(readonly, nonatomic) double endDouble; // @dynamic endDouble;
@property(readonly, nonatomic) CDStruct_6ece915e endDecimal; // @dynamic endDecimal;
@property(readonly, nonatomic) NSNumber *end; // @dynamic end;
@property(readonly, nonatomic) NSNumber *length; // @dynamic length;
@property(readonly, nonatomic) NSNumber *location; // @dynamic location;
- (id)init;
- (id)initWithLocationDecimal:(CDStruct_6ece915e)arg1 lengthDecimal:(CDStruct_6ece915e)arg2;
- (id)initWithLocation:(id)arg1 length:(id)arg2;

@end

