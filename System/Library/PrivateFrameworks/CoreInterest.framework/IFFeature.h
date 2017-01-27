/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreInterest/CoreInterest-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IFFeature : NSObject <NSCopying> {

	NSString* _type;
	NSString* _term;
	NSString* _client;
	double _score;

}

@property (copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * term;                //@synthesize term=_term - In the implementation block
@property (copy,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (readonly) double score;                        //@synthesize score=_score - In the implementation block
+(id)featureWithType:(id)arg1 term:(id)arg2 client:(id)arg3 score:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)term;
-(NSString *)client;
-(double)score;
-(id)initWithType:(id)arg1 term:(id)arg2 client:(id)arg3 score:(double)arg4 ;
-(BOOL)isEqualToFeature:(id)arg1 ;
@end
