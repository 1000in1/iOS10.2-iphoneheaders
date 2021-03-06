/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor, NSString, NSAttributedString;


@protocol CLKUILabel <NSObject>
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@required
-(void)setTextAlignment:(long long)arg1;
-(void)setAttributedText:(id)arg1;
-(void)setTextColor:(id)arg1;
-(void)setFont:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(long long)textAlignment;
-(double)_lastLineBaseline;
-(UIEdgeInsets)opticalInsets;

@end

