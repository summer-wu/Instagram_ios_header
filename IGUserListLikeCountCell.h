//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class NSString, UILabel;

@interface IGUserListLikeCountCell : IGPlainTableViewCell
{
    NSString *_likesString;
    UILabel *_likeCountLabel;
}

+ (float)cellHeight;
@property(readonly, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) NSString *likesString; // @synthesize likesString=_likesString;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;

@end
