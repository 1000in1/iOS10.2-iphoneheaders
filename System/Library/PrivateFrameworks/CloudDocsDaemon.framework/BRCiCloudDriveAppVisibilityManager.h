/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCCloudDocsAppsObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BRCiCloudDriveAppVisibilityManager : NSObject <BRCCloudDocsAppsObserver> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)_installiCloudDriveApp;
+(BOOL)_uninstalliCloudDriveApp;
+(BOOL)isiCloudDriveAppInstalled;
-(id)init;
-(id)_init;
-(void)close;
-(void)updateVisibilityForCurrentAccount;
-(void)removeAlliCloudDriveAppInstallationNotifications;
-(id)visibilityForCurrentAccount;
-(void)postiCloudDriveAppInstallationNotification;
-(void)setVisibilityForCurrentAccount:(id)arg1 ;
-(void)cloudDocsAppsListDidChange:(id)arg1 ;
-(id)_unsafe_visibilityForDSID:(id)arg1 ;
-(id)_unsafe_visibilityForCurrentAccount;
-(BOOL)_unsafe_setDefaultVisibility:(id)arg1 forDSID:(id)arg2 ;
-(void)_removeAlliCloudDriveAppInstallationNotificationsUsingNotifier:(id)arg1 ;
-(void)_setDefaultVisibility:(id)arg1 forDSID:(id)arg2 ;
-(id)_descriptionForDSID:(id)arg1 ;
@end
