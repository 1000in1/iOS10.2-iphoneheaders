/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _ignorePCSFailures;
	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                          //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;              //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                           //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
@end

