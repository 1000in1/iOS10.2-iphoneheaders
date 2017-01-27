/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNAnimationEvent : NSObject {

	double _eventTime;
	/*^block*/id _eventBlock;

}
+(id)animationEventWithKeyTime:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setEventBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)eventBlock;
@end
