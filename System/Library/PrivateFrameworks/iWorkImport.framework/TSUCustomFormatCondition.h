/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying> {

	int mConditionType;
	double mConditionValue;
	TSUCustomFormatData* mData;

}

@property (nonatomic,readonly) int conditionType; 
@property (nonatomic,readonly) double conditionValue; 
@property (nonatomic,readonly) TSUCustomFormatData * data; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUCustomFormatData *)data;
-(int)conditionType;
-(double)conditionValue;
-(id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
@end

