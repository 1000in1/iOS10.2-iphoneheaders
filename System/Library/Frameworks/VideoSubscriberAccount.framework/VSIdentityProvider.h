/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {

	BOOL _prohibitedByStore;
	BOOL _developer;
	NSString* _uniqueID;
	NSString* _providerID;
	NSString* _nameForSorting;
	NSArray* _supportedTemplates;
	NSArray* _supportedAuthenticationSchemes;
	NSURL* _authenticationURL;
	NSURL* _appStoreRoomURL;
	NSString* _appAdamID;

}

@property (nonatomic,copy) NSString * uniqueID;                                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * providerID;                                                 //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,copy) NSString * nameForSorting;                                             //@synthesize nameForSorting=_nameForSorting - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy) NSArray * supportedTemplates;                                          //@synthesize supportedTemplates=_supportedTemplates - In the implementation block
@property (nonatomic,copy) NSArray * supportedAuthenticationSchemes;                              //@synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes - In the implementation block
@property (assign,getter=isProhibitedByStore,nonatomic) BOOL prohibitedByStore;                   //@synthesize prohibitedByStore=_prohibitedByStore - In the implementation block
@property (nonatomic,readonly) BOOL supportsTemplatesSufficientForSomeKnownPlatform; 
@property (nonatomic,readonly) BOOL supportsTemplatesSufficientForCurrentPlatform; 
@property (assign,getter=isDeveloper,nonatomic) BOOL developer;                                   //@synthesize developer=_developer - In the implementation block
@property (nonatomic,copy) NSURL * authenticationURL;                                             //@synthesize authenticationURL=_authenticationURL - In the implementation block
@property (nonatomic,copy) NSURL * appStoreRoomURL;                                               //@synthesize appStoreRoomURL=_appStoreRoomURL - In the implementation block
@property (nonatomic,copy) NSString * appAdamID;                                                  //@synthesize appAdamID=_appAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingDisplayName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)providerID;
-(void)setProviderID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)appAdamID;
-(void)setAppAdamID:(NSString *)arg1 ;
-(BOOL)isProhibitedByStore;
-(BOOL)supportsTemplatesSufficientForCurrentPlatform;
-(BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg1 ;
-(NSURL *)appStoreRoomURL;
-(NSArray *)supportedAuthenticationSchemes;
-(void)setNameForSorting:(NSString *)arg1 ;
-(void)setAuthenticationURL:(NSURL *)arg1 ;
-(void)setAppStoreRoomURL:(NSURL *)arg1 ;
-(void)setSupportedTemplates:(NSArray *)arg1 ;
-(void)setSupportedAuthenticationSchemes:(NSArray *)arg1 ;
-(void)setProhibitedByStore:(BOOL)arg1 ;
-(BOOL)isDeveloper;
-(BOOL)supportsTemplatesSufficientForSomeKnownPlatform;
-(NSURL *)authenticationURL;
-(void)setDeveloper:(BOOL)arg1 ;
-(NSString *)nameForSorting;
-(NSArray *)supportedTemplates;
@end

