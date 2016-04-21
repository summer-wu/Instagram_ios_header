//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGDirectThreadAvatarView, NSArray, UILabel, UIView;

@interface IGDirectShareCollectionViewCell : UICollectionViewCell
{
    BOOL _showWhiteOverlay;
    BOOL _showBlueRing;
    NSArray *_users;
    IGDirectThreadAvatarView *_profileView;
    UILabel *_usernameLabel;
    UILabel *_detailLabel;
    UIView *_whiteOverlay;
    UIView *_blueRing;
}

+ (float)contractedCellWidth;
+ (float)cellHeight;
@property(retain, nonatomic) UIView *blueRing; // @synthesize blueRing=_blueRing;
@property(retain, nonatomic) UIView *whiteOverlay; // @synthesize whiteOverlay=_whiteOverlay;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) IGDirectThreadAvatarView *profileView; // @synthesize profileView=_profileView;
@property(nonatomic) BOOL showBlueRing; // @synthesize showBlueRing=_showBlueRing;
@property(nonatomic) BOOL showWhiteOverlay; // @synthesize showWhiteOverlay=_showWhiteOverlay;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setUsernameText:(id)arg1;
- (void)layoutSubviews;
- (void)showWhiteOverlay:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

