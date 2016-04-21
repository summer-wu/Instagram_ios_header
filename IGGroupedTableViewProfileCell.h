//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

#import "IGImageViewDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"

@class IGProfilePictureHelper, IGProfilePictureImageView, IGTextField, NSString, UIButton, UIImage, UIViewController<UITextFieldDelegate><IGProfilePictureHelperDelegate>;

@interface IGGroupedTableViewProfileCell : IGGroupedTableViewCell <IGProfilePictureImageViewDelegate, IGImageViewDelegate>
{
    IGProfilePictureHelper *_profilePictureHelper;
    IGTextField *_usernameField;
    IGTextField *_passwordField;
    IGProfilePictureImageView *_profilePictureView;
    UIViewController<UITextFieldDelegate><IGProfilePictureHelperDelegate> *_delegate;
    UIButton *_profilePictureEditButton;
}

+ (float)height;
@property(retain, nonatomic) UIButton *profilePictureEditButton; // @synthesize profilePictureEditButton=_profilePictureEditButton;
@property(nonatomic) __weak UIViewController<UITextFieldDelegate><IGProfilePictureHelperDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGProfilePictureImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(retain, nonatomic) IGTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) IGTextField *usernameField; // @synthesize usernameField=_usernameField;
- (void).cxx_destruct;
- (void)profilePictureTapped:(id)arg1;
- (void)chooseProfilePicture;
@property(retain, nonatomic) UIImage *profilePicture;
- (id)initWithProfilePictureRect:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

