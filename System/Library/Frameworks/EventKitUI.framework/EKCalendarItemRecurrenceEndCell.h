/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, UIDatePicker, NSDate;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell {

	UIButton* _neverButton;
	UIDatePicker* _datePicker;

}

@property (nonatomic,readonly) UIButton * neverButton;                 //@synthesize neverButton=_neverButton - In the implementation block
@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSDate * date; 
-(id)init;
-(void)layoutSubviews;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(UIButton *)neverButton;
-(UIDatePicker *)datePicker;
@end
