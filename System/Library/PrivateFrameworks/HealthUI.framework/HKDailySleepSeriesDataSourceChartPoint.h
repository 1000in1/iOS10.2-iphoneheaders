/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSArray, NSDate, NSString;

@interface HKDailySleepSeriesDataSourceChartPoint : NSObject <HKChartPoint> {

	NSArray* _timeIntervalOffsets;
	NSDate* _xValue;
	id _userInfo;

}

@property (nonatomic,retain) NSArray * timeIntervalOffsets;              //@synthesize timeIntervalOffsets=_timeIntervalOffsets - In the implementation block
@property (nonatomic,retain) NSDate * xValue;                            //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) id userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(NSDate *)xValue;
-(id)yValue;
-(id)allYValues;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(void)setTimeIntervalOffsets:(NSArray *)arg1 ;
-(void)setXValue:(NSDate *)arg1 ;
-(NSArray *)timeIntervalOffsets;
@end

