/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSMutableDictionary, NSArray;

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {

	NSMutableDictionary* _cellForAttendee;
	NSArray* _attendeesWithProposedTimes;

}
-(void)reset;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)attendeeForIndex:(unsigned long long)arg1 ;
-(void)_updateCellsIfNeededForWidth:(double)arg1 ;
@end
