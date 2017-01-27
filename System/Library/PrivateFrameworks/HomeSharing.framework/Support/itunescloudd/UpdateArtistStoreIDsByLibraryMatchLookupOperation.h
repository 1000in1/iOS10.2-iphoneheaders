/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/QueueAwareOperation.h>

@class NSURL;

@interface UpdateArtistStoreIDsByLibraryMatchLookupOperation : QueueAwareOperation {

	NSURL* _artistNameLibraryMatchURL;

}

@property (nonatomic,retain) NSURL * artistNameLibraryMatchURL;              //@synthesize artistNameLibraryMatchURL=_artistNameLibraryMatchURL - In the implementation block
-(void)setArtistNameLibraryMatchURL:(NSURL *)arg1 ;
-(NSURL *)artistNameLibraryMatchURL;
-(void)_addSpecificArtistNamesToLookupToSet:(id)arg1 ;
-(void)_addAllArtistNamesToLookupToSet:(id)arg1 ;
-(void)main;
@end
