/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKTSDPathCut : NSObject {

	long long mSegment;
	double mT;
	double mSkew;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double skew; 
-(id)description;
-(double)t;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3 ;
-(double)skew;
-(long long)segment;
@end

