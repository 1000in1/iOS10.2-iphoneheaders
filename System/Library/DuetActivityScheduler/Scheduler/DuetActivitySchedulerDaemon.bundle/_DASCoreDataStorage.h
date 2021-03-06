/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSURL, NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSObject, _DASDataProtectionStateMonitor;

@interface _DASCoreDataStorage : NSObject {

	BOOL _readOnly;
	NSString* _databaseDirectory;
	NSString* _databaseName;
	NSURL* _modelURL;
	NSDictionary* _paths;
	NSManagedObjectModel* _managedObjectModel;
	NSMutableDictionary* _managedObjectContexts;
	NSMutableDictionary* _persistentStoreCoordinators;
	NSObject*<OS_dispatch_queue> _mocQueue;
	NSObject*<OS_dispatch_queue> _pscQueue;
	_DASDataProtectionStateMonitor* _dataProtectionMonitor;

}

@property (nonatomic,readonly) NSDictionary * paths;                                                //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                             //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * managedObjectContexts;                         //@synthesize managedObjectContexts=_managedObjectContexts - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * persistentStoreCoordinators;                   //@synthesize persistentStoreCoordinators=_persistentStoreCoordinators - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> mocQueue;                               //@synthesize mocQueue=_mocQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> pscQueue;                               //@synthesize pscQueue=_pscQueue - In the implementation block
@property (nonatomic,readonly) _DASDataProtectionStateMonitor * dataProtectionMonitor;              //@synthesize dataProtectionMonitor=_dataProtectionMonitor - In the implementation block
@property (nonatomic,copy,readonly) NSString * databaseDirectory;                                   //@synthesize databaseDirectory=_databaseDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * databaseName;                                        //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                                                    //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                                       //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)createDatabaseDirectory:(id)arg1 error:(id*)arg2 ;
+(id)persistentStoreOptionsFor:(id)arg1 readOnly:(BOOL)arg2 ;
+(id)storageWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 ;
-(NSObject*<OS_dispatch_queue>)pscQueue;
-(NSObject*<OS_dispatch_queue>)mocQueue;
-(id)init;
-(BOOL)readOnly;
-(NSManagedObjectModel *)managedObjectModel;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 ;
-(void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2 ;
-(void)invalidateManagedObjectContextFor:(id)arg1 ;
-(void)invalidatePersistentStoreCoordinatorFor:(id)arg1 ;
-(id)persistentStoreCoordinatorFor:(id)arg1 ;
-(NSURL *)modelURL;
-(NSString *)databaseName;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSDictionary *)paths;
-(void)handleDatabaseErrors:(id)arg1 forPSC:(id)arg2 protectionClass:(id)arg3 ;
-(BOOL)deleteDatabaseForPSC:(id)arg1 protectionClass:(id)arg2 obliterate:(BOOL)arg3 ;
-(id)mocForProtectionClass:(id)arg1 ;
-(BOOL)deleteStorageFor:(id)arg1 obliterate:(BOOL)arg2 ;
-(NSString *)databaseDirectory;
-(NSMutableDictionary *)managedObjectContexts;
-(NSMutableDictionary *)persistentStoreCoordinators;
-(_DASDataProtectionStateMonitor *)dataProtectionMonitor;
@end

