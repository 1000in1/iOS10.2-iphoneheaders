/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFQueueingStrategy.h>

@class NSString;

@interface _MFPriorityQueueStrategy : NSObject <MFQueueingStrategy> {

	/*^block*/id _comparator;

}

@property (nonatomic,readonly) id comparator;                           //@synthesize comparator=_comparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(id)comparator;
-(void)dealloc;
-(NSString *)descriptionType;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2 ;
-(unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end
