//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCameraViewControllerProtocol.h"

@class IGCameraNavigationController, NSString;

@interface IGBaseCameraViewController : IGViewController <IGCameraViewControllerProtocol>
{
}

@property(readonly, nonatomic) IGCameraNavigationController *navController;
- (BOOL)prefersNavbarBottomBorderHidden;
- (BOOL)overlayIsOpaque;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

