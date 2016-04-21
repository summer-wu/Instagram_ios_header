//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGNewsDataSourceSection.h"
#import "IGNewsTableViewCellDelegate.h"
#import "IGRaindropAnalyticsDelegate.h"
#import "IGWebViewTableViewCellDelegate.h"

@class NSMutableDictionary, NSOrderedSet, NSString;

@interface IGNewsDataSourceStoriesSection : NSObject <IGWebViewTableViewCellDelegate, IGRaindropAnalyticsDelegate, IGNewsTableViewCellDelegate, IGNewsDataSourceSection>
{
    NSString *_title;
    id <IGNewsDataSourceSectionDelegate> _delegate;
    NSOrderedSet *_stories;
    NSMutableDictionary *_webViewCellSizes;
}

+ (id)sectionWithTitle:(id)arg1 stories:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *webViewCellSizes; // @synthesize webViewCellSizes=_webViewCellSizes;
@property(copy, nonatomic) NSOrderedSet *stories; // @synthesize stories=_stories;
@property(nonatomic) __weak id <IGNewsDataSourceSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) NSString *title;
- (void)setTitle:(id)arg1;
- (void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3;
- (void)webNewsCell:(id)arg1 didCalculateHeight:(float)arg2;
- (void)newsCell:(id)arg1 openURL:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(unsigned int)arg2;
- (void)setUpTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(unsigned int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(unsigned int)arg2;
@property(readonly) unsigned int *numberOfRows;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
