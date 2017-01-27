/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString * acceptCharset; 
@property (copy) NSString * action; 
@property (copy) NSString * enctype; 
@property (copy) NSString * encoding; 
@property (copy) NSString * method; 
@property (copy) NSString * name; 
@property (copy) NSString * target; 
@property (readonly) DOMHTMLCollection * elements; 
@property (readonly) int length; 
-(BOOL)checkValidity;
-(NSString *)acceptCharset;
-(void)setAcceptCharset:(NSString *)arg1 ;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(NSString *)enctype;
-(void)setEnctype:(NSString *)arg1 ;
-(BOOL)noValidate;
-(void)setNoValidate:(BOOL)arg1 ;
-(void)setAutocorrect:(BOOL)arg1 ;
-(id)autocapitalize;
-(void)setAutocapitalize:(id)arg1 ;
-(void)submit;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)length;
-(DOMHTMLCollection *)elements;
-(NSString *)action;
-(void)reset;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)setAction:(NSString *)arg1 ;
-(BOOL)autocorrect;
-(NSString *)method;
-(int)structuralComplexityContribution;
-(void)setMethod:(NSString *)arg1 ;
-(void)setEncoding:(NSString *)arg1 ;
-(NSString *)encoding;
@end
