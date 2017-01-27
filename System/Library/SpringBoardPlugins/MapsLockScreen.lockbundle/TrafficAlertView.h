/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/TopBarAlertView.h>

@interface TrafficAlertView : TopBarAlertView {

	unsigned long long _trafficIncidentAlertType;
	SCD_Struct_Tr17 _trafficAlertViewMetrics;

}

@property (assign,nonatomic) SCD_Struct_Tr18 trafficAlertViewMetrics;                                                      //@synthesize trafficAlertViewMetrics=_trafficAlertViewMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long trafficIncidentAlertType;                                                  //@synthesize trafficIncidentAlertType=_trafficIncidentAlertType - In the implementation block
@property (getter=isOptionalRerouteAlert,nonatomic,readonly) BOOL optionalRerouteAlert; 
@property (getter=isForcedRerouteAlert,nonatomic,readonly) BOOL forcedRerouteAlert; 
@property (getter=isHeavyTrafficWithoutRerouteAlert,nonatomic,readonly) BOOL heavyTrafficWithoutRerouteAlert; 
+(id)_buttonTitleFromAlertType:(unsigned long long)arg1 ;
+(long long)_preferredStatusBarStyleWithAlertType:(unsigned long long)arg1 forDarkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
+(id)_textColorWithAlertType:(unsigned long long)arg1 forDarkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
+(id)_buttonBorderColorWithAlertType:(unsigned long long)arg1 forDarkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
+(id)_backgroundColorWithAlertType:(unsigned long long)arg1 forDarkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
+(id)_textButtonColorWithAlertType:(unsigned long long)arg1 forDarkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
+(id)_backgroundButtonColorWithAlertType:(unsigned long long)arg1 forDarkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
+(SCD_Struct_Tr16)_colorSchemeForAlertType:(unsigned long long)arg1 darkUI:(BOOL)arg2 metrics:(SCD_Struct_Tr18)arg3 ;
-(id)initWithTrafficIncidentAlert:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)isForcedRerouteAlert;
-(BOOL)isOptionalRerouteAlert;
-(id)textColorForDimmed:(BOOL)arg1 ;
-(SCD_Struct_Tr18)trafficAlertViewMetrics;
-(BOOL)isHeavyTrafficWithoutRerouteAlert;
-(void)updateFromAlert:(id)arg1 ;
-(void)setTrafficAlertViewMetrics:(SCD_Struct_Tr18)arg1 ;
-(void)updateForDarkUI:(BOOL)arg1 ;
-(void)_refreshStyles;
-(id)initWithTrafficIncidentAlertType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 delegate:(id)arg4 userInfo:(id)arg5 ;
-(long long)preferredStatusBarStyleForDimmed:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)trafficIncidentAlertType;
-(void)setTrafficIncidentAlertType:(unsigned long long)arg1 ;
-(void)setFocusMode:(BOOL)arg1 ;
@end
