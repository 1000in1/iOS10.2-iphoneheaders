/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/DownloadHandle.h>

@class NSString, NSNumber;

@interface ApplicationHandle : DownloadHandle {

	BOOL _isRedownload;
	NSString* _artistName;
	NSString* _bundleID;
	NSString* _clientID;
	NSNumber* _itemID;
	NSString* _itemName;

}

@property (nonatomic,copy) NSString * artistName;                //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                    //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                  //@synthesize itemName=_itemName - In the implementation block
@property (assign,nonatomic) BOOL isRedownload;                  //@synthesize isRedownload=_isRedownload - In the implementation block
-(id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2 bundleIdentifier:(id)arg3 ;
-(id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2 ;
-(id)initWithDownloadHandle:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setIsRedownload:(BOOL)arg1 ;
-(NSString *)itemName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)itemID;
-(void)setItemID:(NSNumber *)arg1 ;
-(BOOL)isRedownload;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
@end

