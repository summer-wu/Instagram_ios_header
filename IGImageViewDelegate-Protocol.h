//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGImageView, NSError;

@protocol IGImageViewDelegate <NSObject>

@optional
- (void)imageViewDidChangeImageProgress:(float)arg1;
- (void)imageViewFailedToLoadImage:(IGImageView *)arg1 error:(NSError *)arg2;
- (void)imageViewLoadedImage:(IGImageView *)arg1;
@end
