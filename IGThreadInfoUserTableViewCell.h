//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

@class IGProfilePictureImageView, IGUser;

@interface IGThreadInfoUserTableViewCell : IGTableViewCell
{
    IGUser *_user;
    IGProfilePictureImageView *_profilePicture;
}

+ (float)cellHeight;
@property(retain, nonatomic) IGProfilePictureImageView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

