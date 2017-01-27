/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SAMLParserController : NSObject {

	NSData* _schemaData;

}

@property (nonatomic,retain) NSData * schemaData;              //@synthesize schemaData=_schemaData - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(id)schema;
-(id)newAuthNRequest:(id)arg1 error:(id*)arg2 ;
-(id)newAttributeQuery:(id)arg1 error:(id*)arg2 ;
-(id)newLogoutRequest:(id*)arg1 ;
-(id)parseCachedResponse:(id)arg1 error:(id*)arg2 ;
-(id)parseResponse:(id)arg1 error:(id*)arg2 ;
-(NSData *)schemaData;
-(id)dataFromString:(id)arg1 error:(id*)arg2 ;
-(id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id*)arg3 ;
-(void)setSchemaData:(NSData *)arg1 ;
@end
