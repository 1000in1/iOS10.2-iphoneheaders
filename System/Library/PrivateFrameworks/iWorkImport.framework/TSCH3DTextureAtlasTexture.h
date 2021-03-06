/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSCH3DTextureAtlasTextureResource;

@interface TSCH3DTextureAtlasTexture : NSObject {

	tvec2<int> mSize;
	float mSamples;
	NSMutableArray* mLabels;
	vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int> > >* mPositions;
	long long mCurrentxpos;
	long long mCurrentypos;
	long long mCurrentheight;
	TSCH3DTextureAtlasTextureResource* mResource;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(void)p_invalidateResource;
-(id)getTextureDataBuffer;
-(tvec2<int>)size;
-(void)dealloc;
-(id)initWithSize:(tvec2<int>)arg1 ;
-(id)resource;
-(tvec2<int>)addLabel:(id)arg1 ;
@end

