/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment {

	int _numberFormat;
	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) int numberFormat;                  //@synthesize numberFormat=_numberFormat - In the implementation block
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)stringEquivalent;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(id)stringEquivalentWithLayoutParent:(id)arg1 ;
-(id)stringWithNumber:(unsigned long long)arg1 ;
-(const NumberAttachmentArchive*)numberAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(void)dealloc;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(int)numberFormat;
-(void)setNumberFormat:(int)arg1 ;
@end

