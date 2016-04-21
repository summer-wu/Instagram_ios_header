//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGSimpleButton, UIImage, UIImageView;

@interface IGNewsEmptyFeedView : UIView
{
    IGSimpleButton *_followButton;
    UIImage *_heartImage;
    UIImageView *_heartView;
    IGCoreTextView *_textView;
}

@property(readonly, nonatomic) IGCoreTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UIImageView *heartView; // @synthesize heartView=_heartView;
@property(readonly, nonatomic) UIImage *heartImage; // @synthesize heartImage=_heartImage;
@property(readonly, nonatomic) IGSimpleButton *followButton; // @synthesize followButton=_followButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)noStoriesTextViewHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3;
- (id)setUpHeartImage;
- (id)setUpHeartView;
- (void)setFollowButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)setUpFollowButton;
- (id)initWithHeader:(id)arg1 body:(id)arg2 cacheKey:(id)arg3 showFollowButton:(BOOL)arg4;

@end

