//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface IGDirectInboxAction : NSObject
{
    NSString *_title;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    CDUnknownBlockType _tapBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 andBackgroundColor:(id)arg2 andTextColor:(id)arg3 andTapBlock:(CDUnknownBlockType)arg4;

@end

