/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SBFakeBlur <NSObject>
@property (assign,nonatomic) id<_SBFakeBlurObserver> observer; 
@property (assign,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@required
-(long long)effectiveStyle;
-(void)offsetWallpaperBy:(CGPoint)arg1;
-(BOOL)fullscreen;
-(void)requestStyle:(long long)arg1;
-(void)setObserver:(id)arg1;
-(id<_SBFakeBlurObserver>)observer;
-(void)setFullscreen:(BOOL)arg1;
-(void)setTransformOptions:(unsigned long long)arg1;
-(unsigned long long)transformOptions;

@end

