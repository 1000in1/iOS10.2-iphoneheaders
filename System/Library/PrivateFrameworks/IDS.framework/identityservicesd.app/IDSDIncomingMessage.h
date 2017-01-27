/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IDSDIncomingMessage : NSObject {

	NSString* _guid;
	NSDictionary* _message;
	NSString* _fromID;
	NSString* _topic;
	BOOL _isLocal;

}

@property (copy) NSDictionary * message;              //@synthesize message=_message - In the implementation block
@property (copy) NSString * fromID;                   //@synthesize fromID=_fromID - In the implementation block
@property (copy) NSString * topic;                    //@synthesize topic=_topic - In the implementation block
@property (copy) NSString * guid;                     //@synthesize guid=_guid - In the implementation block
@property (assign) BOOL isLocal;                      //@synthesize isLocal=_isLocal - In the implementation block
-(id)initWithMessage:(id)arg1 fromID:(id)arg2 topic:(id)arg3 guid:(id)arg4 isLocal:(BOOL)arg5 ;
-(BOOL)isLocal;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(NSString *)fromID;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(void)setIsLocal:(BOOL)arg1 ;
@end
