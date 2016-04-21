//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSIndexSet, NSString, NSURL;

@interface IGExploreViewModel : NSObject <NSCopying>
{
    BOOL _restricted;
    BOOL _following;
    BOOL _verified;
    NSString *_title;
    NSString *_subtitle;
    NSString *_byline;
    NSArray *_thumbnailURLs;
    NSIndexSet *_thumbnailVideoIndexes;
    NSURL *_imageURL;
    unsigned int _action;
    unsigned int _style;
    int _maxThumbnails;
    int _thumbnailsPerRow;
}

@property(nonatomic) int thumbnailsPerRow; // @synthesize thumbnailsPerRow=_thumbnailsPerRow;
@property(nonatomic) int maxThumbnails; // @synthesize maxThumbnails=_maxThumbnails;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic, getter=isVerified) BOOL verified; // @synthesize verified=_verified;
@property(nonatomic, getter=isFollowing) BOOL following; // @synthesize following=_following;
@property(nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSIndexSet *thumbnailVideoIndexes; // @synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes;
@property(copy, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithFeaturedUserInfo:(id)arg1 width:(float)arg2 thumbnailsPerRow:(unsigned int)arg3 showsSocialContext:(BOOL)arg4;
- (void)applyMediaBundles:(id)arg1 thumbnailSize:(struct CGSize)arg2;

@end
