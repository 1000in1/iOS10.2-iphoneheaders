/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistoryLoader.h>

@protocol OS_dispatch_queue, WBSHistoryLoaderDelegate;
@class NSURL, NSObject, NSMutableArray, NSCountedSet, NSString;

@interface WBSHistoryPropertyListLoader : NSObject <WBSHistoryLoader> {

	NSURL* _url;
	unsigned long long _itemCountLimit;
	Class _historyItemClass;
	NSObject*<OS_dispatch_queue> _loadingQueue;
	BOOL _loadInProgress;
	NSMutableArray* _loadedItems;
	NSMutableArray* _loadedDiscardedItems;
	NSCountedSet* _loadedStringsForUserTypedDomainExpansion;
	id<WBSHistoryLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSHistoryLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WBSHistoryLoaderDelegate>)arg1 ;
-(id<WBSHistoryLoaderDelegate>)delegate;
-(void)_loadHistory;
-(void)waitForLoadingToComplete;
-(void)_finishLoadingOnMainThreadIfNeeded;
-(BOOL)_loadHistoryFromDictionary:(id)arg1 ;
-(void)_finishLoadingOnMainThread;
-(id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4 ;
-(void)startLoading;
@end

