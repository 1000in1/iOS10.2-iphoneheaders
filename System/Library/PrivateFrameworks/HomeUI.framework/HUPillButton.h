/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UILabel, NSString;

@interface HUPillButton : UIButton {

	unsigned long long _style;
	UIView* _backgroundView;
	UILabel* _buttonLabel;

}

@property (nonatomic,readonly) unsigned long long style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * buttonLabel;                     //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,copy) NSString * buttonText; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)style;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(UIView *)backgroundView;
-(id)initWithBackgroundStyle:(unsigned long long)arg1 ;
-(UILabel *)buttonLabel;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)_setupConstraints;
@end

