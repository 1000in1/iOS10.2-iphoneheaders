/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Accounts/Authentication/AppleIDSSOAuthenticationPlugin.bundle/AppleIDSSOAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class AKAppleIDAuthenticationController, NSString;

@interface AppleIDSSOAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin> {

	AKAppleIDAuthenticationController* _authController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_authController;
-(void)_attemptSilentCredentialRenewalForAccount:(id)arg1 store:(id)arg2 services:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_standardAuthContextForAccount:(id)arg1 store:(id)arg2 services:(id)arg3 ;
-(id)_silentAuthContextForAccount:(id)arg1 rawPassword:(id)arg2 store:(id)arg3 services:(id)arg4 ;
-(void)_attemptInteractiveCredentialRenewalForAccount:(id)arg1 store:(id)arg2 services:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
