/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHSupportsRendering <NSObject>
@required
-(double)viewScale;
-(id)chartLayout;
-(BOOL)renderGrid;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)isDrawingIntoPDF;
-(BOOL)renderReferenceLines;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
-(BOOL)shadowsEnabled;
-(id)geometry;
-(void)drawInContext:(CGContextRef)arg1;

@end
