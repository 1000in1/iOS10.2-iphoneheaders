/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPEffect.h>

@interface MFPColorLUTEffect : MFPEffect {

	unsigned char mLutA[256];
	unsigned char mLutR[256];
	unsigned char mLutG[256];
	unsigned char mLutB[256];

}
+(id)GUID;
-(id)initWithLUTA:(unsigned char)arg1 LUTR:(unsigned char)arg2 LUTG:(unsigned char)arg3 LUTB:(unsigned char)arg4 ;
@end

