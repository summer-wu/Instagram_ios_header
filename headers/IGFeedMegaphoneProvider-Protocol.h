//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol IGFeedMegaphoneProvider <NSObject>
- (unsigned int)displaySource;
- (void)updateServerMegaphoneWithResponse:(NSDictionary *)arg1;
- (NSArray *)activeMegaphones;
@end

