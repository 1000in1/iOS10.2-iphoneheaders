/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAAccessory, NSString, NSInputStream, NSOutputStream;

@interface EASession : NSObject {

	EAAccessory* _accessory;
	unsigned _sessionID;
	NSString* _protocolString;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _openCompleted;
	int _sock;

}

@property (nonatomic,readonly) EAAccessory * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * protocolString;                  //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_shortDescription;
-(NSOutputStream *)outputStream;
-(NSString *)protocolString;
-(unsigned)_sessionID;
-(void)_streamClosed;
-(id)initWithAccessory:(id)arg1 forProtocol:(id)arg2 ;
-(void)_endStreams;
-(BOOL)isOpenCompleted;
-(void)setOpenCompleted:(BOOL)arg1 ;
-(EAAccessory *)accessory;
-(NSInputStream *)inputStream;
@end

