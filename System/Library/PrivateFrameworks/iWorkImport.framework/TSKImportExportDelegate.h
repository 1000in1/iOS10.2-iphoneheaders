/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TSKImportExportDelegate <NSObject>
@property (nonatomic,readonly) NSDictionary * incompatibleMediaContainersWithDataUnsupportedOnThisDevice; 
@property (nonatomic,readonly) NSDictionary * incompatibleMediaContainersWithDataUnsupportedOnAllDevices; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@optional
-(void)addIncompatibleMediaContainer:(id)arg1 incompatibleData:(id)arg2 compatibilityLevel:(long long)arg3;
-(void)replaceIncompatibleMediaContainer:(id)arg1 withNewMediaContainer:(id)arg2;
-(void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(NSDictionary *)incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
-(NSDictionary *)incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
-(BOOL)isBrowsingVersions;

@required
-(void)removeWarning:(id)arg1;
-(void)addWarning:(id)arg1;
-(id)warnings;

@end

