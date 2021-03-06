/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSPFinalizeHandlerQueue : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _rootObjectIdentifier;
	vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> >* _order;
	unordered_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > >* _map;

}
-(id)initWithRootObjectIdentifier:(long long)arg1 ;
-(BOOL)runFinalizeHandlers;
-(void)addFinalizeHandlers:(vector<void ()(), std::__1::allocator<void ()()> >*)arg1 strongReferencesOrNull:(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)arg2 forIdentifier:(long long)arg3 ;
-(void)visitItemForCycleDetection:(FinalizeHandlerItem*)arg1 ;
-(void)runFinalizeHandlerForItem:(FinalizeHandlerItem*)arg1 ;
-(id)init;
-(void)reset;
@end

