//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItemPivotGridCellDataSource, NSArray, NSString;

@interface IGPivotMediaInfo : NSObject
{
    NSArray *_creators;
    NSArray *_pivots;
    NSString *_pivotMediaId;
    NSString *_rankToken;
    IGFeedItemPivotGridCellDataSource *_gridCellDataSource;
}

+ (void)logPivotEvent:(id)arg1 media:(id)arg2 module:(id)arg3 originalMedia:(id)arg4 extraParams:(id)arg5;
@property(readonly, nonatomic) IGFeedItemPivotGridCellDataSource *gridCellDataSource; // @synthesize gridCellDataSource=_gridCellDataSource;
@property(copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(copy, nonatomic) NSString *pivotMediaId; // @synthesize pivotMediaId=_pivotMediaId;
@property(readonly, nonatomic) NSArray *pivots; // @synthesize pivots=_pivots;
@property(readonly, nonatomic) NSArray *creators; // @synthesize creators=_creators;
- (void).cxx_destruct;
- (void)setupGridCellDataSourceWithImageWidth:(float)arg1 shouldExpand:(BOOL)arg2 shouldAddPaddingBottom:(BOOL)arg3;
- (id)initWithDictionary:(id)arg1;

@end

