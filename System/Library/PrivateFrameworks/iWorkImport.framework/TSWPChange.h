/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSPCopying.h>
#import <iWorkImport/TSWPTextSpanningObject.h>

@class TSWPStorage, TSWPChangeSession, NSDate, NSString, TSUColor;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject> {

	TSWPStorage* _parentStorage;
	int _kind;
	TSWPChangeSession* _session;
	NSDate* _date;
	NSString* _textAttributeUUIDString;
	BOOL _changeWasAddedToDocumentRoot;

}

@property (assign,nonatomic) BOOL changeWasAddedToDocumentRoot;                 //@synthesize changeWasAddedToDocumentRoot=_changeWasAddedToDocumentRoot - In the implementation block
@property (assign,nonatomic) TSWPStorage * parentStorage;                       //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,retain) TSWPChangeSession * session; 
@property (nonatomic,retain) NSDate * date; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) int kind;                                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL isInsertion; 
@property (nonatomic,readonly) BOOL isDeletion; 
@property (nonatomic,readonly) BOOL showsMarkup; 
@property (nonatomic,readonly) BOOL showsHiddenDeletionMarkup; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * textAttributeUUIDString; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(TSUColor *)textMarkupColor;
-(TSUColor *)changeAdornmentsColor;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(BOOL)isDeletion;
-(BOOL)isEquivalentToObject:(id)arg1 ;
-(void)resetTextAttributeUUIDString;
-(NSString *)textAttributeUUIDString;
-(void)i_setTextAttributeUUIDString:(id)arg1 ;
-(void)trackedTextDidChange;
-(BOOL)isInsertion;
-(BOOL)showsMarkup;
-(BOOL)showsHiddenDeletionMarkup;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2 ;
-(BOOL)changeWasAddedToDocumentRoot;
-(void)setChangeWasAddedToDocumentRoot:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3 ;
-(BOOL)canMergeWithKind:(int)arg1 session:(id)arg2 ;
-(BOOL)isFromChangeSession:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(NSDate *)date;
-(id)initWithContext:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(int)kind;
-(void)setSession:(TSWPChangeSession *)arg1 ;
-(TSWPChangeSession *)session;
@end

