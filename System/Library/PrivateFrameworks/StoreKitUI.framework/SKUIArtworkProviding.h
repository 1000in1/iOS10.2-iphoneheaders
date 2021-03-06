/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SKUIArtwork;


@protocol SKUIArtworkProviding <NSObject,SKUICacheCoding,NSCopying>
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@required
+(BOOL)canHandleArtworkFormat:(id)arg1;
-(BOOL)hasArtwork;
-(id)artworkForSize:(long long)arg1;
-(id)artworkURLForSize:(long long)arg1;
-(SKUIArtwork *)largestArtwork;
-(id)bestArtworkForSize:(CGSize)arg1;
-(id)artworkWithWidth:(long long)arg1;
-(id)bestArtworkForScaledSize:(CGSize)arg1;
-(id)preferredExactArtworkForSize:(CGSize)arg1;
-(SKUIArtwork *)smallestArtwork;

@end

