/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertWindow.h>

@protocol SBStarkWindowDelegate;
@interface SBStarkAlertWindow : SBAlertWindow {

	id<SBStarkWindowDelegate> _starkWindowDelegate;

}

@property (assign,nonatomic,__weak) id<SBStarkWindowDelegate> starkWindowDelegate;              //@synthesize starkWindowDelegate=_starkWindowDelegate - In the implementation block
+(double)windowLevel;
-(id<SBStarkWindowDelegate>)starkWindowDelegate;
-(void)setStarkWindowDelegate:(id<SBStarkWindowDelegate>)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
@end
