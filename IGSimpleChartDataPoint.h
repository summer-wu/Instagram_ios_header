//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface IGSimpleChartDataPoint : NSObject
{
    NSNumber *_y;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSNumber *y; // @synthesize y=_y;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
