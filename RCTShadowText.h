//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTShadowView.h"

@class NSAttributedString, NSString, NSTextStorage, UIColor;

@interface RCTShadowText : RCTShadowView
{
    NSTextStorage *_cachedTextStorage;
    float _cachedTextStorageWidth;
    NSAttributedString *_cachedAttributedString;
    float _effectiveLetterSpacing;
    BOOL _isHighlighted;
    BOOL _allowFontScaling;
    UIColor *_color;
    NSString *_fontFamily;
    float _fontSize;
    NSString *_fontWeight;
    NSString *_fontStyle;
    float _letterSpacing;
    float _lineHeight;
    unsigned int _numberOfLines;
    int _textAlign;
    int _writingDirection;
    UIColor *_textDecorationColor;
    int _textDecorationStyle;
    int _textDecorationLine;
    float _fontSizeMultiplier;
    float _opacity;
    float _textShadowRadius;
    UIColor *_textShadowColor;
    struct CGSize _shadowOffset;
    struct CGSize _textShadowOffset;
}

@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(nonatomic) float textShadowRadius; // @synthesize textShadowRadius=_textShadowRadius;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) BOOL allowFontScaling; // @synthesize allowFontScaling=_allowFontScaling;
@property(nonatomic) float fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
@property(nonatomic) int textDecorationLine; // @synthesize textDecorationLine=_textDecorationLine;
@property(nonatomic) int textDecorationStyle; // @synthesize textDecorationStyle=_textDecorationStyle;
@property(retain, nonatomic) UIColor *textDecorationColor; // @synthesize textDecorationColor=_textDecorationColor;
@property(nonatomic) int writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) int textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) float letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (void)fillCSSNode:(struct css_node *)arg1;
- (void)_setParagraphStyleOnAttributedString:(id)arg1;
- (void)_addAttribute:(id)arg1 withValue:(id)arg2 toAttributedString:(id)arg3;
- (id)_attributedStringWithFontFamily:(id)arg1 fontSize:(id)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 letterSpacing:(id)arg5 useBackgroundColor:(BOOL)arg6 foregroundColor:(id)arg7 backgroundColor:(id)arg8 opacity:(float)arg9;
- (id)attributedString;
- (void)recomputeText;
- (void)dirtyText;
- (id)buildTextStorageForWidth:(float)arg1;
- (void)applyLayoutNode:(struct css_node *)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;
- (id)processUpdatedProperties:(id)arg1 parentProperties:(id)arg2;
- (void)contentSizeMultiplierDidChange:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
