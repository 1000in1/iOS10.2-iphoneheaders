/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WPHeySiriProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSString, NSObject, WPHeySiri, _DKKnowledgeStore, NSUUID, NSDate;

@interface AFMyriadCoordinator : NSObject <WPHeySiriProtocol> {

	unsigned long long _advertisingState;
	NSMutableDictionary* _replies;
	NSMutableDictionary* _replyCounts;
	id _delegate;
	NSString* _deviceClass;
	int _deviceAdjust;
	NSObject*<OS_dispatch_queue> _myriadListenQueue;
	NSObject*<OS_dispatch_queue> _myriadTimerQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_source> _recentLossTimer;
	NSObject*<OS_dispatch_source> _delayedEndTimer;
	BOOL _listenTimerIsRunning;
	BOOL _coordinationEnabled;
	BOOL _clientIsDirectActivating;
	BOOL _clientRecentlyLostElection;
	BOOL _clientLostDueToTrumping;
	BOOL _clientIsListeningAfterRecentWin;
	WPHeySiri* _heySiriBTLE;
	_DKKnowledgeStore* _coreDuetStore;
	NSUUID* _designatedSelfID;
	NSDate* _lastSiriActivationTime;
	unsigned short _lastPHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentCoordinator;
+(void)clearCurrentCoordinator;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)_initDeviceClassAndAdjustments;
-(id)voiceTriggerRecord;
-(void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
-(id)directTriggerRecord;
-(id)responseObject:(unsigned short)arg1 ;
-(void)resetReplies;
-(void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
-(void)_startListenTimerFor:(float)arg1 ;
-(void)_startPostScanListenTimerFor:(float)arg1 ;
-(BOOL)_shouldContinueFor:(id)arg1 ;
-(void)_handleRecentClientElectionLoss;
-(void)endAdvertisingWithDeviceProhibitions:(id)arg1 ;
-(unsigned short)recentEventBump;
-(id)_sortedReplies;
-(void)startResponseAdvertising:(unsigned short)arg1 ;
-(id)activityEventStream;
-(void)logCoreDuetResults:(id)arg1 ;
-(void)heySiriDidUpdateState:(id)arg1 ;
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)heySiriStartedAdvertising:(id)arg1 ;
-(void)heySiriAdvertisingPending:(id)arg1 ;
-(void)heySiriStoppedAdvertising:(id)arg1 ;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)heySiriStartedScanning:(id)arg1 ;
-(void)heySiriStoppedScanning:(id)arg1 ;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)startAdvertisingFromVoiceTrigger;
-(void)startWatchAdvertisingFromVoiceTrigger;
-(void)startAdvertisingFromDirectTrigger;
-(void)advertiseWith:(id)arg1 ;
-(void)endAdvertisingAfterDelay:(float)arg1 ;
-(void)_startListenTimer;
-(void)startListening;
-(void)_cancelTimer;
-(void)stopListening;
-(void)endAdvertising;
@end
