//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface CPTColorSpace : NSObject <NSCoding>
{
    struct CGColorSpace *cgColorSpace;
}

+ (id)genericRGBSpace;
@property(readonly, nonatomic) struct CGColorSpace *cgColorSpace; // @synthesize cgColorSpace;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCGColorSpace:(struct CGColorSpace *)arg1;

@end

