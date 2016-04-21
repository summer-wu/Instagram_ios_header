//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTAnnotationHostLayer.h"

@class CPTPlotArea, CPTPlotSpace, CPTShadow, CPTTextStyle, NSArray, NSAttributedString, NSFormatter, NSMutableArray, NSMutableDictionary, NSString;

@interface CPTPlot : CPTAnnotationHostLayer
{
    BOOL dataNeedsReloading;
    BOOL needsRelabel;
    BOOL adjustLabelAnchors;
    BOOL showLabels;
    BOOL alignsPointsToPixels;
    BOOL drawLegendSwatchDecoration;
    BOOL inTitleUpdate;
    id <CPTPlotDataSource> dataSource;
    NSString *title;
    NSAttributedString *attributedTitle;
    CPTPlotSpace *plotSpace;
    NSMutableDictionary *cachedData;
    unsigned int cachedDataCount;
    int cachePrecision;
    float labelOffset;
    float labelRotation;
    unsigned int labelField;
    CPTTextStyle *labelTextStyle;
    NSFormatter *labelFormatter;
    CPTShadow *labelShadow;
    NSMutableArray *labelAnnotations;
    unsigned int pointingDeviceDownLabelIndex;
    struct _NSRange labelIndexRange;
}

+ (id)nilData;
+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) unsigned int pointingDeviceDownLabelIndex; // @synthesize pointingDeviceDownLabelIndex;
@property(nonatomic) BOOL inTitleUpdate; // @synthesize inTitleUpdate;
@property(nonatomic) BOOL drawLegendSwatchDecoration; // @synthesize drawLegendSwatchDecoration;
@property(nonatomic) BOOL alignsPointsToPixels; // @synthesize alignsPointsToPixels;
@property(retain, nonatomic) NSMutableArray *labelAnnotations; // @synthesize labelAnnotations;
@property(nonatomic) struct _NSRange labelIndexRange; // @synthesize labelIndexRange;
@property(retain, nonatomic) CPTShadow *labelShadow; // @synthesize labelShadow;
@property(retain, nonatomic) NSFormatter *labelFormatter; // @synthesize labelFormatter;
@property(copy, nonatomic) CPTTextStyle *labelTextStyle; // @synthesize labelTextStyle;
@property(nonatomic) unsigned int labelField; // @synthesize labelField;
@property(nonatomic) float labelRotation; // @synthesize labelRotation;
@property(nonatomic) float labelOffset; // @synthesize labelOffset;
@property(nonatomic) BOOL showLabels; // @synthesize showLabels;
@property(nonatomic) BOOL adjustLabelAnchors; // @synthesize adjustLabelAnchors;
@property(nonatomic) BOOL needsRelabel; // @synthesize needsRelabel;
@property(nonatomic) int cachePrecision; // @synthesize cachePrecision;
@property(nonatomic) unsigned int cachedDataCount; // @synthesize cachedDataCount;
@property(retain, nonatomic) NSMutableDictionary *cachedData; // @synthesize cachedData;
@property(nonatomic) BOOL dataNeedsReloading; // @synthesize dataNeedsReloading;
@property(retain, nonatomic) CPTPlotSpace *plotSpace; // @synthesize plotSpace;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) __weak id <CPTPlotDataSource> dataSource; // @synthesize dataSource;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
@property(readonly, nonatomic) CPTPlotArea *plotArea; // @dynamic plotArea;
@property(copy, nonatomic) NSArray *dataLabels; // @dynamic dataLabels;
- (BOOL)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned int)arg2 inRect:(struct CGRect)arg3 inContext:(struct CGContext *)arg4;
- (id)attributedTitleForLegendEntryAtIndex:(unsigned int)arg1;
- (id)titleForLegendEntryAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLegendEntries;
- (void)repositionAllLabelAnnotations;
- (void)updateContentAnchorForLabel:(id)arg1;
- (void)relabelIndexRange:(struct _NSRange)arg1;
- (void)relabel;
- (void)setNeedsRelabel;
- (id)plotRangeForCoordinate:(int)arg1;
- (id)plotRangeForField:(unsigned int)arg1;
- (void)cacheArray:(id)arg1 forKey:(id)arg2 atRecordIndex:(unsigned int)arg3;
- (void)cacheArray:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 recordIndex:(unsigned int)arg2;
- (id)cachedArrayForKey:(id)arg1;
@property(readonly, nonatomic) struct _CPTNumericDataType decimalDataType; // @dynamic decimalDataType;
@property(readonly, nonatomic) struct _CPTNumericDataType doubleDataType; // @dynamic doubleDataType;
- (void)setCachedDataType:(struct _CPTNumericDataType)arg1;
- (CDStruct_6ece915e)cachedDecimalForField:(unsigned int)arg1 recordIndex:(unsigned int)arg2;
- (double)cachedDoubleForField:(unsigned int)arg1 recordIndex:(unsigned int)arg2;
- (id)cachedNumberForField:(unsigned int)arg1 recordIndex:(unsigned int)arg2;
- (id)cachedNumbersForField:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL doublePrecisionCache; // @dynamic doublePrecisionCache;
- (id)numericDataForNumbers:(id)arg1;
- (void)cacheNumbers:(id)arg1 forField:(unsigned int)arg2 atRecordIndex:(unsigned int)arg3;
- (void)cacheNumbers:(id)arg1 forField:(unsigned int)arg2;
- (BOOL)loadNumbersForAllFieldsFromDataSourceInRecordIndexRange:(struct _NSRange)arg1;
- (id)numbersFromDataSourceForField:(unsigned int)arg1 recordIndexRange:(struct _NSRange)arg2;
- (void)reloadDataLabelsInIndexRange:(struct _NSRange)arg1;
- (void)reloadDataLabels;
- (void)reloadPlotDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadPlotData;
- (void)deleteDataInIndexRange:(struct _NSRange)arg1;
- (void)insertDataAtIndex:(unsigned int)arg1 numberOfRecords:(unsigned int)arg2;
- (void)reloadDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadDataIfNeeded;
- (void)reloadData;
- (void)setDataNeedsReloading;
@property(readonly, nonatomic) unsigned int numberOfRecords; // @dynamic numberOfRecords;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned int)dataIndexFromInteractionPoint:(struct CGPoint)arg1;
- (void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned int)arg2;
- (int)coordinateForFieldIdentifier:(unsigned int)arg1;
- (id)fieldIdentifiersForCoordinate:(int)arg1;
- (id)fieldIdentifiers;
- (unsigned int)numberOfFields;

@end
