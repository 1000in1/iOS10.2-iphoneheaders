/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile {

	BOOL _showSegmentTitles;
	unsigned long long _numberOfSegments;
	unsigned long long _stepperBehavior;
	NSArray* _segmentTitles;

}

@property (assign,nonatomic) unsigned long long numberOfSegments;              //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (assign,nonatomic) unsigned long long stepperBehavior;               //@synthesize stepperBehavior=_stepperBehavior - In the implementation block
@property (assign,nonatomic) BOOL showSegmentTitles;                           //@synthesize showSegmentTitles=_showSegmentTitles - In the implementation block
@property (nonatomic,copy) NSArray * segmentTitles;                            //@synthesize segmentTitles=_segmentTitles - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfSegments;
-(void)setStepperBehavior:(unsigned long long)arg1 ;
-(void)setShowSegmentTitles:(BOOL)arg1 ;
-(id)viewValueForPercentageValue:(double)arg1 round:(BOOL)arg2 ;
-(double)percentageValueForViewValue:(id)arg1 ;
-(BOOL)showSegmentTitles;
-(NSArray *)segmentTitles;
-(void)setNumberOfSegments:(unsigned long long)arg1 ;
-(unsigned long long)stepperBehavior;
-(void)setSegmentTitles:(NSArray *)arg1 ;
@end

