/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUNowPlayingDelegate <NSObject>
@optional
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
-(void)nowPlayingControllerDidBeginListeningForNotifications:(id)arg1;
-(void)nowPlayingControllerDidStopListeningForNotifications:(id)arg1;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;

@end

