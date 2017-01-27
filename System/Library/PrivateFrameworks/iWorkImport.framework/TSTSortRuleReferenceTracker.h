/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCEReferenceTrackerDelegate.h>

@class TSTTableInfo, NSMutableSet, TSCEReferenceTracker, NSString;

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate> {

	TSTTableInfo* mTableInfo;
	NSMutableSet* mReferences;
	TSCEReferenceTracker* mReferenceTracker;

}

@property (assign,nonatomic) TSTTableInfo * tableInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerWithCalculationEngine:(id)arg1 ;
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2 ;
-(void)referencedCellWasModified:(id)arg1 ;
-(BOOL)shouldRewriteOnSort;
-(BOOL)shouldRewriteOnRangeMove;
-(BOOL)shouldRewriteOnTectonicShift;
-(BOOL)shouldRewriteOnCellMerge;
-(BOOL)shouldRewriteOnTranspose;
-(BOOL)shouldRewriteOnTableIDReassignment;
-(id)cellRangeWasInserted:(SCD_Struct_TS360*)arg1 ;
-(void)encodeToArchive:(SortRuleReferenceTrackerArchive*)arg1 archiver:(id)arg2 ;
-(void)unregisterFromCalculationEngine;
-(id)initFromArchive:(const SortRuleReferenceTrackerArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithTableInfo:(id)arg1 context:(id)arg2 ;
-(void)updateForSortRules:(id)arg1 ;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(TSTTableInfo *)tableInfo;
-(TSCECReference*)p_cReferenceForColumnIndex:(unsigned char)arg1 ;
-(id)p_ruleReferenceForTrackedReference:(id)arg1 ;
-(unsigned char)p_columnForTrackedReference:(id)arg1 ;
-(void)dealloc;
-(void)setOwnerID:(CFUUIDRef)arg1 ;
-(CFUUIDRef)ownerID;
@end
