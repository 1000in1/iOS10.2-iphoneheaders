/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSDictionary, NSString;

@interface MPUStringTruncationStrategy : NSObject {

	NSDictionary* _textAttributes;
	NSString* _truncationTokenFormat;
	NSString* _componentsNameSingular;
	NSString* _componentsNamePlural;
	CGSize _drawingSize;

}

@property (nonatomic,readonly) NSDictionary * textAttributes;              //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,readonly) CGSize drawingSize;                         //@synthesize drawingSize=_drawingSize - In the implementation block
@property (nonatomic,copy) NSString * truncationTokenFormat;               //@synthesize truncationTokenFormat=_truncationTokenFormat - In the implementation block
@property (nonatomic,copy) NSString * componentsNameSingular;              //@synthesize componentsNameSingular=_componentsNameSingular - In the implementation block
@property (nonatomic,copy) NSString * componentsNamePlural;                //@synthesize componentsNamePlural=_componentsNamePlural - In the implementation block
+(id)truncationStrategyWithTextAttributes:(id)arg1 drawingSize:(CGSize)arg2 ;
-(NSDictionary *)textAttributes;
-(NSString *)truncationTokenFormat;
-(CGSize)drawingSize;
-(NSString *)componentsNameSingular;
-(NSString *)componentsNamePlural;
-(id)initWithTextAttributes:(id)arg1 drawingSize:(CGSize)arg2 ;
-(void)setTruncationTokenFormat:(NSString *)arg1 ;
-(void)setComponentsNameSingular:(NSString *)arg1 ;
-(void)setComponentsNamePlural:(NSString *)arg1 ;
@end

