/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class GCController, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCGamepad : NSObject

@property (nonatomic,__weak,readonly) GCController * controller; 
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) GCControllerDirectionPad * dpad; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonA; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonB; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonX; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonY; 
@property (nonatomic,readonly) GCControllerButtonInput * leftShoulder; 
@property (nonatomic,readonly) GCControllerButtonInput * rightShoulder; 
+(BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1 ;
-(id)saveSnapshot;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(GCController *)controller;
-(GCControllerButtonInput *)buttonA;
-(GCControllerButtonInput *)buttonX;
-(GCControllerButtonInput *)buttonB;
-(GCControllerButtonInput *)buttonY;
-(GCControllerButtonInput *)leftShoulder;
-(GCControllerButtonInput *)rightShoulder;
-(id)button2;
-(id)initWithController:(id)arg1 ;
-(GCControllerDirectionPad *)dpad;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)button0;
-(id)button1;
-(id)button3;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(BOOL)reportsAbsoluteDpadValues;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
@end
