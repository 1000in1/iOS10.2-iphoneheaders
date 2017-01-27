/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface UMUserSwitchContext : NSObject {

	BOOL _secondaryActionRequired;
	NSData* _setupData;
	NSString* _shortLivedToken;

}

@property (nonatomic,copy) NSData * setupData;                          //@synthesize setupData=_setupData - In the implementation block
@property (nonatomic,copy) NSString * shortLivedToken;                  //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
@property (assign,nonatomic) BOOL secondaryActionRequired;              //@synthesize secondaryActionRequired=_secondaryActionRequired - In the implementation block
+(id)contextWithDataRepresentation:(id)arg1 ;
+(id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(BOOL)arg3 ;
-(id)description;
-(id)dictRepresentation;
-(void)setSetupData:(NSData *)arg1 ;
-(void)setShortLivedToken:(NSString *)arg1 ;
-(void)setSecondaryActionRequired:(BOOL)arg1 ;
-(NSData *)setupData;
-(NSString *)shortLivedToken;
-(BOOL)secondaryActionRequired;
-(id)dataRepresentation;
@end
