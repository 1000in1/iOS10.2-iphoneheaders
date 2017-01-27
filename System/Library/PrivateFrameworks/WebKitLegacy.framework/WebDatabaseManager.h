/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebDatabaseManager : NSObject
+(void)removeEmptyDatabaseFiles;
+(id)sharedWebDatabaseManager;
+(void)scheduleEmptyDatabaseRemoval;
+(void)startBackgroundTask;
+(void)endBackgroundTask;
+(void)willBeginFirstTransaction;
+(void)didFinishLastTransaction;
-(id)origins;
-(id)databasesWithOrigin:(id)arg1 ;
-(id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllDatabases;
-(BOOL)deleteOrigin:(id)arg1 ;
-(BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllIndexedDatabases;
-(id)init;
@end
