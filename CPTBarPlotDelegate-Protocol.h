//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTPlotDelegate.h"

@class CPTBarPlot;

@protocol CPTBarPlotDelegate <CPTPlotDelegate>

@optional
- (void)barPlot:(CPTBarPlot *)arg1 barTouchUpAtRecordIndex:(unsigned int)arg2 withEvent:(struct UIEvent *)arg3;
- (void)barPlot:(CPTBarPlot *)arg1 barTouchUpAtRecordIndex:(unsigned int)arg2;
- (void)barPlot:(CPTBarPlot *)arg1 barTouchDownAtRecordIndex:(unsigned int)arg2 withEvent:(struct UIEvent *)arg3;
- (void)barPlot:(CPTBarPlot *)arg1 barTouchDownAtRecordIndex:(unsigned int)arg2;
- (void)barPlot:(CPTBarPlot *)arg1 barWasSelectedAtRecordIndex:(unsigned int)arg2 withEvent:(struct UIEvent *)arg3;
- (void)barPlot:(CPTBarPlot *)arg1 barWasSelectedAtRecordIndex:(unsigned int)arg2;
@end
