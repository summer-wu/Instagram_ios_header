//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface FBSDKAppInviteContent : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSURL *_appInvitePreviewImageURL;
    NSURL *_appLinkURL;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSURL *appLinkURL; // @synthesize appLinkURL=_appLinkURL;
@property(copy, nonatomic) NSURL *appInvitePreviewImageURL; // @synthesize appInvitePreviewImageURL=_appInvitePreviewImageURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToAppInviteContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSURL *previewImageURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

