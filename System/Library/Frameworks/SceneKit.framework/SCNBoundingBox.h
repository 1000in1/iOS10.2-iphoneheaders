/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNBoundingBox : NSObject {

	SCNVector3 min;
	SCNVector3 max;

}

@property (assign,nonatomic) SCNVector3 min; 
@property (assign,nonatomic) SCNVector3 max; 
-(id)description;
-(SCNVector3)min;
-(void)setMin:(SCNVector3)arg1 ;
-(SCNVector3)max;
-(void)setMax:(SCNVector3)arg1 ;
@end
