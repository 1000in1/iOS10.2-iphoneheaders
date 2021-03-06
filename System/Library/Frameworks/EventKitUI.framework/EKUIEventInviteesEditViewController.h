/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {

	EKEvent* _event;
	EKUIEventInviteesViewController* _controller;

}

@property (nonatomic,readonly) NSDate * selectedStartDate; 
@property (nonatomic,readonly) NSDate * selectedEndDate; 
-(void)loadView;
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(id)initWithEvent:(id)arg1 ;
@end

