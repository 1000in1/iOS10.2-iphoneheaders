/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimationShapeTarget.h>

@interface PDAnimationChartTarget : PDAnimationShapeTarget {

	BOOL mHasCatagoryIndex;
	int mCatagoryIndex;
	BOOL mHasSeriesIndex;
	int mSeriesIndex;
	BOOL mHasBuildStep;
	int mBuildStep;
	int mChartSubElementType;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)chartSubElementType;
-(void)setChartSubElementType:(int)arg1 ;
-(int)catagoryIndex;
-(int)seriesIndex;
-(int)buildStep;
-(BOOL)hasCatagoryIndex;
-(void)setCatagoryIndex:(int)arg1 ;
-(BOOL)hasSeriesIndex;
-(void)setSeriesIndex:(int)arg1 ;
-(BOOL)hasBuildStep;
-(void)setBuildStep:(int)arg1 ;
@end
