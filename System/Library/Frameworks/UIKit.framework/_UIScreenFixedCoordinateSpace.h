/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICoordinateSpace.h>

@class UIScreen, NSString;

@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace> {

	UIScreen* _screen;

}

@property (assign,setter=_setScreen:,nonatomic) UIScreen * _screen;              //@synthesize screen=_screen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
-(CGRect)bounds;
-(UIScreen *)_screen;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)_setScreen:(id)arg1 ;
@end

