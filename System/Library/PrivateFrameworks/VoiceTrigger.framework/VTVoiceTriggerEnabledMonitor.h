/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTVoiceTriggerEnabledMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _isVoiceTriggerEnabled;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(BOOL)_checkVoiceTriggerEnabled;
-(void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg1 ;
-(void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg1 ;
@end

