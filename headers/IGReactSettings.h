//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGReactSettings : NSObject
{
    BOOL _enableMinification;
    BOOL _enableDev;
}

+ (id)sharedSettings;
@property(nonatomic) BOOL enableDev; // @synthesize enableDev=_enableDev;
@property(nonatomic) BOOL enableMinification; // @synthesize enableMinification=_enableMinification;
- (id)jsBundleURLForBundleRoot:(id)arg1;

@end
