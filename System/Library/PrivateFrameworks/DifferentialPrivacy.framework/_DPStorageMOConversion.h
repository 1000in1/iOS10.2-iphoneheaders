/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID;


@protocol _DPStorageMOConversion
@property (nonatomic,retain) NSManagedObjectID * objectId; 
@property (assign,nonatomic) BOOL submitted; 
@required
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1;
-(BOOL)copyToManagedObject:(id)arg1;
-(id)entityName;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(id)arg1;
-(void)setSubmitted:(BOOL)arg1;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1;

@end
