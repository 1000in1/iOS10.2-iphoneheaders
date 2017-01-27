/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTDaemonClientRegistrarApplicationPredictionProtocol.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarVehicleEventProtocol.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarRoomPredictionProtocol.h>
#import <libobjc.A.dylib/RTDaemonProtocol.h>

@protocol RTClientListenerProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSMutableDictionary, NSObject, NSMutableArray, RTDaemonClientRegistrarApplicationPrediction, RTDaemonClientRegistrarVehicleEvent, RTDaemonClientRegistrarRoomPrediction;

@interface RTDaemonClient : NSObject <RTDaemonClientRegistrarApplicationPredictionProtocol, RTDaemonClientRegistrarVehicleEventProtocol, RTDaemonClientRegistrarRoomPredictionProtocol, RTDaemonProtocol> {

	BOOL _enabled;
	BOOL _supported;
	BOOL _monitorVisits;
	BOOL _leechVisits;
	BOOL _monitorNextPredictedLocationsOfInterest;
	int _processIdentifier;
	NSXPCConnection* _xpcConnection;
	NSString* _restorationIdentifier;
	id<RTClientListenerProtocol> _clientManagerDelegate;
	NSMutableDictionary* _restorationData;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _executablePath;
	NSString* _signingIdentifier;
	NSString* _bundleIdentifier;
	unsigned long long _monitoredScenarioTriggerTypes;
	NSMutableDictionary* _pendingScenarioInvocations;
	NSMutableArray* _pendingNextPredictedLocationsOfInterestInvocations;
	RTDaemonClientRegistrarApplicationPrediction* _predictedApplicationRegistrar;
	RTDaemonClientRegistrarVehicleEvent* _vehicleEventRegistrar;
	RTDaemonClientRegistrarRoomPrediction* _predictedRoomRegistrar;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * executablePath;                                                                   //@synthesize executablePath=_executablePath - In the implementation block
@property (assign,nonatomic) int processIdentifier;                                                                     //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * signingIdentifier;                                                                //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                                            //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) unsigned long long monitoredScenarioTriggerTypes;                                          //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (assign,nonatomic) BOOL monitorVisits;                                                                        //@synthesize monitorVisits=_monitorVisits - In the implementation block
@property (assign,nonatomic) BOOL leechVisits;                                                                          //@synthesize leechVisits=_leechVisits - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restorationData;                                                     //@synthesize restorationData=_restorationData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingScenarioInvocations;                                          //@synthesize pendingScenarioInvocations=_pendingScenarioInvocations - In the implementation block
@property (assign,nonatomic) BOOL monitorNextPredictedLocationsOfInterest;                                              //@synthesize monitorNextPredictedLocationsOfInterest=_monitorNextPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingNextPredictedLocationsOfInterestInvocations;                       //@synthesize pendingNextPredictedLocationsOfInterestInvocations=_pendingNextPredictedLocationsOfInterestInvocations - In the implementation block
@property (nonatomic,retain) RTDaemonClientRegistrarApplicationPrediction * predictedApplicationRegistrar;              //@synthesize predictedApplicationRegistrar=_predictedApplicationRegistrar - In the implementation block
@property (nonatomic,retain) RTDaemonClientRegistrarVehicleEvent * vehicleEventRegistrar;                               //@synthesize vehicleEventRegistrar=_vehicleEventRegistrar - In the implementation block
@property (nonatomic,retain) RTDaemonClientRegistrarRoomPrediction * predictedRoomRegistrar;                            //@synthesize predictedRoomRegistrar=_predictedRoomRegistrar - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSString * restorationIdentifier;                                                          //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<RTClientListenerProtocol> clientManagerDelegate;                                 //@synthesize clientManagerDelegate=_clientManagerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSString *)restorationIdentifier;
-(id)initWithQueue:(id)arg1 ;
-(NSString *)executablePath;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)processIdentifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)shutdown;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)fetchPredictedApplications:(/*^block*/id)arg1 ;
-(BOOL)supported;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(id)initWithRestorationData:(id)arg1 queue:(id)arg2 ;
-(RTDaemonClientRegistrarApplicationPrediction *)predictedApplicationRegistrar;
-(RTDaemonClientRegistrarVehicleEvent *)vehicleEventRegistrar;
-(void)onRoutineEnabled:(id)arg1 ;
-(void)restore;
-(NSString *)signingIdentifier;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4 ;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1 ;
-(void)fetchBBPluginSupportedWithReply:(/*^block*/id)arg1 ;
-(void)clearRoutine;
-(void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchAllLocationsOfInterestForSettingsWithReply:(/*^block*/id)arg1 ;
-(void)fetchPredictedConditionsForAction:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
-(void)startLeechingVisits;
-(void)stopLeechingVisits;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestAtCurrentLocationWithReply:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestAtCachedLocationWithReply:(/*^block*/id)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1 ;
-(void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 ;
-(void)stopMonitoringForPredictedApplications;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchPredictedApplicationsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startMonitoringForPredictedRooms;
-(void)stopMonitoringForPredictedRooms;
-(void)fetchPredictedRoomsAtCurrentLocationWithReply:(/*^block*/id)arg1 ;
-(void)startMonitoringNextPredictedLocationsOfInterest;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)clearAllVehicleEventsWithReply:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 ;
-(void)startMonitoringVehicleEvents;
-(void)stopMonitoringVehicleEvents;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItemStorage:(id)arg3 customLabel:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(id<RTClientListenerProtocol>)clientManagerDelegate;
-(void)setSigningIdentifier:(NSString *)arg1 ;
-(id)_preflightClientConnection:(id)arg1 withEntitlements:(id)arg2 ;
-(void)onVisitManagerNotification:(id)arg1 ;
-(void)setMonitorVisits:(BOOL)arg1 ;
-(void)setLeechVisits:(BOOL)arg1 ;
-(BOOL)monitorVisits;
-(BOOL)leechVisits;
-(void)_onVisitManagerNotification:(id)arg1 ;
-(BOOL)monitorNextPredictedLocationsOfInterest;
-(void)_onNextPredictedLocationsOfInterest:(id)arg1 ;
-(void)_startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(NSMutableDictionary *)restorationData;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(NSMutableDictionary *)pendingScenarioInvocations;
-(void)setMonitoredScenarioTriggerTypes:(unsigned long long)arg1 ;
-(void)onScenarioTriggerManagerNotification:(id)arg1 ;
-(void)_stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)launchClient;
-(void)_onScenarioTrigger:(id)arg1 ;
-(void)_startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 ;
-(void)applicationPredictionRegistrar:(id)arg1 didReceivePredictedApplications:(id)arg2 error:(id)arg3 ;
-(void)_startMonitoringForPredictedRooms;
-(RTDaemonClientRegistrarRoomPrediction *)predictedRoomRegistrar;
-(void)roomPredictionRegistrar:(id)arg1 didReceivePredictedRooms:(id)arg2 error:(id)arg3 ;
-(void)_startMonitoringNextPredictedLocationsOfInterest;
-(void)_startMonitoringVehicleEvents;
-(void)setMonitorNextPredictedLocationsOfInterest:(BOOL)arg1 ;
-(NSMutableArray *)pendingNextPredictedLocationsOfInterestInvocations;
-(void)onDeviceLocationPredictorNotification:(id)arg1 ;
-(void)vehicleEventRegistrar:(id)arg1 didReceiveVehicleEvents:(id)arg2 error:(id)arg3 ;
-(BOOL)hasReasonToOutliveClientConnection;
-(void)setClientManagerDelegate:(id<RTClientListenerProtocol>)arg1 ;
-(void)setRestorationData:(NSMutableDictionary *)arg1 ;
-(void)setPendingScenarioInvocations:(NSMutableDictionary *)arg1 ;
-(void)setPendingNextPredictedLocationsOfInterestInvocations:(NSMutableArray *)arg1 ;
-(void)setPredictedApplicationRegistrar:(RTDaemonClientRegistrarApplicationPrediction *)arg1 ;
-(void)setVehicleEventRegistrar:(RTDaemonClientRegistrarVehicleEvent *)arg1 ;
-(void)setPredictedRoomRegistrar:(RTDaemonClientRegistrarRoomPrediction *)arg1 ;
@end
