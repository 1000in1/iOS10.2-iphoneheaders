/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSDeveloperServiceProtocol <NSObject>
@required
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1;

@end
