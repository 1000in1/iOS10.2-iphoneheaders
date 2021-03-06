/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, NSMutableDictionary, AppLaunchStatsSaveAndRestore;

@interface AppLaunchStatsStatistics : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject*<OS_dispatch_queue> statsQueue;
	unsigned long long records;
	NSDate* lastTriggeredDate;
	NSMutableArray* lastPredictedApps;
	NSMutableArray* lastForegroundApps;
	NSMutableDictionary* appStatistics;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	/*^block*/id scoreCallback;
	short lastTriggeredSlot;
	BOOL bypass;

}
-(id)init:(/*^block*/id)arg1 ;
-(void)trigger;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)restore:(id)arg1 ;
-(BOOL)pullPredicted:(unsigned short)arg1 ;
-(id)copyStatisticsToDictionary;
-(void)broughtToForeground:(id)arg1 ;
-(BOOL)admit:(id)arg1 ;
-(void)saveContext:(id)arg1 ;
@end

