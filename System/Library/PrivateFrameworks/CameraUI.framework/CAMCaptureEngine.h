/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMPanoramaProcessorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVCaptureDevice, AVCaptureDeviceInput, CAMPanoramaConfiguration, AVCaptureStillImageOutput, AVCapturePhotoOutput, CAMCaptureMovieFileOutput, CAMPanoramaOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, CAMMemoizationCache, AVCaptureSession, NSObject, AVCaptureVideoPreviewLayer, CAMPowerController, NSMutableDictionary, NSMutableArray, CAMPanoramaProcessor, CIContext, NSHashTable, NSString;

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate> {

	AVCaptureDevice* _audioCameraDevice;
	AVCaptureDeviceInput* _audioCaptureDeviceInput;
	CAMPanoramaConfiguration* _panoramaConfiguration;
	AVCaptureStillImageOutput* _legacyStillImageOutput;
	AVCapturePhotoOutput* _stillImageOutput;
	CAMCaptureMovieFileOutput* _movieFileOutput;
	CAMPanoramaOutput* _panoramaVideoDataOutput;
	AVCaptureMetadataOutput* _metadataOutput;
	AVCaptureVideoDataOutput* _effectsPreviewVideoDataOutput;
	BOOL _interrupted;
	BOOL _managedDevicesLockedForConfiguration;
	BOOL __performingRecovery;
	unsigned __panoramaAssertionIdentifier;
	CAMMemoizationCache* __captureEngineDeviceCache;
	long long __engineOptions;
	AVCaptureSession* __captureSession;
	NSObject*<OS_dispatch_queue> __captureSessionQueue;
	AVCaptureVideoPreviewLayer* __videoPreviewLayer;
	CAMPowerController* __powerController;
	AVCaptureDevice* _cameraDevice;
	NSMutableDictionary* __sessionQueueRegisteredStillImageRequests;
	NSMutableDictionary* __sessionQueueRequestsBeingRecorded;
	NSObject*<OS_dispatch_queue> __captureServicesQueue;
	NSMutableArray* __servicesQueueCaptureServices;
	NSObject*<OS_dispatch_queue> __metadataObjectsQueue;
	NSObject*<OS_dispatch_queue> __panoramaSampleBufferQueue;
	NSObject*<OS_dispatch_queue> __panoramaSubgraphQueue;
	CAImageQueueRef __panoramaImageQueue;
	CAMPanoramaProcessor* __panoramaProcessor;
	NSObject*<OS_dispatch_semaphore> __panoramaFirstImageQueueUpdateSemaphore;
	NSObject*<OS_dispatch_queue> __panoramaFirstImageQueueUpdateSemaphoreQueue;
	NSObject*<OS_dispatch_queue> __effectsPreviewSurfaceFilteringQueue;
	CIContext* __effectsPreviewSurfaceFilteringContext;
	NSObject*<OS_dispatch_queue> __effectsPreviewSampleBufferQueue;
	NSHashTable* __effectsPreviewSampleBufferDelegates;
	NSObject*<OS_dispatch_queue> __recoveryMutexQueue;
	unsigned long long __numberOfRecoveryAttempts;

}

@property (nonatomic,readonly) CAMMemoizationCache * _captureEngineDeviceCache;                                                                                        //@synthesize _captureEngineDeviceCache=__captureEngineDeviceCache - In the implementation block
@property (nonatomic,readonly) long long _engineOptions;                                                                                                               //@synthesize _engineOptions=__engineOptions - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * _captureSession;                                                                                                     //@synthesize _captureSession=__captureSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureSessionQueue;                                                                                      //@synthesize _captureSessionQueue=__captureSessionQueue - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * _videoPreviewLayer;                                                                                        //@synthesize _videoPreviewLayer=__videoPreviewLayer - In the implementation block
@property (assign,setter=_setInterrupted:,getter=isInterrupted,nonatomic) BOOL interrupted;                                                                            //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                  //@synthesize _powerController=__powerController - In the implementation block
@property (assign,setter=_setPanoramaAssertionIdentifier:,nonatomic) unsigned _panoramaAssertionIdentifier;                                                            //@synthesize _panoramaAssertionIdentifier=__panoramaAssertionIdentifier - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * cameraDevice;                                                                                                           //@synthesize cameraDevice=_cameraDevice - In the implementation block
@property (assign,getter=areManagedDevicesLockedForConfiguration,nonatomic) BOOL managedDevicesLockedForConfiguration;                                                 //@synthesize managedDevicesLockedForConfiguration=_managedDevicesLockedForConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueRegisteredStillImageRequests;                                                                        //@synthesize _sessionQueueRegisteredStillImageRequests=__sessionQueueRegisteredStillImageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueRequestsBeingRecorded;                                                                               //@synthesize _sessionQueueRequestsBeingRecorded=__sessionQueueRequestsBeingRecorded - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureServicesQueue;                                                                                     //@synthesize _captureServicesQueue=__captureServicesQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _servicesQueueCaptureServices;                                                                                         //@synthesize _servicesQueueCaptureServices=__servicesQueueCaptureServices - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _metadataObjectsQueue;                                                                                     //@synthesize _metadataObjectsQueue=__metadataObjectsQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaSampleBufferQueue;                                                                                //@synthesize _panoramaSampleBufferQueue=__panoramaSampleBufferQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaSubgraphQueue;                                                                                    //@synthesize _panoramaSubgraphQueue=__panoramaSubgraphQueue - In the implementation block
@property (assign,setter=_setPanoramaImageQueue:,nonatomic) CAImageQueueRef _panoramaImageQueue;                                                                       //@synthesize _panoramaImageQueue=__panoramaImageQueue - In the implementation block
@property (setter=_setPanoramaProcessor:,nonatomic,retain) CAMPanoramaProcessor * _panoramaProcessor;                                                                  //@synthesize _panoramaProcessor=__panoramaProcessor - In the implementation block
@property (setter=_setPanoramaFirstImageQueueUpdateSemaphore:,nonatomic,retain) NSObject*<OS_dispatch_semaphore> _panoramaFirstImageQueueUpdateSemaphore;              //@synthesize _panoramaFirstImageQueueUpdateSemaphore=__panoramaFirstImageQueueUpdateSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaFirstImageQueueUpdateSemaphoreQueue;                                                              //@synthesize _panoramaFirstImageQueueUpdateSemaphoreQueue=__panoramaFirstImageQueueUpdateSemaphoreQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _effectsPreviewSurfaceFilteringQueue;                                                                      //@synthesize _effectsPreviewSurfaceFilteringQueue=__effectsPreviewSurfaceFilteringQueue - In the implementation block
@property (nonatomic,readonly) CIContext * _effectsPreviewSurfaceFilteringContext;                                                                                     //@synthesize _effectsPreviewSurfaceFilteringContext=__effectsPreviewSurfaceFilteringContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _effectsPreviewSampleBufferQueue;                                                                          //@synthesize _effectsPreviewSampleBufferQueue=__effectsPreviewSampleBufferQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * _effectsPreviewSampleBufferDelegates;                                                                                     //@synthesize _effectsPreviewSampleBufferDelegates=__effectsPreviewSampleBufferDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _recoveryMutexQueue;                                                                                       //@synthesize _recoveryMutexQueue=__recoveryMutexQueue - In the implementation block
@property (assign,setter=_setPerformingRecovery:,getter=_isPerformingRecovery,nonatomic) BOOL _performingRecovery;                                                     //@synthesize _performingRecovery=__performingRecovery - In the implementation block
@property (assign,setter=_setNumberOfRecoveryAttempts:,nonatomic) unsigned long long _numberOfRecoveryAttempts;                                                        //@synthesize _numberOfRecoveryAttempts=__numberOfRecoveryAttempts - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preheatCaptureResources;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initWithOptions:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVCaptureDevice *)cameraDevice;
-(void)setCameraDevice:(AVCaptureDevice *)arg1 ;
-(void)stopRecording;
-(id)stillImageOutput;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(id)panoramaConfiguration;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(void)registerLegacyStillImageCaptureRequest:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(BOOL)isInterrupted;
-(CAMPowerController *)_powerController;
-(id)legacyStillImageOutput;
-(void)completeLegacyStillImageCaptureRequest:(id)arg1 withResult:(id)arg2 ;
-(id)movieFileOutput;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCapture;
-(id)frontCameraDevice;
-(id)backDuoCameraDevice;
-(id)backCameraDevice;
-(id)backTelephotoCameraDevice;
-(id)audioCaptureDeviceInput;
-(id)panoramaVideoDataOutput;
-(id)effectsPreviewVideoDataOutput;
-(id)metadataOutput;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(opaqueCMSampleBufferRef)arg2 withStatus:(int)arg3 forRequest:(id)arg4 ;
-(void)registerCaptureService:(id)arg1 ;
-(void)enqueueCommand:(id)arg1 ;
-(void)updateImageQueueForPanoramaPreviewView:(id)arg1 ;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)_videoPreviewLayer;
-(void)_handleSessionDidStartRunning:(id)arg1 ;
-(void)_handleSessionDidStopRunning:(id)arg1 ;
-(void)_handleSessionRuntimeError:(id)arg1 ;
-(void)_handleSessionInterruption:(id)arg1 ;
-(void)_handleSessionInterruptionEnded:(id)arg1 ;
-(id)initWithPowerController:(id)arg1 options:(long long)arg2 ;
-(void)_teardownKeyValueObservingForLegacyStillImageOutput;
-(long long)_engineOptions;
-(NSObject*<OS_dispatch_queue>)_captureSessionQueue;
-(AVCaptureSession *)_captureSession;
-(void)_scheduleDelayedSessionNonstartRecovery;
-(void)_cancelDelayedSessionNonstartRecovery;
-(void)_scheduleDelayedRecoveryCheckIfNecessary;
-(void)enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_recoveryMutexQueue;
-(BOOL)_isPerformingRecovery;
-(void)_performSessionRuntimeRecovery:(id)arg1 ;
-(void)_setPerformingRecovery:(BOOL)arg1 ;
-(void)_setNumberOfRecoveryAttempts:(unsigned long long)arg1 ;
-(void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)arg1 ;
-(void)_recoverFromSessionRuntimeError;
-(NSObject*<OS_dispatch_queue>)_panoramaSampleBufferQueue;
-(void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessary;
-(void)_setInterrupted:(BOOL)arg1 ;
-(unsigned long long)_numberOfRecoveryAttempts;
-(double)_delayForRecoveryAttempt:(unsigned long long)arg1 ;
-(void)_markSessionRecoveryAsRecovered;
-(void)_performSessionNonstartRecoveryIfNeeded;
-(void)_validateSessionRecovery;
-(BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)arg1 ;
-(void)_setPanoramaAssertionIdentifier:(unsigned)arg1 ;
-(id)_correspondingCaptureEngineDeviceForCaptureInput:(id)arg1 ;
-(BOOL)_isSessionModificationRequiredByCommand:(id)arg1 ;
-(id)_accumulatedUserInfoFromCommand:(id)arg1 ;
-(void)_updateCurrentCameraDevice;
-(void)_updateEffectsSubgraph;
-(BOOL)_shouldStartSessionOnConfigurationChanges;
-(NSObject*<OS_dispatch_queue>)_panoramaFirstImageQueueUpdateSemaphoreQueue;
-(void)_setPanoramaFirstImageQueueUpdateSemaphore:(id)arg1 ;
-(BOOL)_lockManagedCapturedDevice:(id)arg1 ;
-(void)setManagedDevicesLockedForConfiguration:(BOOL)arg1 ;
-(void)_unlockManagedCaptureDevice:(id)arg1 ;
-(void)_updateContext:(id)arg1 ;
-(void)_executeCommand:(id)arg1 withContext:(id)arg2 ;
-(void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_lockAllEngineManagedDevices;
-(void)_unlockAllEngineManagedDevices;
-(void)_commitSessionConfigurationIfNecessary;
-(NSObject*<OS_dispatch_queue>)_captureServicesQueue;
-(NSMutableArray *)_servicesQueueCaptureServices;
-(NSObject*<OS_dispatch_queue>)_panoramaSubgraphQueue;
-(CAImageQueueRef)_panoramaImageQueue;
-(void)_performPostprocessingForRequest:(id)arg1 withStillImageResult:(id)arg2 filter:(id)arg3 ;
-(void)_notifyServicesOfCompletedCaptureRequest:(id)arg1 withStillImageResult:(id)arg2 ;
-(NSMutableDictionary *)_sessionQueueRegisteredStillImageRequests;
-(void)_didFinishProcessingStillImageSurface:(IOSurfaceRef)arg1 ofSize:(unsigned long long)arg2 withPreviewSurface:(IOSurfaceRef)arg3 metadata:(id)arg4 forSettings:(id)arg5 error:(id)arg6 ;
-(id)_validateVideoAtURL:(id)arg1 withCaptureError:(id)arg2 isVideoComplement:(BOOL)arg3 stillImageDisplayTime:(SCD_Struct_CA2)arg4 reportedDuration:(SCD_Struct_CA2)arg5 outActualDuration:(SCD_Struct_CA2*)arg6 outVideoRecordingStoppedReason:(long long*)arg7 ;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSurfaceFilteringQueue;
-(IOSurfaceRef)_newFilteredSurfaceFromSurface:(IOSurfaceRef)arg1 filter:(id)arg2 ;
-(NSMutableDictionary *)_sessionQueueRequestsBeingRecorded;
-(void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6 ;
-(CAMPanoramaProcessor *)_panoramaProcessor;
-(long long)_notificationForError:(CFStringRef)arg1 ;
-(void)_sessionQueuePanoramaTeardown;
-(void)_sessionQueuePanoramaSetup;
-(void)_subgraphQueueCreatePanoramaProcessorIfNecessary;
-(void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
-(void)_notifyServicesOfPanoramaConfigurationChangeWithDirection:(long long)arg1 ;
-(void)_setPanoramaProcessor:(id)arg1 ;
-(void)_setPanoramaImageQueue:(CAImageQueueRef)arg1 ;
-(unsigned)_panoramaAssertionIdentifier;
-(NSObject*<OS_dispatch_semaphore>)_panoramaFirstImageQueueUpdateSemaphore;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSampleBufferQueue;
-(NSHashTable *)_effectsPreviewSampleBufferDelegates;
-(id)_requestFromPossibleCaptureOutput:(id)arg1 ;
-(id)_captureEngineDeviceForDevice:(long long)arg1 ;
-(CAMMemoizationCache *)_captureEngineDeviceCache;
-(BOOL)areManagedDevicesLockedForConfiguration;
-(id)audioCaptureDevice;
-(void)_setupKeyValueObservingForLegacyStillImageOutput;
-(NSObject*<OS_dispatch_queue>)_metadataObjectsQueue;
-(void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhotoSurface:(IOSurfaceRef)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 resolvedSettings:(id)arg6 error:(id)arg7 ;
-(void)captureOutput:(id)arg1 didFinishProcessingOriginalPhotoSurface:(IOSurfaceRef)arg2 originalPhotoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 resolvedSettings:(id)arg6 error:(id)arg7 ;
-(void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(SCD_Struct_CA2)arg3 photoDisplayTime:(SCD_Struct_CA2)arg4 resolvedSettings:(id)arg5 error:(id)arg6 ;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)_subgraphQueueHandlePanoramaStatusNotification:(CFStringRef)arg1 ;
-(void)_subgraphQueueHandlePanoramaWarningNotification:(CFStringRef)arg1 ;
-(void)_subgraphQueueHandlePanoramaErrorNotification:(CFStringRef)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(CIContext *)_effectsPreviewSurfaceFilteringContext;
@end
