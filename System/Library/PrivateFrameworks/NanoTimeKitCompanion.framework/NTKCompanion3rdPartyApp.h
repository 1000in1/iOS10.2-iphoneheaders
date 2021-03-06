/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NSString, NSURL, NRDevice, NSArray;

@interface NTKCompanion3rdPartyApp : NTKCompanionApp {

	BOOL _installed;
	NSString* _complicationClientIdentifier;
	NSURL* _urlToComplicationBundle;
	NSURL* _urlToWatchKitBundle;
	NRDevice* _device;
	NSArray* _supportedFamilies;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NRDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSString * complicationClientIdentifier;              //@synthesize complicationClientIdentifier=_complicationClientIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * urlToComplicationBundle;                      //@synthesize urlToComplicationBundle=_urlToComplicationBundle - In the implementation block
@property (nonatomic,retain) NSURL * urlToWatchKitBundle;                          //@synthesize urlToWatchKitBundle=_urlToWatchKitBundle - In the implementation block
@property (nonatomic,retain) NSArray * supportedFamilies;                          //@synthesize supportedFamilies=_supportedFamilies - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,getter=isInstalled,nonatomic) BOOL installed;                    //@synthesize installed=_installed - In the implementation block
+(id)companion3rdPartyAppWithInfo:(id)arg1 supportedComplicationFamilies:(id)arg2 device:(id)arg3 ;
+(BOOL)_isValidApplicationInformation:(id)arg1 ;
+(BOOL)_isValidComplicationsInformation:(id)arg1 ;
+(id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2 ;
+(id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isInstalled;
-(NSString *)uniqueID;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
-(id)complication;
-(NSString *)complicationClientIdentifier;
-(NSURL *)urlToComplicationBundle;
-(NSArray *)supportedFamilies;
-(BOOL)applicationHasBeenUpdated:(id)arg1 ;
-(NSURL *)urlToWatchKitBundle;
-(id)_initWithDevice:(id)arg1 applicationInfo:(id)arg2 galleryBundles:(id)arg3 watchKitBundle:(id)arg4 ;
-(id)_initWithWatchAppId:(id)arg1 containerAppId:(id)arg2 complicationClientId:(id)arg3 ;
-(BOOL)_installStateFromAppConduitInstallState:(long long)arg1 ;
-(void)setUrlToComplicationBundle:(NSURL *)arg1 ;
-(void)setUrlToWatchKitBundle:(NSURL *)arg1 ;
-(void)setComplicationClientIdentifier:(NSString *)arg1 ;
-(void)setSupportedFamilies:(NSArray *)arg1 ;
-(id)appRegistrationDate;
-(void)install;
@end

