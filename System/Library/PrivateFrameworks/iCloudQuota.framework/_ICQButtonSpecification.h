/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ICQLink;

@interface _ICQButtonSpecification : NSObject {

	NSDictionary* _serverDict;
	ICQLink* _buttonLink;
	NSDictionary* _linkForBundleIdentifier;

}

@property (nonatomic,retain) NSDictionary * linkForBundleIdentifier;              //@synthesize linkForBundleIdentifier=_linkForBundleIdentifier - In the implementation block
+(id)buttonSpecificationSampleForLevel:(long long)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(id)linkForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)linkForBundleIdentifier;
-(void)setLinkForBundleIdentifier:(NSDictionary *)arg1 ;
-(id)buttonLink;
@end
