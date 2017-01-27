/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class NSString, BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, BRCFSRootItem;

@interface BRCSymlinkItem : BRCLocalItem {

	NSString* _symlinkTarget;

}

@property (nonatomic,readonly) BRCAliasItem * asBRAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BRCFSRootItem * asFSRoot; 
@property (nonatomic,readonly) NSString * symlinkTarget;                    //@synthesize symlinkTarget=_symlinkTarget - In the implementation block
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)isSymLink;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(id)_initWithLocalItem:(id)arg1 ;
-(id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(id)asSymlink;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(NSString *)symlinkTarget;
-(float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2 ;
-(void)readTargetFromRelativePathAndSyncUp:(id)arg1 ;
@end
