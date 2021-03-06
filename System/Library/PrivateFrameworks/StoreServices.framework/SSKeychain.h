/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSKeychain : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(void)_sendMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 reason:(id)arg2 fallback:(id)arg3 cancel:(id)arg4 forAccountIdentifier:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)createAttestationDataForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deleteKeychainTokensForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 withPrompt:(id)arg2 forAccountIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)init;
@end

