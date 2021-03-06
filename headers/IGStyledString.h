//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStringStyle, NSMutableAttributedString, NSMutableDictionary;

@interface IGStyledString : NSObject
{
    NSMutableDictionary *_sizeCache;
    IGStringStyle *_style;
    NSMutableAttributedString *_attributedString;
}

+ (id)createWithCacheKey:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) IGStringStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)description;
- (int)heightForWidth:(int)arg1;
- (struct CGSize)sizeForFlexibleHeightWithWidth:(int)arg1;
- (void)appendAnnotatedString:(id)arg1;
- (void)appendAttachment:(id)arg1;
- (void)appendStyledString:(id)arg1;
- (void)prependAttributedString:(id)arg1;
- (void)appendAttributedString:(id)arg1;
- (void)appendString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBaseStyle:(id)arg1;
- (id)init;
- (void)appendLinkedTitleString:(id)arg1;
- (void)appendLinkedString:(id)arg1 withExternalURLs:(BOOL)arg2;
- (void)appendLinkedString:(id)arg1;

@end

