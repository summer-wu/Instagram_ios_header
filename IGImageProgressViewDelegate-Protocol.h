//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGImageProgressView, NSError, UIImage;

@protocol IGImageProgressViewDelegate <NSObject>
- (void)progressImageView:(IGImageProgressView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)progressImageView:(IGImageProgressView *)arg1 didLoadImage:(UIImage *)arg2 withDataLength:(unsigned int)arg3;
@end

