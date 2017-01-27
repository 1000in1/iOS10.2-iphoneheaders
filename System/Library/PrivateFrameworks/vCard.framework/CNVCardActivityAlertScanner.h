/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}
+(id)scannerWithString:(id)arg1 ;
+(BOOL)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
-(unsigned long long)position;
-(id)initWithString:(id)arg1 ;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(BOOL)scanPastItemDelimiter;
-(id)scanStringValue;
-(BOOL)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(BOOL)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(BOOL)arg1 ;
-(void)scanPastWhitespace;
-(BOOL)atEnd;
-(unsigned short)nextCharacter;
@end
