/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell {

	NSArray* _previousValue;

}

@property (nonatomic,retain) NSArray * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN6)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(NSArray *)previousValue;
-(void)setPreviousValue:(NSArray *)arg1 ;
@end

