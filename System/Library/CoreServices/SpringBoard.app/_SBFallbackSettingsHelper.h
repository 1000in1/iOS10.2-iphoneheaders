/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBVolumePressBandit.h>

@class NSTimer, NSString;

@interface _SBFallbackSettingsHelper : NSObject <SBVolumePressBandit> {

	NSTimer* _clearTimer;
	unsigned long long _pressesWithinInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)useFallbackSettingsHelperOnThisDevice;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)handleTimerFired:(id)arg1 ;
-(BOOL)shouldUseFallbackAction;
-(void)reset;
@end

