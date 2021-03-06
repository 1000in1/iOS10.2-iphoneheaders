/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
@class NSObject, NSString, NSMutableDictionary, BKSApplicationStateMonitor, ADApplicationStateChangeEventListenerCarPlay;

@interface ADApplicationStateChangeEventListener : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSObject*<OS_dispatch_queue> _session_queue;
	NSString* _Model;
	NSMutableDictionary* _activeBundles;
	NSMutableDictionary* _versedBundles;
	NSObject*<OS_dispatch_source> mem_alerts;
	NSObject*<OS_xpc_object> _connection;
	BKSApplicationStateMonitor* _appStateMonitor;
	ADApplicationStateChangeEventListenerCarPlay* _eventListenerCarPlay;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writePreviousSessionLog;
-(void)applicationStateChanged:(id)arg1 ;
-(void)gatherActivatedInfo;
-(void)writeSessionLog;
-(void)writeSessionLogUsingBundles:(id)arg1 ;
-(void)addProxy:(id)arg1 event:(unsigned)arg2 at:(unsigned)arg3 ;
-(id)init;
-(void)dealloc;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
@end

