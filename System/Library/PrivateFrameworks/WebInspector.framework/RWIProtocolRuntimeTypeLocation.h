/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (assign,nonatomic) int typeInformationDescriptor; 
@property (nonatomic,copy) NSString * sourceID; 
@property (assign,nonatomic) int divot; 
-(void)setTypeInformationDescriptor:(int)arg1 ;
-(void)setDivot:(int)arg1 ;
-(id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3 ;
-(int)typeInformationDescriptor;
-(int)divot;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
@end
