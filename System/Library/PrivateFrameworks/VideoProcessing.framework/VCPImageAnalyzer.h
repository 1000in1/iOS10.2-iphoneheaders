/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageAnalyzer : NSObject
-(int)processTile:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 results:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
-(int)analyzePixelBufferInTiles:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 results:(id)arg3 cancel:(/*^block*/id)arg4 ;
@end
