/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDate, NSCalendar, NSSet;

@interface _HKLatestSummariesQuery : HKQuery {

	NSDate* _summaryDate;
	NSCalendar* _calendar;
	NSSet* _typeFilters;
	/*^block*/id _resultsHandler;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id resultsHandler;              //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (nonatomic,copy) id updateHandler;                   //@synthesize updateHandler=_updateHandler - In the implementation block
+(Class)_queryServerDataObjectClass;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(/*^block*/id)_queue_errorHandler;
-(BOOL)_requiresValidSampleType;
-(id)resultsHandler;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)deliverSummaries:(id)arg1 forQuery:(id)arg2 ;
-(void)deliverResetSummaries:(id)arg1 forQuery:(id)arg2 ;
-(void)deliverUpdatedSummaries:(id)arg1 forQuery:(id)arg2 ;
@end

