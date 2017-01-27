/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/MRCryptoPairingSessionDelegate.h>
#import <mediaremoted/MRDTelevisionServerNetworkServiceDelegate.h>
#import <mediaremoted/MRDTelevisionStateObserverDelegate.h>
#import <mediaremoted/MRDTelevisionTextEditingServiceDelegate.h>
#import <libobjc.A.dylib/MRTelevisionClientConnectionDelegate.h>
#import <mediaremoted/MRDTelevisionGameControllerServerDelegate.h>
#import <libobjc.A.dylib/MRDeviceInfoObserving.h>
#import <mediaremoted/MRDPinPairingDialogDelagate.h>
#import <mediaremoted/MRDSleepObserverDelegate.h>
#import <mediaremoted/MRDXPCMessageHandling.h>

@protocol OS_dispatch_queue, MRDTelevisionRemoteDelegate;
@class MRDTelevisionServerNetworkService, NSRunLoop, NSMutableSet, NSObject, MRDSystemHIDEventManager, MRDTelevisionStateObserver, MRDTelevisionGameControllerServer, MRDPinPairingDialog, MRDeviceInfoObserver, MRDSleepObserver, MRDAVRoutingDataSource, NSArray, NSString;

@interface MRDTelevisionRemoteServer : NSObject <NSStreamDelegate, MRCryptoPairingSessionDelegate, MRDTelevisionServerNetworkServiceDelegate, MRDTelevisionStateObserverDelegate, MRDTelevisionTextEditingServiceDelegate, MRTelevisionClientConnectionDelegate, MRDTelevisionGameControllerServerDelegate, MRDeviceInfoObserving, MRDPinPairingDialogDelagate, MRDSleepObserverDelegate, MRDXPCMessageHandling> {

	MRDTelevisionServerNetworkService* _connectionBrowser;
	NSRunLoop* _streamsRunloop;
	NSMutableSet* _connectedClients;
	NSMutableSet* _televisionEndpoints;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _serverIsRunning;
	unsigned _gameControllerInputMode;
	BOOL _hiliteMode;
	MRDSystemHIDEventManager* _hidEventManager;
	MRDTelevisionStateObserver* _stateObserver;
	MRDTelevisionGameControllerServer* _gameControllerServer;
	MRDPinPairingDialog* _pinPairingDialog;
	MRDeviceInfoObserver* _deviceInfoObserver;
	MRDSleepObserver* _sleepObserver;
	MRDAVRoutingDataSource* _routingDataSource;
	id<MRDTelevisionRemoteDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * clients; 
@property (nonatomic,readonly) NSArray * endpoints; 
@property (nonatomic,readonly) MRDAVRoutingDataSource * routingDataSource;              //@synthesize routingDataSource=_routingDataSource - In the implementation block
@property (assign,nonatomic) id<MRDTelevisionRemoteDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)minimumSupportedProtocolVersion;
+(unsigned long long)minimumSupportedHangdogApplicationVersion;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(id)initWithRoutingDataSource:(id)arg1 ;
-(MRDAVRoutingDataSource *)routingDataSource;
-(void)connectionBrowser:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)pinPairingDialogDidClose:(id)arg1 forClient:(id)arg2 userCancelled:(BOOL)arg3 ;
-(void)stateObserver:(id)arg1 didReceiveNotification:(id)arg2 ;
-(void)stateObserver:(id)arg1 didReceiveStateChange:(id)arg2 ;
-(void)stateObserver:(id)arg1 didReceiveArtworkChange:(id)arg2 ;
-(void)_handleClientConnection:(id)arg1 ;
-(BOOL)_verifyClientVersionCompatibility:(id)arg1 withError:(id*)arg2 ;
-(void)_handleDeviceInfoRequest:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleCryptoPairingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleReceivedCommand:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRegisterHIDDeviceMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleReceivedButtonEvent:(MRHIDButtonEvent)arg1 fromClient:(id)arg2 ;
-(void)_handleVirtualTouchEventMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleClientUpdatesConfigMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRegisterGameControllerMessage:(id)arg1 client:(id)arg2 ;
-(void)_handleGetKeyboardSessionMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTextInputMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRegisterVoiceInputDeviceMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleReceivedVoiceInputMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPlaybackQueueMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleDeviceInfoUpdateMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetConnectionStateMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetHiliteModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_wakeTelevision:(BOOL)arg1 dismissScreenSaver:(BOOL)arg2 ;
-(void)_handleGenericMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_disconnectClient:(id)arg1 ;
-(void)_sendStateUpdateMessageFromSource:(long long)arg1 usingCreateBlock:(/*^block*/id)arg2 ;
-(id)_clientForPairingSession:(id)arg1 ;
-(void)_notifyAndDisconnectClient:(id)arg1 withError:(id)arg2 ;
-(void)_setGameControllerInputMode:(unsigned)arg1 ;
-(void)_handleGetInputModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetInputModeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleDeletePairingIdentityMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetPairedDevicesMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleDeletePairedDeviceMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetMessageLogging:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetAllowPairingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetAllowPairingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleTelevisionEndpointAvailableMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSendTelevisionCustomDataMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_notifyAndDisconnectClients:(id)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_findClientIf:(/*^block*/id)arg1 ;
-(BOOL)_shouldSendStateUpdateMessageFromSource:(long long)arg1 toClient:(id)arg2 ;
-(id)_clientForIdentifier:(id)arg1 ;
-(id)_unpair:(id)arg1 ;
-(void)stateObserver:(id)arg1 didReceiveVolumeControlReadyChange:(BOOL)arg2 ;
-(void)gameControllerServer:(id)arg1 propertiesDidChange:(void*)arg2 forController:(unsigned long long)arg3 fromClient:(id)arg4 ;
-(void)gameControllerServerDidInterrupt:(id)arg1 ;
-(void)sleepObserverSystemWillSleep:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearEndpointForClient:(id)arg1 ;
-(void)_broadcastKeyboardMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 ;
-(void)_handleHiliteModeChanged:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MRDTelevisionRemoteDelegate>)arg1 ;
-(void)dealloc;
-(id<MRDTelevisionRemoteDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)observer:(id)arg1 didObserveNewDeviceInfo:(id)arg2 ;
-(void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2 ;
-(void)pairingSession:(id)arg1 showSetupCode:(id)arg2 ;
-(void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2 ;
-(NSArray *)endpoints;
-(void)_registerCallbacks;
-(NSArray *)clients;
@end
