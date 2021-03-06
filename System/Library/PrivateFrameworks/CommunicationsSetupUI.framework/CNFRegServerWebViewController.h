/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@class CNFRegController, CNFRegLoadingView, NSTimer, RUILoader, NSMutableArray, UIWebView, NSString;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, RUIObjectModelDelegate> {

	CNFRegController* _regController;
	CNFRegLoadingView* _loadingView;
	NSTimer* _timeoutTimer;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	struct {
		unsigned isLoading : 1;
		unsigned isLoaded : 1;
		unsigned wantsWifi : 1;
		unsigned modifiedWiFi : 1;
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned checkedLogState : 1;
		unsigned shouldLog : 1;
		unsigned timedOut;
	}  _webControllerFlags;
	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;                           //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (nonatomic,readonly) BOOL timedOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)applicationWillSuspend;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)_handleTimeout;
-(BOOL)timedOut;
-(void)showSpinner;
-(void)loadURL:(id)arg1 ;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(void)_stopTimeout;
-(BOOL)_shouldLog;
-(id)overrideURLForURL:(id)arg1 ;
-(BOOL)shouldSetHeadersForRequest:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)hideSpinner;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)_timeoutFired:(id)arg1 ;
-(void)setWantsWifi:(BOOL)arg1 ;
-(void)_startTimeoutWithDuration:(double)arg1 ;
-(id)logName;
-(void)objectModelDidChange:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

