//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class CPTAnnotationHostLayer, CPTLayer;

@interface CPTAnnotation : NSObject <NSCoding>
{
    CPTLayer *contentLayer;
    CPTAnnotationHostLayer *annotationHostLayer;
    float rotation;
    struct CGPoint displacement;
    struct CGPoint contentAnchorPoint;
}

@property(nonatomic) float rotation; // @synthesize rotation;
@property(nonatomic) struct CGPoint contentAnchorPoint; // @synthesize contentAnchorPoint;
@property(nonatomic) struct CGPoint displacement; // @synthesize displacement;
@property(nonatomic) __weak CPTAnnotationHostLayer *annotationHostLayer; // @synthesize annotationHostLayer;
@property(retain, nonatomic) CPTLayer *contentLayer; // @synthesize contentLayer;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)positionContentLayer;

@end

