/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton {

	UIColor* _selectedColor;
	UIView* _backgroundView;
	UIColor* _standardBackgroundColor;

}

@property (nonatomic,retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * standardBackgroundColor;              //@synthesize standardBackgroundColor=_standardBackgroundColor - In the implementation block
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * selectedColor;                        //@synthesize selectedColor=_selectedColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setFontSize:(double)arg1 ;
-(double)fontSize;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setStandardBackgroundColor:(UIColor *)arg1 ;
-(void)_controlStateChanged;
-(void)_adjustTitleColor;
-(UIColor *)standardBackgroundColor;
@end

