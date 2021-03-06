/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface _HKSampleTypeQuery : HKQuery {

	/*^block*/id _resultsHandler;

}

@property (copy) id resultsHandler;              //@synthesize resultsHandler=_resultsHandler - In the implementation block
+(Class)_queryServerDataObjectClass;
-(/*^block*/id)_queue_errorHandler;
-(BOOL)_requiresValidSampleType;
-(void)setResultsHandler:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(id)resultsHandler;
-(void)deliverSampleTypes:(id)arg1 forQuery:(id)arg2 ;
@end

