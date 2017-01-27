/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class NSSet, NSArray, UILabel;

@interface SiriMoviesShowtimeListView : UIView {

	BOOL _hasLeadingTypeLabel;
	NSSet* _showtimes;
	NSArray* _labelGroups;
	UILabel* _moreShowtimesIndicator;

}

@property (setter=_setLabelGroups:,getter=_labelGroups,nonatomic,copy) NSArray * labelGroups;                //@synthesize labelGroups=_labelGroups - In the implementation block
@property (getter=_moreShowtimesIndicator,nonatomic,readonly) UILabel * moreShowtimesIndicator;              //@synthesize moreShowtimesIndicator=_moreShowtimesIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasLeadingTypeLabel;                                                       //@synthesize hasLeadingTypeLabel=_hasLeadingTypeLabel - In the implementation block
@property (nonatomic,copy) NSSet * showtimes;                                                                //@synthesize showtimes=_showtimes - In the implementation block
-(BOOL)_isShowtimeAnnotationLabel:(id)arg1 ;
-(void)setHasLeadingTypeLabel:(BOOL)arg1 ;
-(double)ascenderHeight;
-(id)_moreShowtimesIndicator;
-(id)_labelStringForAllTheSameShowtimes;
-(void)_setLabelGroups:(id)arg1 ;
-(BOOL)hasLeadingTypeLabel;
-(id)_labelGroups;
-(void)_calculateLabelFramesForSize:(CGSize)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_mediumFont;
-(id)_createShowtimeLabelAsAnnotation:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_defaultFont;
-(NSSet *)showtimes;
-(void)setShowtimes:(NSSet *)arg1 ;
@end
