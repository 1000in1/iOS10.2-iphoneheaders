/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLBasebandLogChannelDelegate;
#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
@interface PLBasebandLogChannel : NSObject {

	CFMessagePortRef remotePort;
	CFMessagePortRef localPort;
	BOOL cachingEnabled;
	id<PLBasebandLogChannelDelegate> delegate;

}

@property (assign,nonatomic) id<PLBasebandLogChannelDelegate> delegate; 
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) BOOL cachingEnabled; 
-(id)init;
-(void)setDelegate:(id<PLBasebandLogChannelDelegate>)arg1 ;
-(void)dealloc;
-(id<PLBasebandLogChannelDelegate>)delegate;
-(void)invalidate;
-(void)flush;
-(BOOL)isValid;
-(void)close;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(void)sendObjectOverRemotePort:(id)arg1 ;
-(BOOL)cachingEnabled;
-(BOOL)openWithConnection:(id)arg1 ;
-(void)commitHardwareLogs;
-(void)enableLogCodes:(id)arg1 andEvents:(id)arg2 andExtraCode:(id)arg3 ;
-(void)setHardwareLoggingLevel:(unsigned long long)arg1 withWindowSize:(unsigned long long)arg2 ;
-(void)setChannelTimeout:(double)arg1 ;
-(void)connectionInvalidated:(id)arg1 ;
@end
