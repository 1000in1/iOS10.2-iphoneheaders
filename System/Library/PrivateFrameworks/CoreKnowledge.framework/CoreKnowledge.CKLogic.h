/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CoreKnowledge.CKLogic : NSObject {

	 body;
	 negatedBody;

}

@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * identifier; 
+(id)ifExistsLink:(id)arg1 to:(id)arg2 ;
+(id)ifNotExistsLink:(id)arg1 to:(id)arg2 ;
-(id)init;
-(long long)hash;
-(NSString *)identifier;
-(id)and:(id)arg1 ;
-(id)andExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
@end
