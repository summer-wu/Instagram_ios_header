//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeOperationDelegate.h"

@class IGBulkCommentDeleteManager, IGFeedItem, IGRealtimeManager, IGUser, NSString;

@interface IGCommentThreadManager : NSObject <IGRealtimeOperationDelegate>
{
    BOOL _loadingMore;
    IGFeedItem *_feedItem;
    IGUser *_currentUser;
    id <IGCommentThreadManagerDelegate> _delegate;
    IGRealtimeManager *_realtimeManager;
    IGBulkCommentDeleteManager *_bulkCommentDeleteManager;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
}

@property(nonatomic, getter=isLoadingMore) BOOL loadingMore; // @synthesize loadingMore=_loadingMore;
@property(readonly, nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) __weak IGBulkCommentDeleteManager *bulkCommentDeleteManager; // @synthesize bulkCommentDeleteManager=_bulkCommentDeleteManager;
@property(readonly, nonatomic) IGRealtimeManager *realtimeManager; // @synthesize realtimeManager=_realtimeManager;
@property(nonatomic) __weak id <IGCommentThreadManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (void)handleRealtimeRefreshRequest;
- (id)pkForRealtimeOperation:(id)arg1;
- (void)handleRealtimeOperation:(id)arg1;
- (void)subscribeToRealtime:(id)arg1 patches:(id)arg2;
- (void)postCommentText:(id)arg1;
- (void)unsubscribeFromRealtime;
- (void)loadCommentsForNextPage:(BOOL)arg1;
- (void)loadMore;
- (void)loadAndSubscribeToRealtime;
- (id)initWithPost:(id)arg1 currentUser:(id)arg2 bulkDeleteManager:(id)arg3 loggingDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

