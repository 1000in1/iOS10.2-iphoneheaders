/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AggDTemperatureHistogram : NSObject {

	unsigned long long _bins[32];
	unsigned long long _sampleCount;
	int _idx;
	const int* _binBoundaries;
	int _mostRecentBin;

}
-(id)initWithIndex:(int)arg1 histogramType:(int)arg2 ;
-(void)incrementMostRecentBin:(unsigned)arg1 ;
-(int)temperatureToHistogramBinIndex:(int)arg1 ;
-(void)uploadToAggD;
-(void)incrementBinForTemperature:(int)arg1 ;
-(void)incrementBinForTemperature:(int)arg1 count:(unsigned)arg2 ;
@end
