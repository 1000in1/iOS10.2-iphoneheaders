/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface FMSongAsset : NSObject {

	NSString* _assetID;
	NSString* _songUID;
	unsigned long long _assetStatus;
	NSURL* _localURL;
	double _downloadProgress;
	long long _contentVersion;
	long long _compatibilityVersion;

}

@property (readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (readonly) NSString * assetID;                          //@synthesize assetID=_assetID - In the implementation block
@property (retain) NSString * songUID;                            //@synthesize songUID=_songUID - In the implementation block
@property (readonly) unsigned long long assetStatus;              //@synthesize assetStatus=_assetStatus - In the implementation block
@property (readonly) NSURL * localURL;                            //@synthesize localURL=_localURL - In the implementation block
@property (readonly) double downloadProgress;                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
-(NSURL *)localURL;
-(double)downloadProgress;
-(unsigned long long)assetStatus;
-(void)setSongUID:(NSString *)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(void)requestDownload;
-(NSString *)songUID;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)updateDownloadProgress:(double)arg1 ;
-(NSString *)assetID;
-(void)cancelDownload;
-(void)purgeLocalCache;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 ;
-(BOOL)isCloudBacked;
-(long long)contentVersion;
-(long long)compatibilityVersion;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)localURLExists;
@end

