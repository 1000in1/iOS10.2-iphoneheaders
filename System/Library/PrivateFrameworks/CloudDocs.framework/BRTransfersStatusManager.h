/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSOperationQueue, NSProgress, NSArray;

@interface BRTransfersStatusManager : NSObject {

	NSMutableArray* _transfers;
	NSOperationQueue* _queue;
	NSProgress* _globalUploadProgress;
	NSProgress* _globalDownloadProgress;
	NSMutableArray* _coordinators;
	id _globalProgressSubscriber;
	unsigned long long _shouldHideGlobalDownloadProgressCount;

}

@property (copy,readonly) NSArray * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)resume;
-(NSArray *)transfers;
-(void)removeTransfer:(id)arg1 ;
-(void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_setGlobalProgress:(id)arg1 forIvar:(id*)arg2 ;
-(id)startObservingItemDownloadProgressAtURL:(id)arg1 ;
-(void)stopObservingItemDownloadProgress:(id)arg1 ;
-(void)downloadAndObserveItemAtURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addTransfer:(id)arg1 ;
@end

