/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSMutableDictionary, DownloadSessionProperties, NSURLCredential, NSString;

@interface DownloadHandlerSession : NSObject <NSCopying> {

	long long _activeHandlerIdentifier;
	NSError* _error;
	NSMutableDictionary* _propertyValues;
	long long _sessionID;
	DownloadSessionProperties* _sessionProperties;
	NSURLCredential* _urlCredential;

}

@property (nonatomic,readonly) DownloadSessionProperties * sessionProperties;              //@synthesize sessionProperties=_sessionProperties - In the implementation block
@property (nonatomic,readonly) long long sessionID;                                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) long long activeHandlerIdentifier;                            //@synthesize activeHandlerIdentifier=_activeHandlerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL blocksOtherDownloads; 
@property (assign,nonatomic) BOOL canBePaused; 
@property (assign,nonatomic) BOOL needsPowerAssertion; 
@property (assign,nonatomic) float percentComplete; 
@property (assign,nonatomic) long long sessionState; 
@property (nonatomic,copy) NSString * statusDescription; 
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSURLCredential * URLCredential;                                //@synthesize urlCredential=_urlCredential - In the implementation block
-(DownloadSessionProperties *)sessionProperties;
-(id)initWithSessionProperties:(id)arg1 ;
-(void)setActiveHandlerIdentifier:(long long)arg1 ;
-(void)setSessionPropertyValues:(id)arg1 ;
-(void)setURLCredential:(NSURLCredential *)arg1 ;
-(long long)activeHandlerIdentifier;
-(void)setValue:(id)arg1 forSessionProperty:(id)arg2 ;
-(id)valueForSessionProperty:(id)arg1 ;
-(NSURLCredential *)URLCredential;
-(BOOL)blocksOtherDownloads;
-(BOOL)canBePaused;
-(BOOL)needsPowerAssertion;
-(void)setBlocksOtherDownloads:(BOOL)arg1 ;
-(void)setNeedsPowerAssertion:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(float)percentComplete;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(long long)sessionID;
-(long long)sessionState;
-(void)setSessionState:(long long)arg1 ;
-(void)setCanBePaused:(BOOL)arg1 ;
-(void)setStatusDescription:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)statusDescription;
@end

