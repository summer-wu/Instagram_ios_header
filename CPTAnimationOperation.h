//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPTAnimationPeriod, NSDictionary;

@interface CPTAnimationOperation : NSObject
{
    BOOL canceled;
    CPTAnimationPeriod *period;
    int animationCurve;
    id boundObject;
    SEL boundGetter;
    SEL boundSetter;
    id <CPTAnimationDelegate> delegate;
    id <NSCopying><NSObject> identifier;
    NSDictionary *userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(copy, nonatomic) id <NSCopying><NSObject> identifier; // @synthesize identifier;
@property(getter=isCanceled) BOOL canceled; // @synthesize canceled;
@property(nonatomic) __weak id <CPTAnimationDelegate> delegate; // @synthesize delegate;
@property(nonatomic) SEL boundSetter; // @synthesize boundSetter;
@property(nonatomic) SEL boundGetter; // @synthesize boundGetter;
@property(retain, nonatomic) id boundObject; // @synthesize boundObject;
@property(nonatomic) int animationCurve; // @synthesize animationCurve;
@property(retain, nonatomic) CPTAnimationPeriod *period; // @synthesize period;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

