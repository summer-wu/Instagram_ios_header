//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGShareService : NSObject
{
    BOOL _isAvailableForSharing;
    BOOL _wantsToShare;
    int _serviceType;
}

+ (id)serviceWithType:(int)arg1;
@property(nonatomic) BOOL wantsToShare; // @synthesize wantsToShare=_wantsToShare;
@property(nonatomic) BOOL isAvailableForSharing; // @synthesize isAvailableForSharing=_isAvailableForSharing;
@property(readonly, nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) BOOL willShare;
@property(readonly, nonatomic) BOOL isAdequatelyConfigured;
@property(readonly, nonatomic) BOOL hasAdvancedOptions;
@property(readonly, nonatomic) NSString *serviceNameForService;
- (id)initWithServiceType:(int)arg1;

@end

