/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIApplicationLicensePage : NSObject <NSCopying> {

	NSString* _licenseAgreementHTML;
	NSString* _title;

}

@property (nonatomic,copy) NSString * licenseAgreementHTML;              //@synthesize licenseAgreementHTML=_licenseAgreementHTML - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLicenseAgreementHTML:(NSString *)arg1 ;
-(NSString *)licenseAgreementHTML;
@end

