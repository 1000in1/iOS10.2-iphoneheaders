/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPDistributedMessagingCallout : NSObject {

	id _target;
	SEL _selector;
	BOOL _returnsVoid;
	BOOL _returnsVoidIsValid;

}

@property (nonatomic,retain,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) BOOL returnsVoid;              //@synthesize returnsVoid=_returnsVoid - In the implementation block
-(BOOL)returnsVoid;
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

