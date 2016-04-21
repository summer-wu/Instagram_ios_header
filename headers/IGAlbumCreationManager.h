//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAlbumCreationViewControllerDataDelegate.h"
#import "IGUserSessionClearableObject.h"

@class IGAlbumCreationModel, IGUserDefaults, NSDate, NSMutableArray, NSString;

@interface IGAlbumCreationManager : NSObject <IGAlbumCreationViewControllerDataDelegate, IGUserSessionClearableObject>
{
    IGAlbumCreationModel *_model;
    IGUserDefaults *_userSessionDefaults;
    NSMutableArray *_pendingUploads;
    NSDate *_currentUploadStartTime;
}

+ (void)clearForUserPK:(id)arg1;
@property(retain, nonatomic) NSDate *currentUploadStartTime; // @synthesize currentUploadStartTime=_currentUploadStartTime;
@property(retain, nonatomic) NSMutableArray *pendingUploads; // @synthesize pendingUploads=_pendingUploads;
@property(retain, nonatomic) IGUserDefaults *userSessionDefaults; // @synthesize userSessionDefaults=_userSessionDefaults;
@property(retain, nonatomic) IGAlbumCreationModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)updateAlbumTitle:(id)arg1;
- (void)handleAlbumShared:(id)arg1;
- (void)creationViewController:(id)arg1 didUpdateTitle:(id)arg2;
- (void)creationViewController:(id)arg1 didPickAsset:(id)arg2;
- (BOOL)shouldSaveToLibrary;
- (void)removeArchivedCurrentAlbum;
- (void)archiveCurrentAlbum:(id)arg1;
- (id)unarchiveCurrentAlbum;
- (void)processAssetUpload:(id)arg1;
- (void)uploadNextAsset;
- (void)dealloc;
- (id)initWithUserSessionDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
