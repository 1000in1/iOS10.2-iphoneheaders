/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@protocol OS_dispatch_source;
@class State, NSArray, NetworkAnalyticsStateRelay, NSObject, MotionStateRelay, SystemSettingsRelay, AWDAgent, NSDate, NSString;

@interface CellFallbackHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	State* currentState;
	NSArray* states;
	NetworkAnalyticsStateRelay* cellRelay;
	NetworkAnalyticsStateRelay* wifiRelay;
	id relayReadyObserver;
	id foregroundObserver;
	id polledFlowObserver;
	int notifyToken;
	NSObject*<OS_dispatch_source> foregroundTimer;
	unsigned foregroundState;
	int screenStateToken;
	NSObject*<OS_dispatch_source> motionTimer;
	unsigned motionDetectorState;
	MotionStateRelay* motionRelay;
	SystemSettingsRelay* settingsRelay;
	unsigned administrativeState;
	AWDAgent* awdAgent;
	unsigned long long appBlacklistsSettleTime;
	unsigned long long appBlacklistsFreePassCellMax;
	unsigned long long appBlacklistsFreePassFlowMax;
	double appBlacklistsRNFToCellRatio;
	tcp_connection_fallback_watch_sRef cellFallbackObserver;
	BOOL cellFallbackInUse;
	NSObject*<OS_dispatch_source> cellFallbackTimer;
	NSObject*<OS_dispatch_source> elevatedStateTimer;
	NSDate* lastCellFallbackTime;
	unsigned long long lastCellFallbackUsageMarker;
	BOOL _systemForeground;
	BOOL _screenNotDark;
	BOOL _rnfActivated;
	BOOL _wifiCallUnderway;

}

@property (assign) BOOL systemForeground;                           //@synthesize systemForeground=_systemForeground - In the implementation block
@property (assign) BOOL screenNotDark;                              //@synthesize screenNotDark=_screenNotDark - In the implementation block
@property (assign) BOOL rnfActivated;                               //@synthesize rnfActivated=_rnfActivated - In the implementation block
@property (assign) BOOL wifiCallUnderway;                           //@synthesize wifiCallUnderway=_wifiCallUnderway - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(void)canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_dumpState;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_completeInitialization;
-(void)_administrativeDisable;
-(void)_bringStateToIdle;
-(void)_administrativeEnable;
-(void)setSystemForeground:(BOOL)arg1 ;
-(void)_updateCellFallbackState;
-(void)setScreenNotDark:(BOOL)arg1 ;
-(BOOL)screenNotDark;
-(BOOL)postStack:(unsigned)arg1 outValue:(BOOL*)arg2 ;
-(void)postMotionDetector:(unsigned)arg1 ;
-(void)postHasAdviceNotification:(BOOL)arg1 ;
-(void)setRnfActivated:(BOOL)arg1 ;
-(void)postUpwards:(long long)arg1 ;
-(void)stopElevatedStateWatchdog;
-(void)startElevatedStateWatchdogWithPeriod:(unsigned long long)arg1 ;
-(BOOL)wifiCallUnderway;
-(BOOL)systemForeground;
-(void)_toggleElevatedState;
-(int)_motionToAwdCode;
-(void)_canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_isAppNameListed:(id)arg1 inListType:(long long)arg2 ;
-(id)_createAndInitializeAWDMetricForAppQuery:(id)arg1 verdictCode:(int)arg2 reasonCode:(int)arg3 ;
-(void)setWifiCallUnderway:(BOOL)arg1 ;
-(BOOL)rnfActivated;
@end

