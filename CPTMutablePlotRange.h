//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTPlotRange.h"

@class NSNumber;

@interface CPTMutablePlotRange : CPTPlotRange
{
}

@property(retain, nonatomic) NSNumber *length; // @dynamic length;
@property(retain, nonatomic) NSNumber *location; // @dynamic location;
- (void)shiftEndToFitInRange:(id)arg1;
- (void)shiftLocationToFitInRange:(id)arg1;
- (void)expandRangeByFactor:(id)arg1;
- (void)intersectionPlotRange:(id)arg1;
- (void)unionPlotRange:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL inValueUpdate; // @dynamic inValueUpdate;
@property(nonatomic) CDStruct_6ece915e lengthDecimal; // @dynamic lengthDecimal;
@property(nonatomic) double lengthDouble; // @dynamic lengthDouble;
@property(nonatomic) CDStruct_6ece915e locationDecimal; // @dynamic locationDecimal;
@property(nonatomic) double locationDouble; // @dynamic locationDouble;

@end

