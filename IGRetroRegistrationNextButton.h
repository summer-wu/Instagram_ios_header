//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIActivityIndicatorView;

@interface IGRetroRegistrationNextButton : UIButton
{
    BOOL _isVerifying;
    UIActivityIndicatorView *_loadingIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) BOOL isVerifying; // @synthesize isVerifying=_isVerifying;
- (void).cxx_destruct;
- (void)removeLoadingIndicator;
- (void)addLoadingIndicator;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

