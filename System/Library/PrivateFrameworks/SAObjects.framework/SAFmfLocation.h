/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALocation.h>

@class NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (nonatomic,copy) NSNumber * distance; 
@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSNumber * locationDate; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(NSNumber *)locationDate;
-(void)setLocationDate:(NSNumber *)arg1 ;
@end

