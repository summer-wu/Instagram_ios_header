//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class IGAnalyticsManager, IGFeedItemTrackingManager, IGLocalNotificationManager, IGLoggedOutSessionManager, IGNavigationEventManager, IGShortcutHandler, IGSurveyManager, IGTypicalMetricsManager, NSMutableSet, NSString, NSTimer, UIWindow;

@interface AppDelegate : NSObject <UIApplicationDelegate>
{
    BOOL _handledPushNoteInDidFinishLaunching;
    BOOL _hasSetupLogging;
    UIWindow *_window;
    IGSurveyManager *_surveyManager;
    IGAnalyticsManager *_analyticsManager;
    IGFeedItemTrackingManager *_feedItemTrackingManager;
    IGNavigationEventManager *_navigationEventManager;
    IGLocalNotificationManager *_localNotificationManager;
    IGLoggedOutSessionManager *_loggedOutSessionManager;
    IGTypicalMetricsManager *_typicalMetricsManager;
    NSMutableSet *_seenErrorURLs;
    NSTimer *_memoryWarningTimer;
    IGShortcutHandler *_shortcutHandler;
}

@property(readonly, nonatomic) IGShortcutHandler *shortcutHandler; // @synthesize shortcutHandler=_shortcutHandler;
@property(retain, nonatomic) NSTimer *memoryWarningTimer; // @synthesize memoryWarningTimer=_memoryWarningTimer;
@property(nonatomic) BOOL hasSetupLogging; // @synthesize hasSetupLogging=_hasSetupLogging;
@property(retain, nonatomic) NSMutableSet *seenErrorURLs; // @synthesize seenErrorURLs=_seenErrorURLs;
@property(nonatomic) BOOL handledPushNoteInDidFinishLaunching; // @synthesize handledPushNoteInDidFinishLaunching=_handledPushNoteInDidFinishLaunching;
@property(retain, nonatomic) IGTypicalMetricsManager *typicalMetricsManager; // @synthesize typicalMetricsManager=_typicalMetricsManager;
@property(retain, nonatomic) IGLoggedOutSessionManager *loggedOutSessionManager; // @synthesize loggedOutSessionManager=_loggedOutSessionManager;
@property(retain, nonatomic) IGLocalNotificationManager *localNotificationManager; // @synthesize localNotificationManager=_localNotificationManager;
@property(retain, nonatomic) IGNavigationEventManager *navigationEventManager; // @synthesize navigationEventManager=_navigationEventManager;
@property(retain, nonatomic) IGFeedItemTrackingManager *feedItemTrackingManager; // @synthesize feedItemTrackingManager=_feedItemTrackingManager;
@property(retain, nonatomic) IGAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) IGSurveyManager *surveyManager; // @synthesize surveyManager=_surveyManager;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)configureFLEX;
- (void)toggleMemoryProfiler;
- (void)networkRequestDidFail:(id)arg1;
- (void)logMemoryCrashAndPromptToRestartIfNeeded;
- (void)fireMemoryWarning;
- (void)toggleMemoryWarnings:(BOOL)arg1;
- (void)handleMemoryWarningNotification:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)registerForPush;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)voiceOverStatusDidChange:(id)arg1;
- (void)logVoiceOverEnabledAtLaunch;
- (void)userLogout:(id)arg1;
- (void)userLoginCompleted:(id)arg1;
- (void)startMainAppAnimated:(BOOL)arg1;
- (void)setUpInstagramNotifications;
- (void)setUpDefaults;
- (void)applicationLifecycleChange:(id)arg1;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)exitIfSafe;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

