//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGUsertagViewDelegate.h"

@class IGUsertagGroup, NSString;

@interface IGUserInTagDisplayView : UIView <IGUsertagViewDelegate>
{
    IGUsertagGroup *_usertags;
    id <IGUserInTagDisplayDelegate> _delegate;
}

@property(nonatomic) __weak id <IGUserInTagDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGUsertagGroup *usertags; // @synthesize usertags=_usertags;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tagViewWasRemoved:(id)arg1;
- (void)tagViewWasSelected:(id)arg1;
- (BOOL)tagViewCanBeSelected:(id)arg1;
- (void)onUsertagsChanged;
- (BOOL)hasActiveUsertag;
- (void)hideAllTagsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showAllTagsAnimated:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
