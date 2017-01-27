/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SBWorkItem : NSObject {

	/*^block*/id _workBlock;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) id work;                       //@synthesize workBlock=_workBlock - In the implementation block
-(id)initWithWork:(/*^block*/id)arg1 ;
-(id)work;
-(NSDate *)creationDate;
@end
