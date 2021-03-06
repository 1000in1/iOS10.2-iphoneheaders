/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSPreset.h>

@class NSString;

@interface TSWPShapeStyle : <TSDShapeStyle : TSSStyle : TSPObject> = {
  516 fill
  517 stroke
  518 opacity
  519 reflection
  520 shadow
  522 headLineEnd
  523 tailLineEnd
} <TSSPreset>

@property (nonatomic,readonly) NSString * presetKind; 
+(id)presetStyleDescriptor;
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)layoutProperties;
+(void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)arg1 fromArchive:(const ShapeStylePropertiesArchive*)arg2 unarchiver:(id)arg3 ;
+(void)saveShapeStyleLayoutPropertyMap:(id)arg1 toArchive:(ShapeStylePropertiesArchive*)arg2 archiver:(id)arg3 ;
+(id)properties;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ShapeStyleArchive*)arg1 archiver:(id)arg2 ;
-(NSString *)presetKind;
-(const ShapeStyleArchive*)shapeStyleArchiveFromUnarchiver:(id)arg1 ;
-(id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3 ;
-(SEL)mapThemePropertyMapSelector;
-(id)defaultParagraphStyle;
-(void)setDefaultParagraphStyle:(id)arg1 ;
@end

