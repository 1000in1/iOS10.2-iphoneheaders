/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDNanoSyncServerInterface.h>

@class HDNanoSyncManager, NSString;

@interface HDNanoSyncServer : HDSubserver <HDNanoSyncServerInterface> {

	HDNanoSyncManager* _nanoSyncManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParentServer:(id)arg1 ;
-(void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

