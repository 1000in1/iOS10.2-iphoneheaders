/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SBLockScreenLegibilitySettings;


@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) unsigned long long restrictedCapabilities; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) long long presentationStyle; 
@property (assign,nonatomic) long long notificationBehavior; 
@property (nonatomic,copy) NSArray * elementOverrides; 
@property (nonatomic,retain) SBLockScreenLegibilitySettings * legibilitySettings; 
@required
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1;
-(void)setPresentationStyle:(long long)arg1;
-(long long)presentationStyle;
-(void)setLegibilitySettings:(id)arg1;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(unsigned long long)restrictedCapabilities;
-(void)setRestrictedCapabilities:(unsigned long long)arg1;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(id)arg1;

@end
