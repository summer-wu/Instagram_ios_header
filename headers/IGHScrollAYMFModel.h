//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDKDiffable.h"

@class NSArray, NSString;

@interface IGHScrollAYMFModel : NSObject <IGDKDiffable>
{
    NSArray *_userInfos;
    NSString *_title;
    NSString *_actionText;
}

@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *userInfos; // @synthesize userInfos=_userInfos;
- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithAYMFDict:(id)arg1;

@end
