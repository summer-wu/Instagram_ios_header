//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEventViewerMediaPreloader, IGPost, NSURL;

@protocol IGEventViewerMediaPreloaderVideoProgressDelegate <NSObject>
- (void)eventMediaPreloader:(IGEventViewerMediaPreloader *)arg1 didFailVideoForPost:(IGPost *)arg2 url:(NSURL *)arg3;
- (void)eventMediaPreloader:(IGEventViewerMediaPreloader *)arg1 didLoadVideoForPost:(IGPost *)arg2 url:(NSURL *)arg3;
@end

