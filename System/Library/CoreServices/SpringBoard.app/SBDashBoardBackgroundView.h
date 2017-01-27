/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBDashBoardBackgroundStyleTransitioning.h>
#import <SpringBoard/SBDashBoardWallpaperOverlay.h>

@class SBBackdropView, UIView, NSString;

@interface SBDashBoardBackgroundView : UIView <SBDashBoardBackgroundStyleTransitioning, SBDashBoardWallpaperOverlay> {

	long long _style;
	long long _transitionStyle;
	BOOL _transitioning;
	double _progress;
	SBBackdropView* _backdropView;
	UIView* _reduceTransparencyView;
	UIView* _sourceOverView;
	UIView* _darkenSourceOverView;
	UIView* _tintView;

}

@property (nonatomic,readonly) SBBackdropView * backdropView;                                                        //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) NSString * groupName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundStyle;                                                              //@synthesize style=_style - In the implementation block
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle;              //@synthesize transitioning=_transitioning - In the implementation block
-(void)beginTransitionToBackgroundStyle:(long long)arg1 ;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1 ;
-(BOOL)isTransitioningBackgroundStyle;
-(void)completeTransitionToBackgroundStyle:(long long)arg1 ;
-(void)_updateAppearanceForBackgroundStyle:(long long)arg1 transitionToSettings:(BOOL)arg2 ;
-(void)_updateAppearanceForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 withProgress:(double)arg3 ;
-(double)_darkenValueForBackgroundStyle:(long long)arg1 ;
-(void)_darkenWithProgress:(double)arg1 ;
-(double)_tintValueForBackgroundStyle:(long long)arg1 ;
-(void)_tintWithProgress:(double)arg1 ;
-(double)_reducedTransparencyValueForBackgroundStyle:(long long)arg1 ;
-(void)_reduceTransparencyWithProgress:(double)arg1 ;
-(double)_valueFromStart:(double)arg1 toEnd:(double)arg2 withFraction:(double)arg3 ;
-(id)_backgroundColorForDarkenAlpha:(double)arg1 andProgress:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(SBBackdropView *)backdropView;
@end
