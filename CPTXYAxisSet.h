//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTAxisSet.h"

@class CPTXYAxis;

@interface CPTXYAxisSet : CPTAxisSet
{
}

@property(readonly, nonatomic) CPTXYAxis *yAxis; // @dynamic yAxis;
@property(readonly, nonatomic) CPTXYAxis *xAxis; // @dynamic xAxis;
- (void)layoutSublayers;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
