//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDKDiffable.h"

@class NSArray;

@interface IGFollowAllHeaderItem : NSObject <IGDKDiffable>
{
    int _type;
    NSArray *_userIDs;
}

@property(readonly, copy, nonatomic) NSArray *userIDs; // @synthesize userIDs=_userIDs;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithType:(int)arg1 userIDs:(id)arg2;

@end

