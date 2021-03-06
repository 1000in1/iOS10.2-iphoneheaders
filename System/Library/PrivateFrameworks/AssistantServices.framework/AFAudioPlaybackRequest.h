/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding> {

	float _volume;
	NSURL* _itemURL;
	long long _numberOfLoops;
	double _fadeInDuration;
	double _fadeOutDuration;

}

@property (nonatomic,copy,readonly) NSURL * itemURL;                 //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,readonly) long long numberOfLoops;              //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
@property (nonatomic,readonly) float volume;                         //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) double fadeInDuration;                //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (nonatomic,readonly) double fadeOutDuration;               //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)volume;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(long long)numberOfLoops;
-(id)initWithItemURL:(id)arg1 numberOfLoops:(long long)arg2 volume:(float)arg3 fadeInDuration:(double)arg4 fadeOutDuration:(double)arg5 ;
-(NSURL *)itemURL;
@end

