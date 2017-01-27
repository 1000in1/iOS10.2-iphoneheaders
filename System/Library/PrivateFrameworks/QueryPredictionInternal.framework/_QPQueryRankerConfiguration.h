/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _QPQueryRankerConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> queue;

}

@property (readonly) BOOL featureDisabled; 
-(id)init;
-(BOOL)featureDisabled;
-(void)registerHandlerForDatabaseChangeNotification:(/*^block*/id)arg1 ;
-(void)registerHandlerForDeleteDataNotification:(/*^block*/id)arg1 ;
-(void)registerHandlerForFeatureDisabledNotification:(/*^block*/id)arg1 ;
@end
