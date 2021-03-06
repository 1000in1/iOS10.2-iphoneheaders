/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPRemoteDataController.h>

@class NSMutableDictionary, NSString, NSURL, HLPHelpSectionItem, HLPURLImageCacheController;

@interface HLPHelpBookController : HLPRemoteDataController {

	BOOL _hasSectionIcon;
	long long _contentFormatVersion;
	NSMutableDictionary* _helpItemMap;
	NSString* _contentVersion;
	NSString* _copyrightText;
	NSString* _welcomeTopicIdentifier;
	NSString* _copyrightTopicIdentifier;
	NSURL* _helpBookURL;
	HLPHelpSectionItem* _rootSectionItem;
	HLPURLImageCacheController* _imageCacheController;

}

@property (assign,nonatomic) long long contentFormatVersion;                                 //@synthesize contentFormatVersion=_contentFormatVersion - In the implementation block
@property (getter=isSemanticHTML,nonatomic,readonly) BOOL semanticHTML; 
@property (assign,nonatomic) BOOL hasSectionIcon;                                            //@synthesize hasSectionIcon=_hasSectionIcon - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * helpItemMap;                              //@synthesize helpItemMap=_helpItemMap - In the implementation block
@property (nonatomic,retain) NSString * contentVersion;                                      //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,retain) NSString * copyrightText;                                       //@synthesize copyrightText=_copyrightText - In the implementation block
@property (nonatomic,retain) NSString * welcomeTopicIdentifier;                              //@synthesize welcomeTopicIdentifier=_welcomeTopicIdentifier - In the implementation block
@property (nonatomic,retain) NSString * copyrightTopicIdentifier;                            //@synthesize copyrightTopicIdentifier=_copyrightTopicIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * helpBookURL;                                            //@synthesize helpBookURL=_helpBookURL - In the implementation block
@property (nonatomic,retain) HLPHelpSectionItem * rootSectionItem;                           //@synthesize rootSectionItem=_rootSectionItem - In the implementation block
@property (nonatomic,retain) HLPURLImageCacheController * imageCacheController;              //@synthesize imageCacheController=_imageCacheController - In the implementation block
-(void)dealloc;
-(NSString *)copyrightText;
-(void)setCopyrightText:(NSString *)arg1 ;
-(void)setContentVersion:(NSString *)arg1 ;
-(BOOL)isSemanticHTML;
-(NSURL *)helpBookURL;
-(NSString *)copyrightTopicIdentifier;
-(id)helpTopicItemForID:(id)arg1 ;
-(HLPHelpSectionItem *)rootSectionItem;
-(BOOL)hasSectionIcon;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
-(id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5 ;
-(id)helpItemForID:(id)arg1 ;
-(id)helpTopicItemForName:(id)arg1 ;
-(id)copyrightTopicItem;
-(id)welcomeTopicItem;
-(long long)contentFormatVersion;
-(void)setContentFormatVersion:(long long)arg1 ;
-(void)setHasSectionIcon:(BOOL)arg1 ;
-(NSMutableDictionary *)helpItemMap;
-(void)setHelpItemMap:(NSMutableDictionary *)arg1 ;
-(NSString *)welcomeTopicIdentifier;
-(void)setWelcomeTopicIdentifier:(NSString *)arg1 ;
-(void)setCopyrightTopicIdentifier:(NSString *)arg1 ;
-(void)setHelpBookURL:(NSURL *)arg1 ;
-(void)setRootSectionItem:(HLPHelpSectionItem *)arg1 ;
-(HLPURLImageCacheController *)imageCacheController;
-(void)setImageCacheController:(HLPURLImageCacheController *)arg1 ;
-(NSString *)contentVersion;
@end

