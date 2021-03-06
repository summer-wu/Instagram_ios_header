//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTPlot.h"

@class CPTFill, CPTLineStyle, NSArray;

@interface CPTPieChart : CPTPlot
{
    BOOL labelRotationRelativeToRadius;
    float pieRadius;
    float pieInnerRadius;
    float startAngle;
    float endAngle;
    int sliceDirection;
    CPTLineStyle *borderLineStyle;
    CPTFill *overlayFill;
    unsigned int pointingDeviceDownIndex;
    struct CGPoint centerAnchor;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultPieSliceColorForIndex:(unsigned int)arg1;
@property(nonatomic) unsigned int pointingDeviceDownIndex; // @synthesize pointingDeviceDownIndex;
@property(nonatomic) BOOL labelRotationRelativeToRadius; // @synthesize labelRotationRelativeToRadius;
@property(copy, nonatomic) CPTFill *overlayFill; // @synthesize overlayFill;
@property(copy, nonatomic) CPTLineStyle *borderLineStyle; // @synthesize borderLineStyle;
@property(nonatomic) struct CGPoint centerAnchor; // @synthesize centerAnchor;
@property(nonatomic) int sliceDirection; // @synthesize sliceDirection;
@property(nonatomic) float endAngle; // @synthesize endAngle;
@property(nonatomic) float startAngle; // @synthesize startAngle;
@property(nonatomic) float pieInnerRadius; // @synthesize pieInnerRadius;
@property(nonatomic) float pieRadius; // @synthesize pieRadius;
- (void).cxx_destruct;
- (void)setLabelRotation:(float)arg1;
@property(copy, nonatomic) NSArray *sliceRadialOffsets; // @dynamic sliceRadialOffsets;
@property(copy, nonatomic) NSArray *sliceFills; // @dynamic sliceFills;
@property(copy, nonatomic) NSArray *sliceWidths; // @dynamic sliceWidths;
- (unsigned int)dataIndexFromInteractionPoint:(struct CGPoint)arg1;
- (BOOL)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)angle:(float)arg1 betweenStartAngle:(float)arg2 endAngle:(float)arg3;
- (float)normalizedPosition:(float)arg1;
- (id)attributedTitleForLegendEntryAtIndex:(unsigned int)arg1;
- (id)titleForLegendEntryAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLegendEntries;
- (void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned int)arg2;
- (id)fieldIdentifiers;
- (unsigned int)numberOfFields;
- (float)medianAngleForPieSliceIndex:(unsigned int)arg1;
- (unsigned int)pieSliceIndexAtAngle:(float)arg1;
- (void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned int)arg2 inRect:(struct CGRect)arg3 inContext:(struct CGContext *)arg4;
- (id)sliceFillForIndex:(unsigned int)arg1;
- (void)addSliceToPath:(struct CGPath *)arg1 centerPoint:(struct CGPoint)arg2 startingAngle:(float)arg3 finishingAngle:(float)arg4;
- (float)radiansForPieSliceValue:(float)arg1;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)reloadRadialOffsetsInIndexRange:(struct _NSRange)arg1;
- (void)reloadRadialOffsets;
- (void)reloadSliceFillsInIndexRange:(struct _NSRange)arg1;
- (void)reloadSliceFills;
- (void)updateNormalizedData;
- (void)deleteDataInIndexRange:(struct _NSRange)arg1;
- (void)insertDataAtIndex:(unsigned int)arg1 numberOfRecords:(unsigned int)arg2;
- (void)reloadPlotDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

