/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTXPCService.h>

@class NSMutableSet, VTSiriPHash, NSString;

@interface VTXPCConnection : NSObject <VTXPCService> {

	NSMutableSet* _activationAssertions;
	BOOL _isPhraseSpotterBypassed;
	VTSiriPHash* _hasher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(oneway void)getTestResponse:(/*^block*/id)arg1 ;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3 ;
-(oneway void)notifyVoiceTriggeredSiriSessionCancelled;
-(oneway void)notifySecondChanceRequest;
-(oneway void)notifyTriggerEventRequest;
-(oneway void)queryLastTriggerEventTypeWithReply:(/*^block*/id)arg1 ;
-(oneway void)resetAssertions;
-(oneway void)clearVoiceTriggerCount;
-(oneway void)getVoiceTriggerCountWithReply:(/*^block*/id)arg1 ;
-(oneway void)getFirstChanceAudioBufferWithReply:(/*^block*/id)arg1 ;
-(oneway void)getFirstChanceVTEventInfoWithReply:(/*^block*/id)arg1 ;
-(oneway void)getFirstChanceTriggeredDateWithReply:(/*^block*/id)arg1 ;
-(void)handleDisconnect;
-(void)_setPhraseSpotterBypassing:(BOOL)arg1 ;
@end

