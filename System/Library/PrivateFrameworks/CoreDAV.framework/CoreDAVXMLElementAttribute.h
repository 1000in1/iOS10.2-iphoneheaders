/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject {

	NSString* _name;
	NSString* _nameSpace;
	NSString* _value;

}

@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * nameSpace;              //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSString * value;                  //@synthesize value=_value - In the implementation block
-(NSString *)nameSpace;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 value:(id)arg3 ;
@end
