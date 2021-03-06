/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections; 
@property (retain) SUScriptSection * selectedSection; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(SUScriptSection *)selectedSection;
-(id)sections;
-(id)attributeKeys;
-(void)_tabBarConfigurationChangedNotification:(id)arg1 ;
-(id)_copySectionWithIdentifier:(id)arg1 ;
-(id)_fixedSelectedIdentifier;
-(void)_setSelectedIdentifier:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(void)setRootViewController:(id)arg1 forSection:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setSelectedSection:(SUScriptSection *)arg1 ;
@end

