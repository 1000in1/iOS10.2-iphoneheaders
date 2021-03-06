/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSURL;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding> {

	NSArray* _languages;
	NSDictionary* _resourceList;
	NSURL* _searchPathURL;
	NSDictionary* _voiceConfig;

}

@property (nonatomic,copy) NSDictionary * voiceConfig;               //@synthesize voiceConfig=_voiceConfig - In the implementation block
@property (nonatomic,copy) NSArray * languages;                      //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSDictionary * resourceList;              //@synthesize resourceList=_resourceList - In the implementation block
@property (nonatomic,copy) NSURL * searchPathURL;                    //@synthesize searchPathURL=_searchPathURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)legacyPlatforms;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(id)defaultVoice;
-(void)setSearchPathURL:(NSURL *)arg1 ;
-(void)syncWithConfigFile:(id)arg1 ;
-(void)setResourceList:(NSDictionary *)arg1 ;
-(void)setVoiceConfig:(NSDictionary *)arg1 ;
-(NSDictionary *)voiceConfig;
-(id)defaultTypeString;
-(id)defaultFootprintString;
-(NSDictionary *)resourceList;
-(NSURL *)searchPathURL;
@end

