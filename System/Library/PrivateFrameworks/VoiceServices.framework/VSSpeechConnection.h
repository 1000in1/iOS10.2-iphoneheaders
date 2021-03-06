/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;

@interface VSSpeechConnection : NSObject {

	NSXPCConnection* _connection;
	VSSpeechConnectionDelegateWrapper* _delegateWrapper;
	VSSpeechRequest* _request;

}

@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate; 
@property (nonatomic,readonly) VSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<VSSpeechConnectionDelegate>)delegate;
-(VSSpeechRequest *)request;
-(id)_connection;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(BOOL)isSystemSpeaking;
-(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prewarmIfNeededWithRequest:(id)arg1 ;
-(void)startSpeechRequest:(id)arg1 ;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)continueCurrentSpeechRequest;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(id)_remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectionInvalidated;
-(id)_remoteObject;
-(void)_setRequest:(id)arg1 ;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
@end

