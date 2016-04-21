//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface IGInsightsSeeAllPostsSwitchPostTypeController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate> _delegate;
    UITableView *_tableView;
    unsigned int _activeIndex;
    NSArray *_mediaIDs;
    NSArray *_titles;
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSArray *mediaIDs; // @synthesize mediaIDs=_mediaIDs;
@property(nonatomic) unsigned int activeIndex; // @synthesize activeIndex=_activeIndex;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)currentActiveCellTitle;
- (void)loadView;
- (void)updateTitles:(id)arg1 mediaIDs:(id)arg2 activeIndex:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

