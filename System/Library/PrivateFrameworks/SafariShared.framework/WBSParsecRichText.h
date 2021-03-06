/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSString, NSNumber, NSArray;

@interface WBSParsecRichText : WBSParsecModel {

	WBSParsecImageRepresentation* _contentAdvisoryImage;
	BOOL _hasStarRating;
	NSString* _text;
	NSNumber* _maximumLines;
	double _starRating;
	NSArray* _formattedTextList;
	NSString* _formattedTextDelimiter;
	NSArray* _moreGlyphRepresentations;
	NSString* _contentAdvisoryString;

}

@property (nonatomic,readonly) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumLines;                         //@synthesize maximumLines=_maximumLines - In the implementation block
@property (nonatomic,readonly) BOOL hasStarRating;                              //@synthesize hasStarRating=_hasStarRating - In the implementation block
@property (nonatomic,readonly) double starRating;                               //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,readonly) NSArray * formattedTextList;                     //@synthesize formattedTextList=_formattedTextList - In the implementation block
@property (nonatomic,readonly) NSString * formattedTextDelimiter;               //@synthesize formattedTextDelimiter=_formattedTextDelimiter - In the implementation block
@property (nonatomic,readonly) NSArray * moreGlyphRepresentations;              //@synthesize moreGlyphRepresentations=_moreGlyphRepresentations - In the implementation block
@property (nonatomic,readonly) NSString * contentAdvisoryString;                //@synthesize contentAdvisoryString=_contentAdvisoryString - In the implementation block
+(id)schema;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(NSString *)formattedTextDelimiter;
-(double)starRating;
-(NSArray *)formattedTextList;
-(id)contentAdvisoryImageWithSession:(id)arg1 ;
-(id)moreGlyphsWithSession:(id)arg1 ;
-(BOOL)hasStarRating;
-(NSArray *)moreGlyphRepresentations;
-(NSString *)contentAdvisoryString;
-(NSNumber *)maximumLines;
@end

