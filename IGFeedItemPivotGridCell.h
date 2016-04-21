//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGThumbnailsGridViewDelegate.h"
#import "UICollectionViewDelegate.h"

@class IGCoreTextView, IGExploreSectionTextHeader, IGFeedItem, IGFeedItemPivotGridCellDataSource, IGThumbnailsGridView, NSString, UIView, UIViewController;

@interface IGFeedItemPivotGridCell : UICollectionViewCell <IGThumbnailsGridViewDelegate, UICollectionViewDelegate>
{
    IGExploreSectionTextHeader *_headerView;
    IGThumbnailsGridView *_thumbnailGridView;
    UIViewController *_baseController;
    IGCoreTextView *_showMoreActionView;
    UIView *_upperSeparator;
    UIView *_lowerSeparator;
    IGFeedItemPivotGridCellDataSource *_datasource;
    IGFeedItem *_post;
    id <IGFeedItemPivotGridCellDelegate> _delegate;
}

+ (id)styledStringForShowMore;
+ (float)heightForWidth:(float)arg1 feedItem:(id)arg2;
@property(nonatomic) __weak id <IGFeedItemPivotGridCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFeedItem *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)didTapThumbnailAtIndex:(unsigned int)arg1;
- (void)onTapSeeMore;
- (void)setupCellWithItem:(id)arg1 underController:(id)arg2 attributes:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
