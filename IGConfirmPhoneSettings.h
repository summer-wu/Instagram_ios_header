//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGConfirmPhoneSettings : NSObject
{
    BOOL _robocallEnabled;
    int _smsResendDelay;
    int _numSMSResendsBeforeRobocall;
    int _robocallDelay;
}

@property(nonatomic) int robocallDelay; // @synthesize robocallDelay=_robocallDelay;
@property(nonatomic) BOOL robocallEnabled; // @synthesize robocallEnabled=_robocallEnabled;
@property(nonatomic) int numSMSResendsBeforeRobocall; // @synthesize numSMSResendsBeforeRobocall=_numSMSResendsBeforeRobocall;
@property(nonatomic) int smsResendDelay; // @synthesize smsResendDelay=_smsResendDelay;
- (id)initWithSMSResendDelay:(int)arg1 numSMSResendsBeforeRobocall:(int)arg2 robocallDelay:(int)arg3 robocallEnabled:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1;

@end

