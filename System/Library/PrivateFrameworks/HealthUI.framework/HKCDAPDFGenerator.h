/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKCDAPDFGenerator : NSObject
+(id)PDFTranslator;
-(id)init;
-(void)_pdfForHTML:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishGenerationWithURL:(id)arg1 tempFileDescriptor:(int)arg2 completionHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(void)generatePDFForCDAXML:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
