/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendButtonEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDButtonEvent buttonEvent; 
-(unsigned long long)type;
-(id)initWithButtonEvent:(MRHIDButtonEvent)arg1 ;
-(MRHIDButtonEvent)buttonEvent;
@end

