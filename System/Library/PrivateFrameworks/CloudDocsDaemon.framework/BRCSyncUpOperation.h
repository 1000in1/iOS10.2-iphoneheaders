/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSMutableArray, NSMutableDictionary, BRCLocalItem, NSString, BRCServerZone;

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass> {

	unsigned long long _requestID;
	float _cost;
	NSMutableArray* _recordsToSave;
	NSMutableArray* _packagesInFlight;
	NSMutableArray* _createdAppLibraryNames;
	NSMutableArray* _deletedRecordIDs;
	NSMutableArray* _iworkUnsharedShareIDs;
	NSMutableDictionary* _iworkRenamedShareIDsToNames;
	NSMutableArray* _recordsNeedingNewSharingProtectionInfo;
	NSMutableArray* _recordsNeedingUpdatedSharingProtectionInfo;
	NSMutableDictionary* _recordIDsToDeleteToEtags;
	BRCLocalItem* _itemNeedingPCSChaining;
	NSMutableDictionary* _conflictLosersToResolveByRecordID;
	NSString* _stageID;
	/*^block*/id _syncUpCompletionBlock;
	BRCServerZone* _serverZone;

}

@property (nonatomic,retain) BRCServerZone * serverZone;                                               //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,retain) NSMutableArray * packagesInFlight;                                        //@synthesize packagesInFlight=_packagesInFlight - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsToSave;                                           //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordIDs;                                        //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * iworkUnsharedShareIDs;                                   //@synthesize iworkUnsharedShareIDs=_iworkUnsharedShareIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iworkRenamedShareIDsToNames;                        //@synthesize iworkRenamedShareIDsToNames=_iworkRenamedShareIDsToNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsNeedingNewSharingProtectionInfo;                  //@synthesize recordsNeedingNewSharingProtectionInfo=_recordsNeedingNewSharingProtectionInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordsNeedingUpdatedSharingProtectionInfo;              //@synthesize recordsNeedingUpdatedSharingProtectionInfo=_recordsNeedingUpdatedSharingProtectionInfo - In the implementation block
@property (nonatomic,retain) BRCLocalItem * itemNeedingPCSChaining;                                    //@synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToDeleteToEtags;                           //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * conflictLosersToResolveByRecordID;                  //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSString * stageID;                                                       //@synthesize stageID=_stageID - In the implementation block
@property (nonatomic,readonly) float cost;                                                             //@synthesize cost=_cost - In the implementation block
@property (nonatomic,readonly) NSMutableArray * createdAppLibraryNames;                                //@synthesize createdAppLibraryNames=_createdAppLibraryNames - In the implementation block
@property (nonatomic,copy) id syncUpCompletionBlock;                                                   //@synthesize syncUpCompletionBlock=_syncUpCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long*)arg3 ;
-(void)dealloc;
-(void)main;
-(float)cost;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(BRCServerZone *)serverZone;
-(NSString *)stageID;
-(NSMutableArray *)createdAppLibraryNames;
-(NSMutableArray *)packagesInFlight;
-(NSMutableArray *)recordsNeedingUpdatedSharingProtectionInfo;
-(NSMutableArray *)recordsNeedingNewSharingProtectionInfo;
-(NSMutableArray *)iworkUnsharedShareIDs;
-(NSMutableDictionary *)iworkRenamedShareIDsToNames;
-(BRCLocalItem *)itemNeedingPCSChaining;
-(id)initWithZone:(id)arg1 ;
-(BOOL)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long*)arg2 ;
-(BOOL)_performPCSChainOperationIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_performModifyRecordsOrPCSChainOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)performShareUpdate:(/*^block*/id)arg1 ;
-(void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
-(void)_performShareUpdateAndModifyRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)_setSharingFieldsOnContentRecord:(id)arg1 withProtectionData:(id)arg2 baseToken:(id)arg3 routingKey:(id)arg4 ;
-(void)_performUpdateSharingProtectionDataIfNecessary:(/*^block*/id)arg1 ;
-(void)setPackagesInFlight:(NSMutableArray *)arg1 ;
-(void)setIworkUnsharedShareIDs:(NSMutableArray *)arg1 ;
-(void)setIworkRenamedShareIDsToNames:(NSMutableDictionary *)arg1 ;
-(void)setRecordsNeedingNewSharingProtectionInfo:(NSMutableArray *)arg1 ;
-(void)setRecordsNeedingUpdatedSharingProtectionInfo:(NSMutableArray *)arg1 ;
-(void)setItemNeedingPCSChaining:(BRCLocalItem *)arg1 ;
-(void)setStageID:(NSString *)arg1 ;
-(id)syncUpCompletionBlock;
-(void)setSyncUpCompletionBlock:(id)arg1 ;
-(void)setServerZone:(BRCServerZone *)arg1 ;
-(NSMutableDictionary *)recordIDsToDeleteToEtags;
-(NSMutableDictionary *)conflictLosersToResolveByRecordID;
-(void)setRecordIDsToDeleteToEtags:(NSMutableDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)recordsToSave;
-(void)setRecordsToSave:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deletedRecordIDs;
-(void)setDeletedRecordIDs:(NSMutableArray *)arg1 ;
@end

