/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/BasePipeline.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, ISOperationQueue;

@interface RestorePipeline : BasePipeline {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableOrderedSet* _activeRestoreIDs;
	BOOL _restoreItemsUnavailableScheduled;
	ISOperationQueue* _restoreOperationQueue;

}
+(BOOL)keepSafeHarborDataForBundleID:(id)arg1 ;
+(id)_restorableJobsQueryInDatabase:(id)arg1 ;
+(void)restoreJobIDs:(id)arg1 reason:(id)arg2 ;
+(id)_findDemotedApplicationProxiesForBundleIDs:(id)arg1 ;
+(id)_appleIDForApp:(id)arg1 ;
+(void)restoreAllRestorableJobsInDatabase:(id)arg1 withReason:(id)arg2 ;
+(void)retryCanceledRestoreJobs;
+(void)retrySoftFailedRestoreJobs;
+(void)restoreDemotedApplicationsWithBundleIDs:(id)arg1 ;
-(void)_showRestoreItemsUnavailableIfNecessary;
-(void)scheduleRestoreItemsUnavailableDialog;
-(id)initWithDescriptor:(id)arg1 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
@end

