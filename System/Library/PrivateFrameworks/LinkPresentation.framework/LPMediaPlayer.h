/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPMediaPlayer <NSObject>
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession; 
@required
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(BOOL)isPlaying;
-(BOOL)isMuted;
-(BOOL)usesSharedAudioSession;

@end
