/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
+(BOOL)isAvailable;
-(int)interactionType;
-(id)localizedName;
-(double)_systemFontSize;
-(BOOL)canBePerformedByOpeningURL;
-(void)performFromView:(id)arg1 ;
-(id)contactsMatchingPhoneNumber:(id)arg1 inContactStore:(id)arg2 ;
-(id)labelToUseForPhoneNumber:(id)arg1 ofContact:(id)arg2 ;
-(id)contactAndLabelForPhoneNumber:(id*)arg1 ;
-(BOOL)_titleFitsInActionSheet:(id)arg1 ;
-(id)localizedCallStringForName:(id)arg1 usingCallRelay:(BOOL)arg2 ;
-(id)callProvider;
-(long long)TTYType;
@end

