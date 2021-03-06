/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession;

@interface AFSiriTaskMetricsManager : NSObject {

	NSObject*<OS_dispatch_queue> _duetQueue;
	CDSession* _coreDuetSession;

}
+(id)sharedManager;
-(id)init;
-(BOOL)_parseCoreDuetAttributeValue:(id)arg1 aceId:(id*)arg2 duration:(double*)arg3 ;
-(void)registerPunchoutIdentifier:(id)arg1 metricsContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)retrieveMetricsFromPreviousPunchout:(/*^block*/id)arg1 ;
-(void)deleteRegisteredIdentifiers;
@end

