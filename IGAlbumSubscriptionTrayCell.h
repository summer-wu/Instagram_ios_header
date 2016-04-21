//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGMediaThumbnailView, IGProfilePictureImageView;

@interface IGAlbumSubscriptionTrayCell : UICollectionViewCell
{
    IGProfilePictureImageView *_profilePic;
    IGMediaThumbnailView *_thumbnailView;
}

+ (float)height;
+ (float)sectionPadding;
@property(retain, nonatomic) IGMediaThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

