/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionComplicationSettings.bundle/CompanionComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <CompanionComplicationSettings/NCSSettingsManagerDelegate.h>

@class NCSSettingsManager, NSMutableArray, NSMutableDictionary, NSString;

@interface CCSComplicationController : PSEditableListController <NCSSettingsManagerDelegate> {

	NCSSettingsManager* _settingsManager;
	NSMutableArray* _groupSpecifiers;
	NSMutableDictionary* _appIcons;

}

@property (nonatomic,retain) NCSSettingsManager * settingsManager;              //@synthesize settingsManager=_settingsManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupSpecifiers;                  //@synthesize groupSpecifiers=_groupSpecifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appIcons;                    //@synthesize appIcons=_appIcons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_iconForSpecifier:(id)arg1 ;
-(void)setActiveState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_specifiersFromSettingsManager;
-(void)setSettingsManager:(NCSSettingsManager *)arg1 ;
-(id)activeStateForSpecifier:(id)arg1 ;
-(void)_showLimitReached:(id)arg1 ;
-(NCSSettingsManager *)settingsManager;
-(long long)findIndexOfNthComplication:(long long)arg1 withActiveState:(BOOL)arg2 ;
-(NSMutableDictionary *)appIcons;
-(void)setAppIcons:(NSMutableDictionary *)arg1 ;
-(long long)findIndexOfComplicationWithIdentifier:(id)arg1 ;
-(void)setActiveState:(id)arg1 forSpecifier:(id)arg2 save:(BOOL)arg3 ;
-(void)setGroupSpecifiers:(NSMutableArray *)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willUnlock;
-(NSMutableArray *)groupSpecifiers;
-(void)settingsManagerReloadedComplications:(id)arg1 ;
-(id)specifiers;
@end
