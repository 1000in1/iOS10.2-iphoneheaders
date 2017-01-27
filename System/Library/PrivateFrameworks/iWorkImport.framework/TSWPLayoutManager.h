/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStorageObserver.h>

@protocol TSWPLayoutOwner;
@class TSWPStorage, TSWPCTTypesetterCache, NSString;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver> {

	TSWPStorage* _storage;
	BOOL _isObservingStorage;
	BOOL _useLigatures;
	TSWPDirtyRangeVector* _dirtyRanges;
	TSWPCTTypesetterCache* _typesetterCache;
	TSWPTopicNumberHints* _cachedTopicNumbers;
	id<TSWPLayoutOwner> _owner;

}

@property (nonatomic,readonly) id<TSWPLayoutOwner> owner;                                   //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain,readonly) TSWPStorage * storage;                                //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) const TSWPDirtyRangeVector* dirtyRanges;                     //@synthesize dirtyRanges=_dirtyRanges - In the implementation block
@property (nonatomic,retain,readonly) TSWPCTTypesetterCache * typesetterCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(BOOL)arg7 styleProvider:(id)arg8 vertical:(BOOL)arg9 ;
-(void)clearOwner;
-(void)clearTypesetterCache;
-(int)p_layoutConfigFlagsForTarget:(id)arg1 ;
-(void)resetDirtyRange;
-(id)layoutMetricsCache;
-(id)initWithStorage:(id)arg1 owner:(id)arg2 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(void)willRemoveAttachmentLayout:(id)arg1 ;
-(BOOL)needsLayoutInColumn:(id)arg1 ;
-(void*)layoutIntoTarget:(id)arg1 withLayoutState:(void*)arg2 outSync:(BOOL*)arg3 ;
-(void*)layoutStateForLayoutAfterHint:(const TSWPTargetHint*)arg1 childHint:(id)arg2 topicNumbers:(const TSWPTopicNumberHints*)arg3 textIsVertical:(BOOL)arg4 ;
-(void)deflateTarget:(id)arg1 intoHints:(vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg2 childHints:(inout id)arg3 anchoredDrawablePositions:(id*)arg4 topicNumbers:(TSWPTopicNumberHints*)arg5 layoutState:(void*)arg6 ;
-(void)inflateTarget:(id)arg1 fromHints:(const vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg2 childHint:(id)arg3 anchoredDrawablePositions:(id)arg4 topicNumbers:(const TSWPTopicNumberHints*)arg5 ;
-(void)destroyLayoutState:(void*)arg1 ;
-(TSWPCTTypesetterCache *)typesetterCache;
-(const TSWPDirtyRangeVector*)dirtyRanges;
-(TSWPStorage *)storage;
-(void)dealloc;
-(id<TSWPLayoutOwner>)owner;
-(id)styleProvider;
@end
