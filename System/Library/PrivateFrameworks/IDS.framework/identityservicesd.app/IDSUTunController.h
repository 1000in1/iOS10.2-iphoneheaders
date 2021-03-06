/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPairingManagerDelegate.h>

@protocol OS_dispatch_semaphore;
@class IDSLinkManager, NSObject, NSMutableDictionary, NSString;

@interface IDSUTunController : NSObject <IDSPairingManagerDelegate> {

	SimpleNSStringToObjectTable* _deviceConnectionInfoTableByCbuuid;
	opaque_pthread_mutex_t _deviceConnectionInfoTableByCbuuidLock;
	IDSLinkManager* _linkManager;
	BOOL _logPackets;
	BOOL _vifShouldReadMultiple;
	unsigned _vifMaxPendingPackets;
	BOOL _vifUseChannel;
	BOOL _hasFixedDestination;
	BOOL _encryptionEnabled;
	BOOL _controlChannelEncryptionDisabled;
	NSObject*<OS_dispatch_semaphore> _controlChannelVersionCacheLock;
	NSMutableDictionary* _controlChannelVersionCache;
	BOOL _isSimulateResetLoopTest;

}

@property (nonatomic,readonly) IDSLinkManager * linkManager;              //@synthesize linkManager=_linkManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)perServiceDataTransferredForDevice:(id)arg1 services:(id)arg2 ;
-(id)perServiceDataSentForDevice:(id)arg1 services:(id)arg2 ;
-(id)perServiceDataReceivedForDevice:(id)arg1 services:(id)arg2 ;
-(id)copyLinkStatsDict;
-(unsigned long long)totalPacketsReceivedForDevice:(id)arg1 services:(id)arg2 ;
-(void)stopUDPGlobalLinkForDefaultPairedDevice;
-(void)startUDPGlobalLinkForDevice:(id)arg1 ;
-(void)connectGlobalLink:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(/*^block*/id)arg3 ;
-(void)onTransportThread_SendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3 ;
-(void)getLinkInformationForDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onTransportThread_SetDefaultUnderlyingLink:(id)arg1 linkID:(char)arg2 ;
-(void)onTransportThread_SetPacketNotificationFilter:(id)arg1 linkID:(char)arg2 uniqueTag:(unsigned)arg3 isEnabled:(BOOL)arg4 ;
-(void)onTransportThread_DropIPPackets:(id)arg1 linkID:(char)arg2 payloadArray:(id)arg3 ;
-(void)onTransportThread_StopKeepAlive:(id)arg1 linkIDs:(id)arg2 ;
-(void)onTransportThread_UpdateProtocolQualityOfService:(id)arg1 linkID:(char)arg2 isGood:(BOOL)arg3 ;
-(void)onTransportThread_CurrentCellularSignalStrength:(id)arg1 signalRaw:(int*)arg2 signalStrength:(int*)arg3 signalGrade:(int*)arg4 ;
-(unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBuffer:(SCD_Struct_ID11*)arg2 ;
-(void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(/*^block*/id)arg3 ;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(BOOL)arg2 remotePartyID:(id)arg3 useStunMICheck:(BOOL)arg4 ;
-(void)stopUDPGlobalLinkForDevice:(id)arg1 ;
-(void)stopGlobalLink:(id)arg1 ;
-(void)disconnectGlobalLink:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(BOOL)link:(id)arg1 didReceivePacket:(SCD_Struct_ID11*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)link:(id)arg1 hasSpaceAvailable:(BOOL)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(void)tearDownEncryptionForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)obliterateConnectionInfoWithCompletionBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 ;
-(void)cleanupSocketsForClient:(id)arg1 ;
-(void)closeSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned)arg2 negotiationData:(id)arg3 ;
-(void)sendSuspendOTRNegotiationMessage:(id)arg1 ;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(void)obliterateConnectionInfo;
-(id)onTransportThread_PerServiceDataTransferredForDevice:(id)arg1 services:(id)arg2 ;
-(void)startGlobalLinkForDefaultPairedDevice;
-(void)connectGlobalLinkForDefaultPairedDevice:(id)arg1 ;
-(void)suspendSocketWithOptions:(id)arg1 ;
-(void)resumeSocketWithOptions:(id)arg1 ;
-(IDSLinkManager *)linkManager;
-(void)_reloadSettings;
-(void)resetTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2 ;
-(void)removeConnection:(id)arg1 fromDeviceConnectionInfo:(id)arg2 removeCode:(long long)arg3 removeReason:(id)arg4 ;
-(unsigned char)handleUtunChannelWrite:(id)arg1 source:(sockaddr*)arg2 destination:(sockaddr*)arg3 upperProtocol:(unsigned char)arg4 bytes:(const void*)arg5 bytesLen:(unsigned long long)arg6 ;
-(void)handleIPPayload:(const void*)arg1 bytesLength:(unsigned long long)arg2 source:(sockaddr*)arg3 destination:(sockaddr*)arg4 upperProtocol:(unsigned char)arg5 forDeviceConnectionInfo:(id)arg6 flush:(BOOL)arg7 callerShouldStop:(BOOL*)arg8 ;
-(void)resetAllConnectionsForDevice:(id)arg1 ;
-(void)startControlChannelWithDevice:(id)arg1 ;
-(void)receiveControlChannelMessage:(id)arg1 fromCbuuid:(id)arg2 deviceUniqueID:(id)arg3 ;
-(void)handleUtunChannelRead:(id)arg1 limit:(unsigned)arg2 ;
-(void)obliterateConnectionInfoForCBUUID:(id)arg1 completionBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)internalOpenSocketWithDestination:(id)arg1 localSA:(id)arg2 remoteSA:(id)arg3 protocol:(int)arg4 trafficClass:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)checkSuspendTrafficForDevice:(id)arg1 wait:(BOOL)arg2 ;
-(void)startCompressionForConnection:(id)arg1 deviceConnectionInfo:(id)arg2 ;
-(BOOL)processCompressionRequest:(id)arg1 fromDeviceConnectionInfo:(id)arg2 ;
-(BOOL)processCompressionResponse:(id)arg1 fromDeviceConnectionInfo:(id)arg2 ;
-(id)defaultPairdDeviceOptions;
-(id)setupNewDeviceConnectionInfoForCbuuid:(id)arg1 deviceUniqueID:(id)arg2 defaultPairedDeviceOptions:(id)arg3 ;
-(void)setupDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2 ;
-(void)closeDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2 ;
-(void)doCheckSuspendTrafficForDevice:(id)arg1 ;
-(BOOL)handleIncomingPacket:(SCD_Struct_ID11*)arg1 fromDeviceToken:(id)arg2 ;
-(id)initWithName:(id)arg1 address:(id)arg2 andTestTransport:(id)arg3 ;
-(id)controlChannelVersionForCbuuid:(id)arg1 ;
-(unsigned long long)totalPacketsSentForDevice:(id)arg1 services:(id)arg2 ;
-(id)init;
-(void)startLocalSetup;
-(void)addPairedDevice:(id)arg1 ;
-(void)connectPairedDevice:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 ;
-(void)closeSocketWithOptions:(id)arg1 ;
-(void)setPreferInfraWiFi:(BOOL)arg1 ;
-(void)clearStats;
-(void)setLinkPreferences:(id)arg1 ;
-(void)reloadSettings;
@end

