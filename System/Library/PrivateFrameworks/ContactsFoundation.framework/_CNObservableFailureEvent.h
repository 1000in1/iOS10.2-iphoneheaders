/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservableEvent.h>

@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {

	NSError* _error;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(unsigned long long)eventType;
-(BOOL)hasValue;
-(void)dematerializeWithObserver:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)error;
@end
