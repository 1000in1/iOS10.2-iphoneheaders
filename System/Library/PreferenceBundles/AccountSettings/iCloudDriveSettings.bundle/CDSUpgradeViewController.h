/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol CDSUpgradeViewControllerDelegate;
@class UIScrollView, UIView, UIImageView, UILabel, UIButton, UIActivityIndicatorView, NSArray, NSDictionary;

@interface CDSUpgradeViewController : ACUIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UIImageView* _cloudDriveLogo;
	UILabel* _titleLabel;
	UILabel* _warningLabel;
	UIButton* _upgradeButton;
	UIActivityIndicatorView* _spinner;
	NSArray* _devicesThatNeedUpgrade;
	NSArray* _devicesThatCannotUpgrade;
	NSDictionary* _plainTextAttributes;
	NSDictionary* _boldTextAttributes;
	NSDictionary* _compactBoldTextAttributes;
	id<CDSUpgradeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CDSUpgradeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)_heightForAttributedTextInLabel:(id)arg1 ;
-(id)_warningForSomeDevicesBeingEligibleForUpgrade;
-(void)_showFailedUpgradeAlert;
-(id)_upgradeWarningText;
-(id)_warningForAllDevicesBeingIneligibleForUpgrade;
-(void)_loadListOfDevicesImpactedByMigration;
-(double)_heightForText:(id)arg1 withFont:(id)arg2 constrainedToWidth:(double)arg3 ;
-(id)_commaSeparatedStringWithBoldNamesForDevices:(id)arg1 ;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(void)_handleSaveCompletionForAccount:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)init;
-(void)setDelegate:(id<CDSUpgradeViewControllerDelegate>)arg1 ;
-(id<CDSUpgradeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

