/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DChartScene : NSObject {

	ChartSceneInfo mSceneInfo;

}
+(BOOL)supportsValueAxisLabelAlignmentCaching;
+(void)addObjectsToSceneWithSceneInfo:(const ChartSceneInfo*)arg1 ;
-(id)chartInfo;
-(id)seriesType;
-(const SCD_Struct_TS478*)layoutSettings;
-(id)initWithSceneInfo:(const ChartSceneInfo*)arg1 ;
-(void)addAllObjectsToScene;
-(void)addLabelsToScene;
-(void)addChartTitlesToScene;
-(void)adjustSceneSettings;
-(void)addObjectsToScene;
-(void)addAllLabelsToScene;
-(void)addSeriesObjectsToScene;
-(id)scene;
-(id)chartType;
@end
