/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSAuthenticationToken;
@class NSString;

@interface VSAccountAuthentication : NSObject {

	NSString* _username;
	id<VSAuthenticationToken> _authenticationToken;

}

@property (nonatomic,copy) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) id<VSAuthenticationToken> authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
-(id)description;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setAuthenticationToken:(id<VSAuthenticationToken>)arg1 ;
-(id<VSAuthenticationToken>)authenticationToken;
@end

