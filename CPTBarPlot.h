//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTPlot.h"

@class CPTFill, CPTLineStyle, CPTPlotRange, NSArray, NSNumber;

@interface CPTBarPlot : CPTPlot
{
    BOOL barWidthsAreInViewCoordinates;
    BOOL barsAreHorizontal;
    BOOL barBasesVary;
    float barCornerRadius;
    float barBaseCornerRadius;
    NSNumber *barOffset;
    NSNumber *barWidth;
    CPTLineStyle *lineStyle;
    CPTFill *fill;
    NSNumber *baseValue;
    CPTPlotRange *plotRange;
    unsigned int pointingDeviceDownIndex;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)tubularBarPlotWithColor:(id)arg1 horizontalBars:(BOOL)arg2;
@property(nonatomic) unsigned int pointingDeviceDownIndex; // @synthesize pointingDeviceDownIndex;
@property(copy, nonatomic) CPTPlotRange *plotRange; // @synthesize plotRange;
@property(nonatomic) BOOL barBasesVary; // @synthesize barBasesVary;
@property(retain, nonatomic) NSNumber *baseValue; // @synthesize baseValue;
@property(nonatomic) BOOL barsAreHorizontal; // @synthesize barsAreHorizontal;
@property(copy, nonatomic) CPTFill *fill; // @synthesize fill;
@property(copy, nonatomic) CPTLineStyle *lineStyle; // @synthesize lineStyle;
@property(retain, nonatomic) NSNumber *barWidth; // @synthesize barWidth;
@property(nonatomic) BOOL barWidthsAreInViewCoordinates; // @synthesize barWidthsAreInViewCoordinates;
@property(retain, nonatomic) NSNumber *barOffset; // @synthesize barOffset;
@property(nonatomic) float barBaseCornerRadius; // @synthesize barBaseCornerRadius;
@property(nonatomic) float barCornerRadius; // @synthesize barCornerRadius;
- (void).cxx_destruct;
- (int)coordinateForFieldIdentifier:(unsigned int)arg1;
- (id)fieldIdentifiersForCoordinate:(int)arg1;
- (id)fieldIdentifiers;
- (unsigned int)numberOfFields;
@property(copy, nonatomic) NSArray *barLineStyles; // @dynamic barLineStyles;
@property(copy, nonatomic) NSArray *barFills; // @dynamic barFills;
@property(copy, nonatomic) NSArray *barLocations; // @dynamic barLocations;
@property(copy, nonatomic) NSArray *barBases; // @dynamic barBases;
@property(copy, nonatomic) NSArray *barTips; // @dynamic barTips;
- (BOOL)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (unsigned int)dataIndexFromInteractionPoint:(struct CGPoint)arg1;
- (id)attributedTitleForLegendEntryAtIndex:(unsigned int)arg1;
- (id)titleForLegendEntryAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLegendEntries;
- (void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned int)arg2;
- (void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned int)arg2 inRect:(struct CGRect)arg3 inContext:(struct CGContext *)arg4;
- (void)drawBarInContext:(struct CGContext *)arg1 recordIndex:(unsigned int)arg2;
- (id)barLineStyleForIndex:(unsigned int)arg1;
- (id)barFillForIndex:(unsigned int)arg1;
- (BOOL)barIsVisibleWithBasePoint:(struct CGPoint)arg1;
- (struct CGPath *)newBarPathWithContext:(struct CGContext *)arg1 basePoint:(struct CGPoint)arg2 tipPoint:(struct CGPoint)arg3;
- (struct CGPath *)newBarPathWithContext:(struct CGContext *)arg1 recordIndex:(unsigned int)arg2;
- (BOOL)barAtRecordIndex:(unsigned int)arg1 basePoint:(struct CGPoint *)arg2 tipPoint:(struct CGPoint *)arg3;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (id)plotRangeEnclosingBars;
- (id)plotRangeForCoordinate:(int)arg1;
- (CDStruct_6ece915e)lengthInPlotCoordinates:(CDStruct_6ece915e)arg1;
- (double)doubleLengthInPlotCoordinates:(CDStruct_6ece915e)arg1;
- (float)lengthInView:(CDStruct_6ece915e)arg1;
- (void)reloadBarLineStylesInIndexRange:(struct _NSRange)arg1;
- (void)reloadBarLineStyles;
- (void)reloadBarFillsInIndexRange:(struct _NSRange)arg1;
- (void)reloadBarFills;
- (void)reloadPlotDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadDataInIndexRange:(struct _NSRange)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
