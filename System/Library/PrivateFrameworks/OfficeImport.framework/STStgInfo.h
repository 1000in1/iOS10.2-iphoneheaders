/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface STStgInfo : NSObject {

	NSString* m_pstrName;
	int m_type;
	unsigned m_userFlags;
	unsigned m_size;
	long long m_creationTime;
	long long m_modificationTime;
	int m_accessMode;
	SCD_Struct_ST80 m_clsid;

}
-(id)init;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setCLSID:(SCD_Struct_ST80)arg1 ;
-(id)getName;
-(int)getType;
-(unsigned)getUserFlags;
-(void)setUserFlags:(unsigned)arg1 ;
-(unsigned)getSize;
-(long long)getCreationTime;
-(void)setCreationTime:(long long)arg1 ;
-(long long)getModificationTime;
-(void)setModificationTime:(long long)arg1 ;
-(int)getAccessMode;
-(void)setAccessMode:(int)arg1 ;
-(SCD_Struct_ST80)getCLSID;
-(id)initWithStgInfo:(StgInfo*)arg1 ;
@end

