/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>
#import <libobjc.A.dylib/IKAppDocumentStyleChangeObserving.h>

@class NSArray, IKHeaderElement, NSString;

@interface IKCollectionElement : IKViewElement <IKAppDocumentStyleChangeObserving> {

	NSArray* _sections;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * sections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)sections;
-(void)appDocumentDidMarkStylesDirty;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(IKHeaderElement *)header;
@end

