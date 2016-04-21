//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IGCommentModelStyledStringCacheKey : NSObject <NSCopying>
{
    unsigned int _hash;
    BOOL _newline;
    NSString *_primaryName;
    NSString *_text;
    NSString *_truncationString;
    float _width;
    int _maximumUntruncatedNumberOfLines;
    int _truncatedToNumberOfLines;
}

@property(readonly, nonatomic) BOOL newline; // @synthesize newline=_newline;
@property(readonly, nonatomic) int truncatedToNumberOfLines; // @synthesize truncatedToNumberOfLines=_truncatedToNumberOfLines;
@property(readonly, nonatomic) int maximumUntruncatedNumberOfLines; // @synthesize maximumUntruncatedNumberOfLines=_maximumUntruncatedNumberOfLines;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *truncationString; // @synthesize truncationString=_truncationString;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *primaryName; // @synthesize primaryName=_primaryName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryName:(id)arg1 text:(id)arg2 truncationString:(id)arg3 width:(float)arg4 maximumUntruncatedNumberOfLines:(int)arg5 truncatedToNumberOfLines:(int)arg6 newline:(BOOL)arg7;

@end
