//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTapButton.h"

@class NSString;

@interface IGNuxButton : IGTapButton
{
    BOOL _expanded;
    float _size;
    float _maxWidth;
    float _imageInset;
    float _titleInset;
    NSString *_title;
}

+ (id)buttonWithSize:(float)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) float titleInset; // @synthesize titleInset=_titleInset;
@property(nonatomic) float imageInset; // @synthesize imageInset=_imageInset;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) float size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)updateInsets;
- (void)shrinkToIconWithAnimation:(BOOL)arg1 duration:(float)arg2 delay:(float)arg3;
- (void)showTextLabelWithAnimation:(BOOL)arg1 duration:(float)arg2 delay:(float)arg3;
- (void)removeAllAnimations;
- (id)initWithSize:(float)arg1;

@end

