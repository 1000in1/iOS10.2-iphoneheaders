/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKPlaceAttributionProvider;
@class NSArray, MKMapItem, NSAttributedString, MKPlaceAttributionCell, NSString;

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _resizableViewsDisabled;
	NSArray* _urlStrings;
	MKMapItem* _mapItem;
	id<MKPlaceAttributionProvider> _attributionProvider;
	NSAttributedString* _attributionString;
	MKPlaceAttributionCell* _attributionCell;
	NSArray* _apps;

}

@property (retain) MKPlaceAttributionCell * attributionCell;                                         //@synthesize attributionCell=_attributionCell - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceAttributionProvider> attributionProvider;              //@synthesize attributionProvider=_attributionProvider - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributionString;                                   //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,copy) NSArray * apps;                                                           //@synthesize apps=_apps - In the implementation block
@property (nonatomic,copy) NSArray * urlStrings;                                                     //@synthesize urlStrings=_urlStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                            //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(void)loadView;
-(void)infoCardThemeChanged:(id)arg1 ;
-(NSAttributedString *)attributionString;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(NSArray *)urlStrings;
-(double)extraHeightToReserveInLayout;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)openURL;
-(void)setAttributionProvider:(id<MKPlaceAttributionProvider>)arg1 ;
-(void)setUrlStrings:(NSArray *)arg1 ;
-(id<MKPlaceAttributionProvider>)attributionProvider;
-(MKPlaceAttributionCell *)attributionCell;
-(void)setAttributionCell:(MKPlaceAttributionCell *)arg1 ;
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end
