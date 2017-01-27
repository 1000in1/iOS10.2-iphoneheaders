/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/AnnotationKit.axbundle/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/__AKAnnotationLayerAccessibility_super.h>

@interface AKAnnotationLayerAccessibility : __AKAnnotationLayerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_accessibilityShrinkAnnotation;
-(BOOL)_accessibilityExpandAnnotation;
-(void)_accessibilityMakeAnnotation:(id)arg1 larger:(BOOL)arg2 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityCustomActions;
-(void)_accessibilityZoomIn:(BOOL)arg1 ;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
@end
