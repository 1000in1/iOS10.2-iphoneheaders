/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>
#import <iWorkImport/TSCHCompositeRendering.h>

@class TSCHSelectionPath, NSString;

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering> {

	TSCHSelectionPath* mAxisTitleSelectionPath;
	CGRect mStartingEditingFrame;
	NSString* mEditingString;

}

@property (nonatomic,retain) NSString * editingString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(id)axisLayoutItem;
-(BOOL)p_needsSharedTickMarkLayer;
-(BOOL)p_needsPositionBasedTransparencyLayer;
-(id)axisTitleSelectionPath;
-(void)p_addLinePath:(CGContextRef)arg1 stroke:(id)arg2 ;
-(void)p_addTickmarkPaths:(CGContextRef)arg1 axis:(id)arg2 locations:(id)arg3 stroke:(id)arg4 width:(float)arg5 ;
-(void)p_drawTitle:(CGContextRef)arg1 rangePtr:(NSRange*)arg2 ;
-(BOOL)p_isTitleVisible;
-(CGRect)frameForEditingTextForSelectionPath:(id)arg1 ;
-(BOOL)canEditTextForSelectionPath:(id)arg1 ;
-(void)setEditingString:(NSString *)arg1 ;
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
-(BOOL)needsAnySeparateLayers;
-(void)willBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isCompositeRenderer;
-(void)p_debugRenderTickmarkArea:(CGContextRef)arg1 ;
-(BOOL)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(void)useEditedString:(id)arg1 ;
-(NSString *)editingString;
-(void)dealloc;
@end

