/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _SFURLSpoofingMitigator : NSObject {

	NSDate* _dateOfStartOfLastProvisionalNavigation;
	unsigned long long _recentlyInterruptedNavigationCount;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)didStartProvisionalNavigation;
-(void)didCommitNavigation;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
@end
