//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface;

@interface IGSplineTestFilter : IGImageFilter
{
    IGSurface *_splineSurface;
}

+ (int)filterType;
+ (id)filterName;
@property(retain, nonatomic) IGSurface *splineSurface; // @synthesize splineSurface=_splineSurface;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2;
- (void)configureProgram:(id)arg1;
- (id)fragmentShader;
- (id)fragmentFunctions;
- (id)samplers;

@end

