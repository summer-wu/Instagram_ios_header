//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIRefreshControl.h"

@class NSString;

@interface RCTRefreshControl : UIRefreshControl
{
    BOOL _initialRefreshingState;
    BOOL _isInitialRender;
    CDUnknownBlockType _onRefresh;
}

@property(copy, nonatomic) CDUnknownBlockType onRefresh; // @synthesize onRefresh=_onRefresh;
- (void).cxx_destruct;
- (void)refreshControlValueChanged;
- (void)setRefreshing:(BOOL)arg1;
@property(copy, nonatomic) NSString *title;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

