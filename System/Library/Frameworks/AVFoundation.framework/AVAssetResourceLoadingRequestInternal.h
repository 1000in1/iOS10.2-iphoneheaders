/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSDictionary, NSMutableURLRequest, NSURLResponse, NSURLRequest, NSObject, NSMutableData, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest;

@interface AVAssetResourceLoadingRequestInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToResourceLoader;
	NSDictionary* requestDictionary;
	NSMutableURLRequest* URLRequest;
	NSURLResponse* response;
	NSURLRequest* redirect;
	NSObject*<OS_dispatch_queue> dataCachingQueue;
	NSMutableData* cachedData;
	NSDictionary* cachedContentInformation;
	AVAssetResourceLoadingContentInformationRequest* contentInformationRequest;
	AVAssetResourceLoadingDataRequest* dataRequest;
	int finished;
	int cancelled;
	int sentContentInfo;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	OpaqueFigAssetImageGeneratorRef figImageGenerator;
	OpaqueFigAssetRef figAsset;
	/*^block*/id streamingKeyRequestCompletionHandler;
	OpaqueFigCPECryptorRef figCryptor;

}
@end

