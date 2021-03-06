/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSMapTable, NSURLSession, NSURLSessionConfiguration, NSString;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, MPArtworkDataSource> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSCache* _fallbackArtworkRepresentationCache;
	NSMapTable* _catalogTaskMap;
	NSURLSession* _URLSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                           //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSCache * fallbackArtworkRepresentationCache;                       //@synthesize fallbackArtworkRepresentationCache=_fallbackArtworkRepresentationCache - In the implementation block
@property (nonatomic,retain) NSMapTable * catalogTaskMap;                                        //@synthesize catalogTaskMap=_catalogTaskMap - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                          //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) NSURLSessionConfiguration * URLSessionConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_performSyncBlock:(/*^block*/id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(NSURLSession *)URLSession;
-(NSCache *)fallbackArtworkRepresentationCache;
-(id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(BOOL)arg2 ;
-(NSURLSessionConfiguration *)URLSessionConfiguration;
-(id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(CGSize)arg3 immediateImageDecompressionAllowed:(BOOL)arg4 ;
-(NSMapTable *)catalogTaskMap;
-(void)_performAsyncBarrierBlock:(/*^block*/id)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
-(BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForCatalog:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFallbackArtworkRepresentationCache:(NSCache *)arg1 ;
-(void)setCatalogTaskMap:(NSMapTable *)arg1 ;
-(void)setURLSession:(NSURLSession *)arg1 ;
@end

