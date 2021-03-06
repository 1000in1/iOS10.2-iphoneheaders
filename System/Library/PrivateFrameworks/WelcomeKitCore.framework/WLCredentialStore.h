/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLAuthenticationCredentials, WLDeviceAuthentication;

@interface WLCredentialStore : NSObject {

	WLAuthenticationCredentials* _credentials;
	WLDeviceAuthentication* _authentication;

}
+(id)sharedInstance;
-(id)init;
-(void)setCredentials:(id)arg1 forAuthentication:(id)arg2 ;
-(id)credentialsForAuthentication:(id)arg1 ;
-(id)currentAuthentication;
@end

