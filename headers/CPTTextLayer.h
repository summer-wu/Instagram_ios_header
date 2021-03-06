//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTBorderedLayer.h"

@class CPTTextStyle, NSAttributedString, NSString;

@interface CPTTextLayer : CPTBorderedLayer
{
    BOOL inTextUpdate;
    NSString *text;
    CPTTextStyle *textStyle;
    NSAttributedString *attributedText;
    struct CGSize maximumSize;
}

@property(nonatomic) BOOL inTextUpdate; // @synthesize inTextUpdate;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText;
@property(retain, nonatomic) CPTTextStyle *textStyle; // @synthesize textStyle;
@property(copy, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (id)description;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setShadow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithAttributedText:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 style:(id)arg2;

@end

