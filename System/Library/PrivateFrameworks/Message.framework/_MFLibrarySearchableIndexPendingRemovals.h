/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface _MFLibrarySearchableIndexPendingRemovals : NSObject {

	NSMutableDictionary* _reasonsByIdentifier;

}

@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) NSArray * purgedIdentifiers; 
@property (nonatomic,readonly) NSArray * deletedIdentifiers; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(NSArray *)identifiers;
-(NSArray *)purgedIdentifiers;
-(void)removeIdentifier:(id)arg1 ;
-(void)addIdentifiers:(id)arg1 withReasons:(id)arg2 ;
-(void)removeAllIdentifiers;
-(id)_identifiersPassingReasonsTest:(/*^block*/id)arg1 ;
-(NSArray *)deletedIdentifiers;
@end

