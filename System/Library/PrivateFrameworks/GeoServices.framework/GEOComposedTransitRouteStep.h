/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;
@class GEOTransitStep, NSArray, GEOPBTransitStop, GEOPBTransitHall, GEOInstructionSet, NSString;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {

	int _maneuver;
	unsigned _startTime;
	unsigned _duration;
	GEOTransitStep* _transitStep;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
	NSArray* _steppingArtwork;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	GEOPBTransitHall* _originHall;
	GEOPBTransitHall* _destinationHall;

}

@property (nonatomic,readonly) int maneuver;                                                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * previousTransitStep; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * nextTransitStep; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * originStop;                                                 //@synthesize originStop=_originStop - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * destinationStop;                                            //@synthesize destinationStop=_destinationStop - In the implementation block
@property (nonatomic,readonly) GEOPBTransitHall * originHall;                                                 //@synthesize originHall=_originHall - In the implementation block
@property (nonatomic,readonly) GEOPBTransitHall * destinationHall;                                            //@synthesize destinationHall=_destinationHall - In the implementation block
@property (nonatomic,readonly) GEOTransitStep * transitStep;                                                  //@synthesize transitStep=_transitStep - In the implementation block
@property (nonatomic,readonly) unsigned long long originTransitEntityMuid; 
@property (nonatomic,readonly) unsigned long long destinationTransitEntityMuid; 
@property (nonatomic,readonly) NSString * originStopIntermediateListName; 
@property (nonatomic,readonly) NSString * destinationStopIntermediateListName; 
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(unsigned)startTime;
-(unsigned)distance;
-(BOOL)hasDuration;
-(GEOInstructionSet *)instructions;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(void)_populateIncidentsWithDecoderData:(id)arg1 ;
-(void)_populateArtworksWithDecoderData:(id)arg1 ;
-(GEOTransitStep *)transitStep;
-(GEOComposedTransitRouteStep *)previousTransitStep;
-(GEOComposedTransitRouteStep *)nextTransitStep;
-(id)startingStop;
-(id)endingStop;
-(id)previousStop;
-(id)nextStop;
-(id)nextBoardingStep;
-(id)previousBoardingStep;
-(id)nextAlightingStep;
-(id)previousAlightingStep;
-(SCD_Struct_GE26)startGeoCoordinate;
-(SCD_Struct_GE26)endGeoCoordinate;
-(BOOL)isArrivalStep;
-(unsigned long long)originTransitEntityMuid;
-(unsigned long long)destinationTransitEntityMuid;
-(unsigned long long)_muidForStop:(id)arg1 ;
-(id)_largestEntityAtStop:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(NSString *)originStopIntermediateListName;
-(NSString *)destinationStopIntermediateListName;
-(id)_intermediateListNameForStop:(id)arg1 ;
-(int)maneuver;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(id)routeDetailsPrimaryArtwork;
-(id)routeDetailsSecondaryArtwork;
-(id)steppingArtwork;
-(GEOPBTransitStop *)originStop;
-(GEOPBTransitStop *)destinationStop;
-(GEOPBTransitHall *)originHall;
-(GEOPBTransitHall *)destinationHall;
@end
