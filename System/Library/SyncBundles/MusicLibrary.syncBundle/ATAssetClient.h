/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetClient <NSObject>
@required
-(id)assetDataClass;
-(void)assetsToSyncWithCompletion:(/*^block*/id)arg1;
-(void)getDataForAsset:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)assetSync:(id)arg1 didCompleteWithError:(id)arg2;
-(void)assetSync:(id)arg1 didUpdateProgress:(float)arg2;
-(void)assetSyncDidCompleteWithError:(id)arg1;

@end

