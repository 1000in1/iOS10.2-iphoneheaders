/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAction.h>
#import <OpusOrigamiProducer/MPActionSupport.h>

@class NSString, MPAction;

@interface MPConditionalAction : MPAction <MPActionSupport> {

	NSString* _predicate;
	MPAction* _actionIfTrue;
	MPAction* _actionIfFalse;

}

@property (nonatomic,copy) NSString * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (readonly) MPAction * actionIfTrue;                 //@synthesize actionIfTrue=_actionIfTrue - In the implementation block
@property (readonly) MPAction * actionIfFalse;                //@synthesize actionIfFalse=_actionIfFalse - In the implementation block
+(id)conditionalAction;
-(MPAction *)actionIfTrue;
-(void)setAction:(id)arg1 forCondition:(BOOL)arg2 ;
-(MPAction *)actionIfFalse;
-(void)configureActions;
-(void)configureTarget;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
@end

