//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaCaptureViewController, IGVideoComposition, UIImage;

@protocol IGMediaCaptureViewControllerDelegate <NSObject>
- (void)mediaCaptureViewController:(IGMediaCaptureViewController *)arg1 didProduceVideoComposition:(IGVideoComposition *)arg2;
- (void)mediaCaptureViewController:(IGMediaCaptureViewController *)arg1 didProducePhoto:(UIImage *)arg2 fromOrigin:(int)arg3;
@end
