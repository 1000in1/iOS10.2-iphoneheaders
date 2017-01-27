/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBPressSequenceSettings : NSObject {

	unsigned long long _numberOfPresses;
	double _maxDefaultPressDownDuration;
	double _maxDefaultPressUpDuration;
	double _maxDownToDownDuration;
	unsigned long long _indexOfPressDownToUseForVarianceAndGrowth;
	unsigned long long _numberOfPressDownGrowthTerms;
	unsigned long long _indexOfPressUpToUseForVarianceAndGrowth;
	unsigned long long _numberOfPressUpGrowthTerms;
	double _pressDownVariance;
	double _pressUpVariance;

}

@property (assign,nonatomic) unsigned long long numberOfPresses;                                        //@synthesize numberOfPresses=_numberOfPresses - In the implementation block
@property (assign,nonatomic) double maxDefaultPressDownDuration;                                        //@synthesize maxDefaultPressDownDuration=_maxDefaultPressDownDuration - In the implementation block
@property (assign,nonatomic) double maxDefaultPressUpDuration;                                          //@synthesize maxDefaultPressUpDuration=_maxDefaultPressUpDuration - In the implementation block
@property (assign,nonatomic) double maxDownToDownDuration;                                              //@synthesize maxDownToDownDuration=_maxDownToDownDuration - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfPressDownToUseForVarianceAndGrowth;              //@synthesize indexOfPressDownToUseForVarianceAndGrowth=_indexOfPressDownToUseForVarianceAndGrowth - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPressDownGrowthTerms;                           //@synthesize numberOfPressDownGrowthTerms=_numberOfPressDownGrowthTerms - In the implementation block
@property (assign,nonatomic) unsigned long long indexOfPressUpToUseForVarianceAndGrowth;                //@synthesize indexOfPressUpToUseForVarianceAndGrowth=_indexOfPressUpToUseForVarianceAndGrowth - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPressUpGrowthTerms;                             //@synthesize numberOfPressUpGrowthTerms=_numberOfPressUpGrowthTerms - In the implementation block
@property (assign,nonatomic) double pressDownVariance;                                                  //@synthesize pressDownVariance=_pressDownVariance - In the implementation block
@property (assign,nonatomic) double pressUpVariance;                                                    //@synthesize pressUpVariance=_pressUpVariance - In the implementation block
-(unsigned long long)numberOfPresses;
-(void)setNumberOfPresses:(unsigned long long)arg1 ;
-(double)maxDefaultPressDownDuration;
-(void)setMaxDefaultPressDownDuration:(double)arg1 ;
-(double)maxDefaultPressUpDuration;
-(void)setMaxDefaultPressUpDuration:(double)arg1 ;
-(double)maxDownToDownDuration;
-(void)setMaxDownToDownDuration:(double)arg1 ;
-(unsigned long long)indexOfPressDownToUseForVarianceAndGrowth;
-(void)setIndexOfPressDownToUseForVarianceAndGrowth:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPressDownGrowthTerms;
-(void)setNumberOfPressDownGrowthTerms:(unsigned long long)arg1 ;
-(unsigned long long)indexOfPressUpToUseForVarianceAndGrowth;
-(void)setIndexOfPressUpToUseForVarianceAndGrowth:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPressUpGrowthTerms;
-(void)setNumberOfPressUpGrowthTerms:(unsigned long long)arg1 ;
-(double)pressDownVariance;
-(void)setPressDownVariance:(double)arg1 ;
-(double)pressUpVariance;
-(void)setPressUpVariance:(double)arg1 ;
@end
