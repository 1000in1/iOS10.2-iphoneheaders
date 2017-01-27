/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface HMDCameraStreamTracker : NSObject <HMFLogging> {

	NSMutableSet* _currentStreamIdentifiers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSMutableSet * currentStreamIdentifiers;               //@synthesize currentStreamIdentifiers=_currentStreamIdentifiers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTracker;
+(id)logCategory;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)startStream:(id)arg1 ;
-(void)endStream:(id)arg1 ;
-(NSMutableSet *)currentStreamIdentifiers;
-(void)setCurrentStreamIdentifiers:(NSMutableSet *)arg1 ;
@end
