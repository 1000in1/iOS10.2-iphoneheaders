/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {

	AVAudioNode* _node;
	unsigned long long _bus;
	void* _reserved;

}

@property (nonatomic,__weak,readonly) AVAudioNode * node;              //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned long long bus;                 //@synthesize bus=_bus - In the implementation block
+(id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(AVAudioNode *)node;
-(unsigned long long)bus;
-(id)initWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
@end
