/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject {

	NSObject*<OS_dispatch_data> _remainingData;
	/*^block*/id _completion;

}
-(void)callCompletion;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)drain:(CFWriteStreamRef)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
