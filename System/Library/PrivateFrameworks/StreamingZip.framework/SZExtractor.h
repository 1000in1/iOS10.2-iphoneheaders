/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, StreamingUnzipper, NSObject, SZExtractorInternalDelegate;

@interface SZExtractor : NSObject {

	NSXPCConnection* _unzipServiceConnection;
	StreamingUnzipper* _inProcessUnzipper;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SZExtractorInternalDelegate* _extractorDelegate;
	BOOL _errorOccurred;

}

@property (assign,nonatomic,__weak) id<SZExtractorDelegate> delegate; 
+(void)enableDebugLogging;
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(id<SZExtractorDelegate>)delegate;
-(id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long*)arg4 ;
-(void)_errorOccurred;
-(void)_invalidateObject;
-(id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3 ;
-(id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long*)arg2 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
@end

