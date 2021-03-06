//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTPlot.h"

@class CPTFill, CPTLineStyle, CPTMutableNumericData, NSArray;

@interface CPTRangePlot : CPTPlot
{
    CPTFill *areaFill;
    CPTLineStyle *areaBorderLineStyle;
    CPTLineStyle *barLineStyle;
    float barWidth;
    float gapHeight;
    float gapWidth;
    unsigned int pointingDeviceDownIndex;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) unsigned int pointingDeviceDownIndex; // @synthesize pointingDeviceDownIndex;
@property(nonatomic) float gapWidth; // @synthesize gapWidth;
@property(nonatomic) float gapHeight; // @synthesize gapHeight;
@property(nonatomic) float barWidth; // @synthesize barWidth;
@property(copy, nonatomic) CPTLineStyle *barLineStyle; // @synthesize barLineStyle;
@property(copy, nonatomic) CPTLineStyle *areaBorderLineStyle; // @synthesize areaBorderLineStyle;
@property(copy, nonatomic) CPTFill *areaFill; // @synthesize areaFill;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *barLineStyles; // @dynamic barLineStyles;
@property(copy, nonatomic) CPTMutableNumericData *rightValues; // @dynamic rightValues;
@property(copy, nonatomic) CPTMutableNumericData *leftValues; // @dynamic leftValues;
@property(copy, nonatomic) CPTMutableNumericData *lowValues; // @dynamic lowValues;
@property(copy, nonatomic) CPTMutableNumericData *highValues; // @dynamic highValues;
@property(copy, nonatomic) NSArray *yValues; // @dynamic yValues;
@property(copy, nonatomic) NSArray *xValues; // @dynamic xValues;
- (BOOL)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (unsigned int)dataIndexFromInteractionPoint:(struct CGPoint)arg1;
- (void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned int)arg2;
- (int)coordinateForFieldIdentifier:(unsigned int)arg1;
- (id)fieldIdentifiersForCoordinate:(int)arg1;
- (id)fieldIdentifiers;
- (unsigned int)numberOfFields;
- (id)barLineStyleForIndex:(unsigned int)arg1;
- (void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned int)arg2 inRect:(struct CGRect)arg3 inContext:(struct CGContext *)arg4;
- (void)drawRangeInContext:(struct CGContext *)arg1 lineStyle:(id)arg2 viewPoint:(struct CGPointError *)arg3 halfGapSize:(struct CGSize)arg4 halfBarWidth:(float)arg5 alignPoints:(BOOL)arg6;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)reloadBarLineStylesInIndexRange:(struct _NSRange)arg1;
- (void)reloadBarLineStyles;
- (void)reloadPlotDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadDataInIndexRange:(struct _NSRange)arg1;
- (int)extremeDrawnPointIndexForFlags:(char *)arg1 numberOfPoints:(unsigned int)arg2 extremeNumIsLowerBound:(BOOL)arg3;
- (void)alignViewPointsToUserSpace:(struct CGPointError *)arg1 withContent:(struct CGContext *)arg2 drawPointFlags:(char *)arg3 numberOfPoints:(unsigned int)arg4;
- (void)calculateViewPoints:(struct CGPointError *)arg1 withDrawPointFlags:(char *)arg2 numberOfPoints:(unsigned int)arg3;
- (void)calculatePointsToDraw:(char *)arg1 numberOfPoints:(unsigned int)arg2 forPlotSpace:(id)arg3 includeVisiblePointsOnly:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

