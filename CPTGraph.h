//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTBorderedLayer.h"

@class CPTAxisSet, CPTGraphHostingView, CPTLayerAnnotation, CPTLegend, CPTPlotAreaFrame, CPTPlotSpace, CPTTextStyle, NSArray, NSAttributedString, NSMutableArray, NSString;

@interface CPTGraph : CPTBorderedLayer
{
    BOOL inTitleUpdate;
    CPTGraphHostingView *hostingView;
    CPTPlotAreaFrame *plotAreaFrame;
    NSMutableArray *plots;
    NSMutableArray *plotSpaces;
    NSString *title;
    NSAttributedString *attributedTitle;
    CPTTextStyle *titleTextStyle;
    int titlePlotAreaFrameAnchor;
    CPTLegend *legend;
    int legendAnchor;
    CPTLayerAnnotation *titleAnnotation;
    CPTLayerAnnotation *legendAnnotation;
    struct CGPoint titleDisplacement;
    struct CGPoint legendDisplacement;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) BOOL inTitleUpdate; // @synthesize inTitleUpdate;
@property(retain, nonatomic) CPTLayerAnnotation *legendAnnotation; // @synthesize legendAnnotation;
@property(retain, nonatomic) CPTLayerAnnotation *titleAnnotation; // @synthesize titleAnnotation;
@property(nonatomic) struct CGPoint legendDisplacement; // @synthesize legendDisplacement;
@property(nonatomic) int legendAnchor; // @synthesize legendAnchor;
@property(retain, nonatomic) CPTLegend *legend; // @synthesize legend;
@property(nonatomic) struct CGPoint titleDisplacement; // @synthesize titleDisplacement;
@property(nonatomic) int titlePlotAreaFrameAnchor; // @synthesize titlePlotAreaFrameAnchor;
@property(copy, nonatomic) CPTTextStyle *titleTextStyle; // @synthesize titleTextStyle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSMutableArray *plotSpaces; // @synthesize plotSpaces;
@property(retain, nonatomic) NSMutableArray *plots; // @synthesize plots;
@property(retain, nonatomic) CPTPlotAreaFrame *plotAreaFrame; // @synthesize plotAreaFrame;
@property(nonatomic) __weak CPTGraphHostingView *hostingView; // @synthesize hostingView;
- (void).cxx_destruct;
- (BOOL)pointingDeviceCancelledEvent:(struct UIEvent *)arg1;
- (BOOL)pointingDeviceDraggedEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
@property(retain, nonatomic) NSArray *topDownLayerOrder; // @dynamic topDownLayerOrder;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (struct CGPoint)contentAnchorForRectAnchor:(int)arg1;
- (void)applyTheme:(id)arg1;
@property(retain, nonatomic) CPTAxisSet *axisSet; // @dynamic axisSet;
- (void)plotSpaceMappingDidChange:(id)arg1;
- (void)removePlotSpace:(id)arg1;
- (void)addPlotSpace:(id)arg1;
- (id)plotSpaceWithIdentifier:(id)arg1;
- (id)plotSpaceAtIndex:(unsigned int)arg1;
- (id)allPlotSpaces;
@property(readonly, nonatomic) CPTPlotSpace *defaultPlotSpace; // @dynamic defaultPlotSpace;
- (void)removePlotWithIdentifier:(id)arg1;
- (void)insertPlot:(id)arg1 atIndex:(unsigned int)arg2 intoPlotSpace:(id)arg3;
- (void)insertPlot:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removePlot:(id)arg1;
- (void)addPlot:(id)arg1 toPlotSpace:(id)arg2;
- (void)addPlot:(id)arg1;
- (id)plotWithIdentifier:(id)arg1;
- (id)plotAtIndex:(unsigned int)arg1;
- (id)allPlots;
- (void)reloadDataIfNeeded;
- (void)reloadData;
- (void)layoutAndRenderInContext:(struct CGContext *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)newAxisSet;
- (id)newPlotSpace;

@end
