/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVMLKit/TVAppTemplateController.h>
#import <TVMLKit/_TVAppNavigationBarDisplayConfiguring.h>

@class TVImageProxy, UIColor, IKViewElement, NSString;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController, _TVAppNavigationBarDisplayConfiguring> {

	TVImageProxy* _bgImageProxy;
	BOOL _navigationBarHidden;
	BOOL _prefersDarkTheme;
	BOOL _statusBarBlurHidden;
	UIColor* _navigationItemColor;
	BOOL _appliedNavigationItem;
	IKViewElement* _navigationItemElement;

}

@property (nonatomic,retain) IKViewElement * navigationItemElement;              //@synthesize navigationItemElement=_navigationItemElement - In the implementation block
@property (assign,nonatomic) BOOL appliedNavigationItem;                         //@synthesize appliedNavigationItem=_appliedNavigationItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(long long)_backdropStyle;
-(void)_updateNavigationItem;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(BOOL)prefersStatusBarBlurHidden;
-(BOOL)prefersStatusBarDarkTheme;
-(void)loadFromViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reparentNavigationItem:(id)arg1 ;
-(BOOL)appliedNavigationItem;
-(void)setAppliedNavigationItem:(BOOL)arg1 ;
-(IKViewElement *)navigationItemElement;
-(void)setNavigationItemElement:(IKViewElement *)arg1 ;
@end
