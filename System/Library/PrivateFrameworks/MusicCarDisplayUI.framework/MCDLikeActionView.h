/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MCDLikeView;

@interface MCDLikeActionView : UIView {

	UIView* _separatorView;
	MCDLikeView* _likeView;
	MCDLikeView* _dislikeView;

}

@property (nonatomic,retain) UIView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) MCDLikeView * likeView;                 //@synthesize likeView=_likeView - In the implementation block
@property (nonatomic,retain) MCDLikeView * dislikeView;              //@synthesize dislikeView=_dislikeView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(MCDLikeView *)likeView;
-(MCDLikeView *)dislikeView;
-(void)_setHighlightsForHitView:(id)arg1 ;
-(void)setLikeView:(MCDLikeView *)arg1 ;
-(void)setDislikeView:(MCDLikeView *)arg1 ;
@end
