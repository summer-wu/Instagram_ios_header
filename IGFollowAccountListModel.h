//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFollowPeopleMegaphoneConfiguration, NSArray;

@interface IGFollowAccountListModel : NSObject
{
    IGFollowPeopleMegaphoneConfiguration *_configuration;
    NSArray *_accountList;
}

+ (id)followAccountListFromResponse:(id)arg1;
@property(readonly, nonatomic) NSArray *accountList; // @synthesize accountList=_accountList;
@property(readonly, nonatomic) IGFollowPeopleMegaphoneConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 accountList:(id)arg2;

@end

