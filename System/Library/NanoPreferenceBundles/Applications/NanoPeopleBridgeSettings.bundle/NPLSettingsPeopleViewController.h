/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPeopleBridgeSettings.bundle/NanoPeopleBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPeopleBridgeSettings/NPLPeopleViewController.h>
#import <NanoPeopleBridgeSettings/NPLDeleteButtonDelegate.h>

@protocol NPLSettingsPeopleViewControllerDelegate;
@class UILabel, NPLDeleteButton, NSTimer;

@interface NPLSettingsPeopleViewController : NPLPeopleViewController <NPLDeleteButtonDelegate> {

	unsigned long long _addPersonIndex;
	UILabel* _titleLabel;
	NPLDeleteButton* _deleteButton;
	NSTimer* _deleteButtonAppearanceTimer;
	id<NPLSettingsPeopleViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<NPLSettingsPeopleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_selectSlotAtIndex:(unsigned long long)arg1 includeSelectionIndicator:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)peripheryPersonViewTapped:(id)arg1 ;
-(void)_removeDeleteButton;
-(void)_groupTitleChanged;
-(double)_titleLabelTopOffset;
-(double)_dialViewTopOffset;
-(void)deleteSelectedPerson;
-(void)centerPersonViewTapped:(id)arg1 ;
-(void)_deleteButtonAppearanceTimerFired;
-(void)_stopDeleteButtonAppearanceTimer;
-(void)_startDeleteButtonAppearanceTimerIfNecessary;
-(void)deleteButtonDidFinishHideAnimation:(id)arg1 ;
-(void)setDelegate:(id<NPLSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<NPLSettingsPeopleViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_deleteButtonTapped;
@end

