//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAnnouncer.h"

@interface IGRequestProgressAnnouncer : IGAnnouncer
{
}

- (void)request:(id)arg1 didReceiveDownloadBytesRead:(unsigned int)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

@end

