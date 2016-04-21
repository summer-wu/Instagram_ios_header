//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface FBBreakpadExceptionHandler : NSObject
{
    NSMutableSet *_breakpadExtraParameters;
    int _currentSessionGeneratedStackTracesCount;
    void *_breakpad;
    NSString *_exceptionDirectory;
}

+ (void)setHandleExcResourceMachException:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *exceptionDirectory; // @synthesize exceptionDirectory=_exceptionDirectory;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBreakpadFilterCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)tearDownExceptionHandlers;
- (id)_exceptionFilename:(id)arg1;
- (void)processReports:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)breakpadGenerateReportWithParams:(id)arg1 isQuickReport:(BOOL)arg2;
- (id)breakpadCopyLargeParamsToNewExtraFile;
- (id)generateExtraFileName;
- (void)breakpadCleanExtra:(id)arg1;
- (int)compareFileByCreationDate:(id)arg1 withFile:(id)arg2 inDirectory:(id)arg3;
- (void)process:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)process:(id)arg1;
- (void)send;
- (BOOL)checkForCrashWhileExceptionHandlingInLastSession;
- (void)resetGeneratedStackTracesCountFromUserDefaults;
- (void)incrementGeneratedStackTracesCounter;
- (int)crashReportCountExcludingExplicitlyGeneratedStacktraces;
- (int)crashReportCount;
- (id)latestBreakpadCrashReportWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)latestBreakpadCrashReport;
- (void)setExceptionInfoString:(id)arg1 forKey:(id)arg2;
- (void)setReportUrl:(id)arg1;
- (id)genericGetBreakpadParamForKey:(id)arg1;
- (void)genericSetBreakpadParamValue:(id)arg1 forKey:(id)arg2;
- (void)genericSetBreakpadUploadParamValue:(id)arg1 forKey:(id)arg2;
- (id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6;
- (id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4;
- (id)initWithUrl:(id)arg1 exceptionParams:(id)arg2;

@end

