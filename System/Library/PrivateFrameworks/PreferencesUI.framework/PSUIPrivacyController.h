/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, ACAccountStore, NSString;

@interface PSUIPrivacyController : PSListController <PSListControllerTestableSpecifiers> {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
+(id)booleanCapabilitiesToTest;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_accountStore;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
-(BOOL)hasSocialSpecifiers:(id)arg1 ;
-(void)updateLocationServicesVisibility;
-(id)locationServicesEnabled:(id)arg1 ;
-(id)specifiers;
@end

