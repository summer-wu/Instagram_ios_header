//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIImageView, UILabel;

@interface IGFeedToggleView : UIView
{
    UIImageView *_usertagsCountBubble;
    UILabel *_usertagsCountLabel;
    UIButton *_usertagsButton;
    BOOL _isProfileMode;
    id <IGFeedToggleViewDelegate> _delegate;
    NSMutableArray *_buttons;
    int _userTagCount;
}

+ (int)height;
@property(nonatomic) int userTagCount; // @synthesize userTagCount=_userTagCount;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak id <IGFeedToggleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateUsertagLayout;
- (void)updateUsertagCount;
- (void)switchedMode:(id)arg1;
- (void)selectButton:(int)arg1;
- (void)setButtonEnabled:(BOOL)arg1 forButton:(int)arg2;
- (void)layoutSubviews;
- (id)initForCurrentUserProfile;
- (id)initWithMapAndUsertagButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

