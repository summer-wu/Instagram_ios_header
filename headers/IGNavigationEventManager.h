//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIViewController;

@interface IGNavigationEventManager : NSObject
{
    UIViewController *_currentTopViewController;
    NSMutableDictionary *_logResultsForLoggable;
}

+ (id)currentModule;
+ (id)lastKNavigationEvents:(unsigned int)arg1;
+ (id)sharedNavigationEventManager;
@property(retain, nonatomic) NSMutableDictionary *logResultsForLoggable; // @synthesize logResultsForLoggable=_logResultsForLoggable;
@property(nonatomic) __weak UIViewController *currentTopViewController; // @synthesize currentTopViewController=_currentTopViewController;
- (void).cxx_destruct;
- (void)logPerfLogEvent:(unsigned int)arg1 withUserInfo:(id)arg2;
- (void)associateUIPerfLogResult:(id)arg1 forLoggable:(id)arg2;
- (void)logNavigationEvent;
- (void)mergeCurrentNavigationEventWithNavigationInfo:(id)arg1;
- (void)saveNewNavigationEventForAppearingViewController:(id)arg1;
- (void)flushCurrentNavigationEventForAppearingViewController:(id)arg1;
- (void)handleNavigationViaClickPoint:(id)arg1 extraInfo:(id)arg2;
- (unsigned int)navigationDepthForViewController:(id)arg1;
- (void)handleNavigationViaClickPoint:(id)arg1;
- (void)urlTapped:(id)arg1;
- (void)moreTapped:(id)arg1;
- (void)commentButtonTapped:(id)arg1;
- (void)locationTapped:(id)arg1;
- (void)userTapped:(id)arg1;
- (void)handleAppDidForeground:(id)arg1;
- (void)handleViewDidAppear:(id)arg1;
- (void)addNavigationEvent:(id)arg1;
- (id)init;
- (void)dealloc;

@end

