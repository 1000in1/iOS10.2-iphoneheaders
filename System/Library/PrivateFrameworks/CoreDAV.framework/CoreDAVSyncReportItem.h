/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVMultiStatusItem.h>

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {

	NSString* _syncToken;

}

@property (nonatomic,readonly) NSString * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)description;
-(void)_setSyncTokenItem:(id)arg1 ;
-(NSString *)syncToken;
@end

