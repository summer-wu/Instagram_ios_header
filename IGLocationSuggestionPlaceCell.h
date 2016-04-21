//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGLocation, NSString, UIImageView, UILabel;

@interface IGLocationSuggestionPlaceCell : UICollectionViewCell
{
    NSString *_locationTitle;
    IGLocation *_location;
    UIImageView *_imageView;
    UILabel *_textLabel;
}

+ (id)cellFont;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
- (void).cxx_destruct;
- (id)cellBackgroundColor;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

