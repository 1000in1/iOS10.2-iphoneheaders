/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <libobjc.A.dylib/CIImageProcessorOutput.h>

@protocol CIImageProcessorOutput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
@required
-(void*)baseAddress;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(int)format;
-(CGRect)region;
-(CVBufferRef)pixelBuffer;
-(unsigned long long)bytesPerRow;
-(id<MTLTexture>)metalTexture;

@end


@protocol MTLCommandBuffer;
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {

	id<MTLCommandBuffer> _cmdBuffer;

}

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
-(void*)baseAddress;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 bounds:(CGRect)arg3 context:(Context*)arg4 ;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(BOOL)metalCommandBufferRequested;
-(void)dealloc;
-(id<MTLTexture>)metalTexture;
@end
