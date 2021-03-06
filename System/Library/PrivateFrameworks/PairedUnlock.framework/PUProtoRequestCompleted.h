/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedUnlock/PairedUnlock-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PUProtoRequestCompleted : PBCodable <NSCopying> {

	NSData* _errorData;
	unsigned _messageID;
	BOOL _success;

}

@property (assign,nonatomic) unsigned messageID;               //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) BOOL success;                     //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;               //@synthesize errorData=_errorData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)success;
-(void)setErrorData:(NSData *)arg1 ;
-(NSData *)errorData;
-(BOOL)hasErrorData;
-(unsigned)messageID;
-(void)setMessageID:(unsigned)arg1 ;
@end

