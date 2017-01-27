/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _DKEvent;


@protocol _DKInstantMonitor <_DKMonitor>
@property (nonatomic,copy) id instantHandler; 
@property (nonatomic,readonly) _DKEvent * currentEvent; 
@required
-(void)stop;
-(void)start;
-(_DKEvent *)currentEvent;
-(void)synchronouslyReflectCurrentValue;
-(id)instantHandler;
-(void)setInstantHandler:(/*^block*/id)arg1;

@end
