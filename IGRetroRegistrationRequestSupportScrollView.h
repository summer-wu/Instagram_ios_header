//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class IGRetroRegistrationNextButton, IGRetroRegistrationTextField, IGRetroRegistrationTextView, UIButton, UILabel, UITableView, UIView;

@interface IGRetroRegistrationRequestSupportScrollView : UIScrollView
{
    BOOL _showReasonTable;
    IGRetroRegistrationNextButton *_requestSupportButton;
    IGRetroRegistrationTextField *_emailField;
    IGRetroRegistrationTextField *_contactEmailField;
    IGRetroRegistrationTextView *_additionalInfoField;
    UILabel *_descriptionLabel;
    UITableView *_accountTypeTableView;
    UITableView *_reasonTableView;
    UIButton *_footerButton;
    UILabel *_titleLabel;
    UIView *_footerViewSeperator;
    UIView *_footerView;
}

+ (id)createDescriptionLabel;
+ (id)createTitleLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *footerViewSeperator; // @synthesize footerViewSeperator=_footerViewSeperator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL showReasonTable; // @synthesize showReasonTable=_showReasonTable;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UITableView *reasonTableView; // @synthesize reasonTableView=_reasonTableView;
@property(retain, nonatomic) UITableView *accountTypeTableView; // @synthesize accountTypeTableView=_accountTypeTableView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) IGRetroRegistrationTextView *additionalInfoField; // @synthesize additionalInfoField=_additionalInfoField;
@property(retain, nonatomic) IGRetroRegistrationTextField *contactEmailField; // @synthesize contactEmailField=_contactEmailField;
@property(retain, nonatomic) IGRetroRegistrationTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) IGRetroRegistrationNextButton *requestSupportButton; // @synthesize requestSupportButton=_requestSupportButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

