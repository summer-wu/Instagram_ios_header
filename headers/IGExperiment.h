//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IGExperimentUserGroup, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IGExperiment : NSObject <NSCopying>
{
    double _lastExposureEventTime;
    IGExperimentUserGroup *_exposedGroup;
    NSMutableArray *_storedBackgroundRequests;
    BOOL _needRestart;
    BOOL _isHoldoutUniverse;
    NSString *_key;
    NSArray *_userGroups;
    NSString *_descriptiveName;
    int _category;
    IGExperimentUserGroup *_serverSideUserGroup;
    IGExperimentUserGroup *_defaultUserGroup;
    int _experimentType;
    NSDictionary *_exposeData;
    NSString *_associatedHoldoutUniverse;
}

+ (id)holdoutExperimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3;
+ (id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 booleanValue:(BOOL)arg5 experimentType:(int)arg6;
+ (id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6;
@property(nonatomic) BOOL isHoldoutUniverse; // @synthesize isHoldoutUniverse=_isHoldoutUniverse;
@property(copy, nonatomic) NSString *associatedHoldoutUniverse; // @synthesize associatedHoldoutUniverse=_associatedHoldoutUniverse;
@property(retain, nonatomic) NSDictionary *exposeData; // @synthesize exposeData=_exposeData;
@property(nonatomic) BOOL needRestart; // @synthesize needRestart=_needRestart;
@property(nonatomic) int experimentType; // @synthesize experimentType=_experimentType;
@property(readonly, nonatomic) IGExperimentUserGroup *defaultUserGroup; // @synthesize defaultUserGroup=_defaultUserGroup;
@property(retain, nonatomic) IGExperimentUserGroup *serverSideUserGroup; // @synthesize serverSideUserGroup=_serverSideUserGroup;
@property(readonly, nonatomic) int category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *descriptiveName; // @synthesize descriptiveName=_descriptiveName;
@property(readonly, copy, nonatomic) NSArray *userGroups; // @synthesize userGroups=_userGroups;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearUserGroupOverride;
@property(retain, nonatomic) IGExperimentUserGroup *overrideUserGroup;
- (id)overrideUserGroupIndexKey;
- (id)effectiveGroup;
- (id)generateServerSideUserGroupParameters:(id)arg1;
- (id)exposeValueForParameterNamed:(id)arg1;
- (BOOL)wasExposed;
- (void)sendBackgroundExposure;
- (void)sendExposureEventIfNecessary;
- (id)description;
- (id)initWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 isSelfHoldoutUniverse:(BOOL)arg7;
- (void)dealloc;

@end
