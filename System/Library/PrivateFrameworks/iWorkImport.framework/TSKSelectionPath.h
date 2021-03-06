/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, NSString;

@interface TSKSelectionPath : NSObject {

	NSArray* mCurrentSelection;

}

@property (nonatomic,readonly) BOOL selectsMultipleTables; 
@property (nonatomic,readonly) BOOL isEditingTableCell; 
@property (nonatomic,readonly) BOOL isEditingTableName; 
@property (nonatomic,readonly) NSArray * orderedSelections; 
@property (nonatomic,readonly) NSString * UUIDDescription; 
+(id)selectionPathWithSelectionArray:(id)arg1 ;
-(id)initWithArchive:(const SelectionPathArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mostSpecificSelectionOfClass:(Class)arg1 ;
-(NSString *)UUIDDescription;
-(id)initWithSelectionArray:(id)arg1 ;
-(id)selectionPathWithAppendedSelections:(id)arg1 ;
-(NSArray *)orderedSelections;
-(id)selectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForSelection:(id)arg1 ;
-(id)selectionPathWithAppendedSelection:(id)arg1 ;
-(id)selectionPathPoppingOffSelection:(id)arg1 ;
-(id)selectionPathPoppingToSelection:(id)arg1 ;
-(id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2 ;
-(id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1 ;
-(id)mostSpecificSelectionConformingToProtocol:(id)arg1 ;
-(id)leastSpecificSelectionOfClass:(Class)arg1 ;
-(void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(/*^block*/id)arg1 ;
-(void)saveToArchive:(SelectionPathArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(id)controlCellSelection;
-(id)tableNameSelection;
-(id)cellSelection;
-(id)autofillSelection;
-(id)strokeSelection;
-(id)containedCellTextEditingSelection;
-(id)tableNameTextEditingSelection;
-(id)selectionPathByFixingUpControlCellSelection;
-(id)selectionPathWithControlCellSelectionRemovedForConfiguration;
-(id)selectionPathWithTableTextEditingSelectionRemoved;
-(id)selectionPathByFixingUpRowColumnSelection;
-(BOOL)selectsMultipleTables;
-(BOOL)isEditingTableCell;
-(BOOL)isEditingTableName;
-(id)formulaSelection;
-(id)singleSelectedTableInfo;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

