//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UITableViewDelegate.h"

@class IGFeedItemHideHandler, NSMutableDictionary, NSString, UITableView;

@interface IGFeedItemHiddenNoReasonSelectedCell : UICollectionViewCell <UITableViewDelegate>
{
    IGFeedItemHideHandler *_hideHandler;
    UITableView *_tableView;
    NSMutableDictionary *_headersCache;
}

+ (float)heightForFeedItem:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *headersCache; // @synthesize headersCache=_headersCache;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IGFeedItemHideHandler *hideHandler; // @synthesize hideHandler=_hideHandler;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureForHideHandler:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

