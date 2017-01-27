/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : ISOperation {

	SSMemoryEntity* _download;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
+(BOOL)canAttemptRecoveryWithError:(id)arg1 ;
-(id)initWithDownloadID:(long long)arg1 databaseSession:(id)arg2 ;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end
