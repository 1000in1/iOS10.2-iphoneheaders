/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetVideoPresentationSizeCallAction : CXCallAction {

	CGSize _videoPresentationSize;

}

@property (assign,nonatomic) CGSize videoPresentationSize;              //@synthesize videoPresentationSize=_videoPresentationSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(CGSize)videoPresentationSize;
-(void)setVideoPresentationSize:(CGSize)arg1 ;
-(id)initWithCallUUID:(id)arg1 videoPresentationSize:(CGSize)arg2 ;
@end

