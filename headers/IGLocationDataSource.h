//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class CLLocation, IGRequest, NSArray, NSDictionary, NSString;

@interface IGLocationDataSource : NSObject <UITableViewDataSource>
{
    BOOL _isLoading;
    BOOL _isSearching;
    BOOL _isLocating;
    BOOL _locationIsFromEXIF;
    NSArray *_locations;
    NSArray *_EXIFLocations;
    IGRequest *_locationRequest;
    NSString *_lastRequestID;
    NSString *_responseRankTokenID;
    NSString *_responseQueryText;
    id <IGLocationDataSourceDelegate> _delegate;
    int _fetchStatus;
    CLLocation *_lastKnownLocation;
    NSDictionary *_lastKnownResponse;
}

@property(nonatomic) BOOL locationIsFromEXIF; // @synthesize locationIsFromEXIF=_locationIsFromEXIF;
@property(retain, nonatomic) NSDictionary *lastKnownResponse; // @synthesize lastKnownResponse=_lastKnownResponse;
@property(retain, nonatomic) CLLocation *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
@property(nonatomic) int fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(nonatomic) __weak id <IGLocationDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *responseQueryText; // @synthesize responseQueryText=_responseQueryText;
@property(retain, nonatomic) NSString *responseRankTokenID; // @synthesize responseRankTokenID=_responseRankTokenID;
@property(retain, nonatomic) NSString *lastRequestID; // @synthesize lastRequestID=_lastRequestID;
@property(nonatomic) BOOL isLocating; // @synthesize isLocating=_isLocating;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) IGRequest *locationRequest; // @synthesize locationRequest=_locationRequest;
@property(copy, nonatomic) NSArray *EXIFLocations; // @synthesize EXIFLocations=_EXIFLocations;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (void).cxx_destruct;
- (BOOL)hasLocations;
- (void)handleLocationFetchError:(id)arg1 rankToken:(id)arg2;
- (void)handleLocationFetchSuccess:(id)arg1 queryText:(id)arg2 rankToken:(id)arg3;
- (void)fetchLocationsNearCLLocation:(id)arg1 locationIsFromEXIF:(BOOL)arg2 withQuery:(id)arg3 rankToken:(id)arg4;
- (void)fetchLocationsNearCLLocation:(id)arg1 atMediaCreationTime:(id)arg2 locationIsFromEXIF:(BOOL)arg3 withQuery:(id)arg4;
- (void)fetchLocationsNearCLLocation:(id)arg1 locationIsFromEXIF:(BOOL)arg2 withQuery:(id)arg3;
- (void)fetchLocationsNearCLLocation:(id)arg1 atMediaCreationTime:(id)arg2 locationIsFromEXIF:(BOOL)arg3 withQuery:(id)arg4 rankToken:(id)arg5;
- (void)initGroupsFromResponse:(id)arg1;
- (id)locationForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 statusCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 errorCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 locationCellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)hasError;
- (void)reloadData;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

