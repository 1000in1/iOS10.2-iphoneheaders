/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSDocumentDifferenceSize : NSObject {

	long long _generationCount;
	long long _changeCount;

}

@property (assign,nonatomic) long long generationCount;              //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) long long changeCount;                  //@synthesize changeCount=_changeCount - In the implementation block
-(id)description;
-(long long)changeCount;
-(void)setChangeCount:(long long)arg1 ;
-(long long)generationCount;
-(void)setGenerationCount:(long long)arg1 ;
@end
