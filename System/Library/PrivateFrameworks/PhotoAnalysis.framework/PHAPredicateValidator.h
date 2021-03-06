/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PHAPredicateValidator : NSObject {

	NSSet* _allowedKeyPaths;

}

@property (retain) NSSet * allowedKeyPaths;              //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateExpression:(id)arg1 error:(id*)arg2 ;
-(NSSet *)allowedKeyPaths;
-(void)setAllowedKeyPaths:(NSSet *)arg1 ;
@end

