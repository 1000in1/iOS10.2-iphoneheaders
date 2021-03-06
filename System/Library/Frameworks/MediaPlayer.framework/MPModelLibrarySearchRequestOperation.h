/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPModelLibrarySearchRequest;

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	shared_ptr<mlcore::LocalizedSearchQuery>* _runningQuery;
	MPModelLibrarySearchRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibrarySearchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)init;
-(void)cancel;
-(MPModelLibrarySearchRequest *)request;
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
@end

