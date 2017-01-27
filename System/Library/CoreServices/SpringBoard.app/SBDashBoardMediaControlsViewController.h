/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardNowPlayingViewController.h>
#import <SpringBoard/MPULockScreenMediaControlsDelegate.h>

@class MPULockScreenMediaControlsViewController, NSString;

@interface SBDashBoardMediaControlsViewController : SBDashBoardNowPlayingViewController <MPULockScreenMediaControlsDelegate> {

	MPULockScreenMediaControlsViewController* _mediaControlsViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(long long)presentationPriority;
-(id)initWithMediaControlsViewController:(id)arg1 ;
-(void)_layoutMediaControls;
-(void)_updatePersistentUpdatesEnabled:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(long long)presentationType;
-(void)mediaControlsViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2 ;
@end
