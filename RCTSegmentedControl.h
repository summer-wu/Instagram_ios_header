//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

@class NSArray;

@interface RCTSegmentedControl : UISegmentedControl
{
    NSArray *_values;
    int _selectedIndex;
    CDUnknownBlockType _onChange;
}

@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (void)didChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

