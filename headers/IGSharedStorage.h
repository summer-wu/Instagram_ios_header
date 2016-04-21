//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface IGSharedStorage : NSObject
{
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSUserDefaults *sharedDefaults; // @synthesize sharedDefaults=_sharedDefaults;
- (void).cxx_destruct;
- (id)layoutStorageURL;
- (id)breakpadStorageURL;
- (id)storageURLForDirectory:(id)arg1;
- (void)setSharingEnabled;
- (BOOL)isSharingEnabled;
- (id)groupIdentifier;
- (id)init;

@end
