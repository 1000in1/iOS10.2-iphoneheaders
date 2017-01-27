/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface _NTKCCDetailActionButton : UIButton {

	BOOL _disabled;
	NSString* _disabledReason;

}

@property (nonatomic,readonly) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) NSString * disabledReason;              //@synthesize disabledReason=_disabledReason - In the implementation block
-(void)setDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_updateColor;
-(NSString *)disabledReason;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)_setTitle:(id)arg1 ;
@end
