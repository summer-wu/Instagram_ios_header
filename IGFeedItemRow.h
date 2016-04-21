//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDKDiffable.h"

@class IGFeedItemRowIdentifier;

@interface IGFeedItemRow : NSObject <IGDKDiffable>
{
    IGFeedItemRowIdentifier *_identifier;
    unsigned int _hash;
    int _type;
    int _textType;
    id _value;
}

@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) int textType; // @synthesize textType=_textType;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)diffIdentifier;
- (unsigned int)hash;
- (id)description;
- (id)initWithType:(int)arg1 textType:(int)arg2 value:(id)arg3;
- (id)initWithType:(int)arg1 textType:(int)arg2;
- (id)initWithType:(int)arg1;

@end

