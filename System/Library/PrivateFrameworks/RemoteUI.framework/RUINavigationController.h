/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface RUINavigationController : UINavigationController {

	unsigned long long _ruiSupportedInterfaceOrientations;
	/*^block*/id _menuDismissalHandler;

}

@property (nonatomic,copy) id menuDismissalHandler;              //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
-(BOOL)canBeShownFromSuspendedState;
@end

