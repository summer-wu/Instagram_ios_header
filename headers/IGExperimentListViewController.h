//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewController.h"

@class NSArray;

@interface IGExperimentListViewController : IGPlainTableViewController
{
    NSArray *_experiments;
}

@property(readonly, nonatomic) NSArray *experiments; // @synthesize experiments=_experiments;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithTitle:(id)arg1 experiments:(id)arg2;

@end

