/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, NSMutableData;

@interface BWMotionDataPreserver : NSObject {

	NSString* _name;
	NSMutableData* _preservedISPMotionData;
	NSMutableData* _preservedISPHallData;

}
+(void)initialize;
-(void)dealloc;
-(void)reset;
-(id)initWithName:(id)arg1 ;
-(BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_preserveMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 willBeDropped:(BOOL)arg2 ;
@end
