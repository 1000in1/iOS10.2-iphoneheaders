/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHFacePropertySet.h>

@protocol PHFacePropertySet <PHObjectPropertySet>
@required
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3;

@end


@class PHFace, NSString;

@interface PHFacePropertySet : NSObject <PHFacePropertySet> {

	PHFace* _face;

}

@property (nonatomic,__weak,readonly) PHFace * face;                //@synthesize face=_face - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesToFetch;
+(BOOL)isToMany;
+(id)keyPathToPrimaryObject;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToPrefetch;
+(id)entityName;
-(PHFace *)face;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
@end

