/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent {

	unsigned long long _dataSyncState;

}

@property (assign,nonatomic) unsigned long long dataSyncState;              //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(id)uuid;
+(id)dataSyncStateEstablished:(unsigned long long)arg1 ;
-(unsigned long long)dataSyncState;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(id)initWithDataSyncState:(unsigned long long)arg1 ;
@end
