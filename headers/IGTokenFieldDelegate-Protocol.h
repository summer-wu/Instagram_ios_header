//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGTokenField, IGUser, NSString, UIView;

@protocol IGTokenFieldDelegate <NSObject>
- (void)tokenFieldWillBeginEditing:(IGTokenField *)arg1;
- (void)tokenField:(IGTokenField *)arg1 didDeleteToken:(IGUser *)arg2;
- (void)tokenField:(IGTokenField *)arg1 didChangeQuery:(NSString *)arg2;
- (void)tokenFieldDidRequestSearch:(IGTokenField *)arg1;
- (BOOL)tokenFieldCanFinishEditing:(IGTokenField *)arg1;
- (void)tokenFieldDidBeginEditing:(IGTokenField *)arg1;
- (void)tokenFieldWillFocusUser:(IGTokenField *)arg1;
- (UIView *)tokenFieldViewForTokenOverlay:(IGTokenField *)arg1;
@end

