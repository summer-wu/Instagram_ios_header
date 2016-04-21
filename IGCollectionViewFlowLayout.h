//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface IGCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    BOOL _stickyHeaders;
    float _stickyHeaderOriginYAdjustment;
}

@property(readonly, nonatomic) BOOL stickyHeaders; // @synthesize stickyHeaders=_stickyHeaders;
@property(nonatomic) float stickyHeaderOriginYAdjustment; // @synthesize stickyHeaderOriginYAdjustment=_stickyHeaderOriginYAdjustment;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithStickyHeaders:(BOOL)arg1;

@end

