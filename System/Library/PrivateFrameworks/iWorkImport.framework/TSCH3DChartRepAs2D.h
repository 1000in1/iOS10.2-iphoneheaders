/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>

@class TSCHChartRep;

@interface TSCH3DChartRepAs2D : TSCHChartRep {

	TSCHChartRep* m2DRep;

}
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)p_create2DRep;
-(id)p_mutationsForConverting3DFillFromSeries:(id)arg1 ;
-(id)p_layoutFrom3DInfo:(id)arg1 layout3D:(id)arg2 ;
-(void)addToSet:(id)arg1 ;
-(void)p_update2DLayout;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3 ;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
