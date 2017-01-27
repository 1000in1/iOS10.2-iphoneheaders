/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary;

@interface PGIncompleteLocationResolver : NSObject {

	NSSet* _addressNodes;
	NSMutableDictionary* _resolvedLocationNodesCache;

}

@property (nonatomic,retain) NSSet * addressNodes;                                          //@synthesize addressNodes=_addressNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resolvedLocationNodesCache;              //@synthesize resolvedLocationNodesCache=_resolvedLocationNodesCache - In the implementation block
+(double)_maxDistanceForDimension:(unsigned long long)arg1 ;
-(NSSet *)addressNodes;
-(void)setAddressNodes:(NSSet *)arg1 ;
-(id)_resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 continueResolvingHigherDimensions:(BOOL)arg4 ;
-(id)_resolveIdentifierForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2 ;
-(id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 resolvedLocation:(id*)arg4 sortedAddresses:(id)arg5 ;
-(id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 resolvedLocation:(id*)arg4 addresses:(id)arg5 ;
-(id)initWithAddressNodes:(id)arg1 ;
-(id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2 ;
-(id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withPreferredTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 ;
-(NSMutableDictionary *)resolvedLocationNodesCache;
-(void)setResolvedLocationNodesCache:(NSMutableDictionary *)arg1 ;
@end
