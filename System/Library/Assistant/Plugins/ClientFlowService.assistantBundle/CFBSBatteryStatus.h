/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface CFBSBatteryStatus : SADomainObject

@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSNumber * batteryPercent; 
@property (nonatomic,copy) NSNumber * batteryCharging; 
@property (nonatomic,copy) NSNumber * lowBattery; 
+(id)object;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(void)setLowBattery:(NSNumber *)arg1 ;
-(void)setBatteryPercent:(NSNumber *)arg1 ;
-(void)setBatteryCharging:(NSNumber *)arg1 ;
-(NSNumber *)batteryPercent;
-(NSNumber *)batteryCharging;
-(NSNumber *)lowBattery;
@end

