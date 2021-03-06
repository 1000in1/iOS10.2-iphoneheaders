/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKServerChangeToken, NSError;

@interface FCCKFetchRecordZoneChangesResult : NSObject {

	BOOL _moreChangesToFetch;
	CKServerChangeToken* _serverChangeToken;
	NSError* _error;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreChangesToFetch;                              //@synthesize moreChangesToFetch=_moreChangesToFetch - In the implementation block
@property (nonatomic,retain) NSError * error;                                      //@synthesize error=_error - In the implementation block
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setMoreChangesToFetch:(BOOL)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(BOOL)moreChangesToFetch;
@end

