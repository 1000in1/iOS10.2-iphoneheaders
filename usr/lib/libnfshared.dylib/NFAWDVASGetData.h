/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCEVASGetData, NSData, NSString;

@interface NFAWDVASGetData : NSObject <NFAWDEventProtocol> {

	BOOL _signupOnly;
	unsigned _version;
	unsigned _terminalCapabilities;
	unsigned _filterType;
	unsigned _filterValue;
	unsigned _swStatus;
	AWDNFCHCEVASGetData* _metric;

}

@property (assign,nonatomic) unsigned version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL signupOnly;                            //@synthesize signupOnly=_signupOnly - In the implementation block
@property (assign,nonatomic) unsigned terminalCapabilities;              //@synthesize terminalCapabilities=_terminalCapabilities - In the implementation block
@property (nonatomic,retain) NSData * merchantID; 
@property (nonatomic,retain) NSString * merchantURL; 
@property (assign,nonatomic) unsigned filterType;                        //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) unsigned filterValue;                       //@synthesize filterValue=_filterValue - In the implementation block
@property (assign,nonatomic) unsigned swStatus;                          //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,retain) AWDNFCHCEVASGetData * metric;               //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)filterType;
-(void)setFilterType:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setMerchantURL:(NSString *)arg1 ;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(void)setMerchantID:(NSData *)arg1 ;
-(void)setSignupOnly:(BOOL)arg1 ;
-(void)setTerminalCapabilities:(unsigned)arg1 ;
-(BOOL)signupOnly;
-(unsigned)terminalCapabilities;
-(NSData *)merchantID;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
-(void)setMetric:(AWDNFCHCEVASGetData *)arg1 ;
-(AWDNFCHCEVASGetData *)metric;
-(unsigned)filterValue;
-(void)setFilterValue:(unsigned)arg1 ;
-(NSString *)merchantURL;
@end

