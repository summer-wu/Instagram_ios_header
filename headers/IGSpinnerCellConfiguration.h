//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface IGSpinnerCellConfiguration : NSObject
{
    int _style;
    unsigned int _position;
    UIColor *_backgroundColor;
    float _alpha;
    float _height;
}

@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) unsigned int position; // @synthesize position=_position;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(int)arg1 position:(unsigned int)arg2 backgroundColor:(id)arg3 alpha:(float)arg4 height:(float)arg5;

@end

