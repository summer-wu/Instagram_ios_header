//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGDirectResponseOverlayViewDelegate.h"
#import "IGFeedPhotoViewDelegate.h"
#import "IGOverlayable.h"

@class IGFeedPhotoView, NSString, UIView<IGDirectResponseOverlayable>;

@interface IGPhotoCell : UICollectionViewCell <IGFeedPhotoViewDelegate, IGDirectResponseOverlayViewDelegate, IGOverlayable>
{
    IGFeedPhotoView *_photoView;
    id <IGPhotoCellDelegate> _delegate;
    UIView<IGDirectResponseOverlayable> *_overlayView;
}

@property(retain, nonatomic) UIView<IGDirectResponseOverlayable> *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <IGPhotoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGFeedPhotoView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)overlayViewDidTapOnButton:(id)arg1;
- (void)overlayViewDidTap:(id)arg1;
- (void)dismissOverlayAnimated:(BOOL)arg1;
- (void)showOverlayForDirectResponseInfo:(id)arg1 animated:(BOOL)arg2;
- (void)feedPhotoViewDidLoadImage:(id)arg1;
- (void)feedPhotoDidDoubleTapToLike:(id)arg1;
- (void)feedPhotoViewDidTap:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

