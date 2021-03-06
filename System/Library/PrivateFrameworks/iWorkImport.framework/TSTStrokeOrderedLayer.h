/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTStrokeLayer.h>

@class TSTStrokeLayer;

@interface TSTStrokeOrderedLayer : TSTStrokeLayer {

	TSTStrokeLayer* _majorStrokeLayer;
	TSTStrokeLayer* _minorStrokeLayer;

}

@property (nonatomic,retain) TSTStrokeLayer * majorStrokeLayer;              //@synthesize majorStrokeLayer=_majorStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTStrokeLayer * minorStrokeLayer;              //@synthesize minorStrokeLayer=_minorStrokeLayer - In the implementation block
-(void)invalidateRange:(TSTSimpleRange)arg1 ;
-(id)findStrokeAndRangeAtIndex:(long long)arg1 ;
-(id)initWithContext:(id)arg1 majorStrokeLayer:(id)arg2 minorStrokeLayer:(id)arg3 ;
-(void)enumerateRawStrokesSegmentsUsingBlock:(/*^block*/id)arg1 ;
-(void)appendStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(TSTStrokeLayer *)majorStrokeLayer;
-(long long)startingIndex;
-(TSTStrokeLayer *)minorStrokeLayer;
-(id)nextStrokeAndRange:(id)arg1 ;
-(id)p_findStrokeAndRangeAtIndex:(long long)arg1 highOrderToken:(id)arg2 updatingLowOrderToken:(id*)arg3 lowOrderLayer:(id)arg4 ;
-(void)enumerateStrokesUsingBlock:(/*^block*/id)arg1 ;
-(void)insertStroke:(id)arg1 inRange:(TSTSimpleRange)arg2 order:(int)arg3 ;
-(void)setMajorStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(void)setMinorStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

