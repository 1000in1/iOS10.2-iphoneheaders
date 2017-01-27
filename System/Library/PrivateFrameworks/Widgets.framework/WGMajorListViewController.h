/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGWidgetListViewController.h>
#import <libobjc.A.dylib/WGWidgetListFooterViewDelegate.h>

@class WGCollapsingView, WGWidgetListFooterView, NSString;

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate> {

	WGCollapsingView* _collapsingView;
	WGWidgetListFooterView* _footerView;

}

@property (nonatomic,readonly) WGWidgetListFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(WGWidgetListFooterView *)footerView;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
-(void)orderOfVisibleWidgetsDidChange:(id)arg1 ;
-(id)visibleWidgetIdentifiersForColumnMode:(long long)arg1 ;
-(id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 forColumnMode:(long long)arg2 ;
-(void)_configureStackView;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(id)_group;
-(void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1 ;
-(void)presentEditView:(id)arg1 ;
-(id)widgetListFooterView:(id)arg1 customBackgroundViewForItem:(id)arg2 ;
@end
