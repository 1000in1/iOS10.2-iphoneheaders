/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCStageRegistry, NSString, CKPackage;

@interface BRCLazyPackage : NSObject {

	BRCStageRegistry* _registry;
	NSString* _stageID;
	NSString* _name;
	CKPackage* _package;

}
-(unsigned long long)itemCount;
-(id)initWithRegistry:(id)arg1 stageID:(id)arg2 name:(id)arg3 ;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
-(id)closeAndReturn;
@end

