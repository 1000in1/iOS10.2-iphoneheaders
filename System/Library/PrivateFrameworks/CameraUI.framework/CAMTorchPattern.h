/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject {

	float _torchLevel;
	long long __type;
	CAAnimationGroup* __animationGroup;
	double __lastUpdateTime;
	double _startTime;

}

@property (nonatomic,readonly) long long _type;                                 //@synthesize _type=__type - In the implementation block
@property (nonatomic,readonly) CAAnimationGroup * _animationGroup;              //@synthesize _animationGroup=__animationGroup - In the implementation block
@property (nonatomic,readonly) double _lastUpdateTime;                          //@synthesize _lastUpdateTime=__lastUpdateTime - In the implementation block
@property (assign,nonatomic) double startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) float torchLevel;                                //@synthesize torchLevel=_torchLevel - In the implementation block
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(double)startTime;
-(long long)_type;
-(void)_updateAnimationGroup;
-(id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(id)_shortPatternAnimationGroup;
-(id)_longPatternAnimationGroup;
-(id)_blinkAnimationGroup;
-(id)_doubleBlinkAnimationGroup;
-(void)updateAtTime:(double)arg1 ;
-(float)torchLevel;
-(CAAnimationGroup *)_animationGroup;
-(double)_lastUpdateTime;
@end
