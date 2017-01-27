/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@protocol MPLazySectionedCollectionDataSource;
@class NSCache;

@interface MPLazySectionedCollection : MPSectionedCollection {

	vector<long, std::__1::allocator<long> >* _cachedNumberOfItemsInSections;
	long long _cachedNumberOfSections;
	BOOL _hasValidCachedNumberOfSections;
	NSCache* _itemsCache;
	NSCache* _sectionsCache;
	id<MPLazySectionedCollectionDataSource> _dataSource;

}

@property (nonatomic,retain) id<MPLazySectionedCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setDataSource:(id<MPLazySectionedCollectionDataSource>)arg1 ;
-(id<MPLazySectionedCollectionDataSource>)dataSource;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)firstItem;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)lastItem;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstSection;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id)lastSection;
@end
