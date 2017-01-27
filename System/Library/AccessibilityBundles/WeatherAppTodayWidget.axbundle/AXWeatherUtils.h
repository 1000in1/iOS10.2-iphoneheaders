/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/WeatherAppTodayWidget.axbundle/WeatherAppTodayWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXWeatherUtils : NSObject
+(id)sharedInstance;
-(id)_weatherFrameworkBundle;
-(id)_weatherDescriptionKeyForGenericIconName:(id)arg1 ;
-(id)_localizedStringForWeatherDescription:(id)arg1 ;
-(id)descriptionForWeatherConditionImageName:(id)arg1 ;
-(id)descriptionForWeatherConditionCode:(long long)arg1 ;
-(id)descriptionForPrecipitation:(id)arg1 weatherConditionCode:(long long)arg2 ;
-(void)_debugAssertWeatherDescriptionKeyIsValid:(id)arg1 ;
@end
