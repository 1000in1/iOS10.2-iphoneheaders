/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudBatchDownloader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _manager;

}
-(void)dealloc;
-(id)initWithLibrary:(id)arg1 withManager:(id)arg2 ;
-(id)deletedRecordUuidsFromBatch:(id)arg1 ;
-(id)handleIncomingBatch:(id)arg1 ;
-(void)_triggerBackgroundDownloadFailureForResources:(id)arg1 ;
-(id)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3 ;
-(id)_debugPrintAlbumOrderForAssets:(id)arg1 ;
-(void)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_handleAssetRecords:(id)arg1 inLibrary:(id)arg2 withChangeBatch:(id)arg3 ;
-(void)_handleMemoryRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
@end

