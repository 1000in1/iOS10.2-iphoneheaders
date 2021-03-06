/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/BaseInstallAction.h>

@class NSString;

@interface LoadArtworkInstallAction : BaseInstallAction {

	NSString* _bundleID;
	long long _downloadID;

}
-(BOOL)_checkStateAndTransition:(BOOL)arg1 ;
-(id)_artworkDataFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_completeAndNotify;
-(void)run;
-(id)_placeholder;
-(id)initWithEvent:(id)arg1 ;
-(id)_download;
@end

