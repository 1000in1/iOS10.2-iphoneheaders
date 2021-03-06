/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _NTKCompanionFaceSnapshottingWindow, NSMutableArray, NTKFace;

@interface NTKCompanionFaceRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	_NTKCompanionFaceSnapshottingWindow* _window;
	BOOL _queueActive;
	NSMutableArray* _pendingTaskList;
	NTKFace* _currentFace;
	/*^block*/id _faceBatchCompletionHandler;

}

@property (nonatomic,retain) NSMutableArray * pendingTaskList;                   //@synthesize pendingTaskList=_pendingTaskList - In the implementation block
@property (assign,getter=isQueueActive,nonatomic) BOOL queueActive;              //@synthesize queueActive=_queueActive - In the implementation block
@property (nonatomic,retain) NTKFace * currentFace;                              //@synthesize currentFace=_currentFace - In the implementation block
@property (nonatomic,copy) id faceBatchCompletionHandler;                        //@synthesize faceBatchCompletionHandler=_faceBatchCompletionHandler - In the implementation block
+(id)snapshotPathForFace:(id)arg1 detailMode:(long long)arg2 ;
+(id)_storagePath;
+(id)_snapshotNameForFace:(id)arg1 detailMode:(long long)arg2 ;
-(id)init;
-(void)_startNextWorkItem;
-(void)_notifyFinishedFaceBatchIfNeeded;
-(void)requestSnapshotOfFace:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)pendingTaskList;
-(void)setPendingTaskList:(NSMutableArray *)arg1 ;
-(BOOL)isQueueActive;
-(void)setQueueActive:(BOOL)arg1 ;
-(NTKFace *)currentFace;
-(void)setCurrentFace:(NTKFace *)arg1 ;
-(id)faceBatchCompletionHandler;
-(void)setFaceBatchCompletionHandler:(id)arg1 ;
@end

