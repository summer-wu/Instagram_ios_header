//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGLabel, IGProfilePictureImageView;

@interface IGAlbumFullscreenProfilePictureView : UIView
{
    IGProfilePictureImageView *_profilePic;
    IGLabel *_usernameLabel;
}

@property(readonly, nonatomic) IGLabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (void).cxx_destruct;
- (void)configureWithUser:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

