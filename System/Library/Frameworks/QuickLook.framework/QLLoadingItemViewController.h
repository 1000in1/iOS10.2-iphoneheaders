/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class UILabel, UIActivityIndicatorView;

@interface QLLoadingItemViewController : QLItemViewController {

	UILabel* _loadingLabel;
	UIActivityIndicatorView* _spinner;

}
-(void)setDelegate:(id)arg1 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)_updateLoadingLabel;
-(BOOL)canSwipeToDismiss;
@end
