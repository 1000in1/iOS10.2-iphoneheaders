/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSDomainAccessor, NSString;

@interface StocksWatchPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;
	NPSDomainAccessor* _watchDefaults;

}

@property (assign,nonatomic,__weak) NSString * defaultStockSymbol; 
@property (assign,nonatomic) long long complicationDisplayMode; 
+(void)initialize;
+(id)sharedPreferences;
-(id)init;
-(void)dealloc;
-(void)reactivateWatchNPSAccessor;
-(void)syncKey:(id)arg1 ;
-(NSString *)defaultStockSymbol;
-(void)setDefaultStockSymbol:(NSString *)arg1 ;
-(long long)complicationDisplayMode;
-(void)setComplicationDisplayMode:(long long)arg1 ;
-(void)syncSelectedStock;
-(void)syncStocksList;
-(void)syncChartInterval;
-(void)syncRowDataType;
@end

