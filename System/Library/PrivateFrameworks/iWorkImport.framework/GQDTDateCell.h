/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@class GQDTComputedFormatSpec;

@interface GQDTDateCell : GQDTCell {

	CFDateRef mDate;
	GQDTComputedFormatSpec* mComputedFormat;

}
-(CFStringRef)createStringValue;
-(int)readAttributesForDateCell:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(CFStringRef)getDateFormat;
-(void)dealloc;
-(CFDateRef)date;
@end

