/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNContact;

@interface CKDetailsContactsViewModel : NSObject {

	BOOL _showsLocation;
	BOOL _showsMessageButton;
	BOOL _showsFaceTimeVideoButton;
	BOOL _showsPhoneButton;
	NSString* _preferredHandle;
	NSString* _entityName;
	NSString* _locationString;
	CNContact* _contact;

}

@property (nonatomic,copy) NSString * preferredHandle;                   //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (nonatomic,copy) NSString * entityName;                        //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,copy) NSString * locationString;                    //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL showsLocation;                         //@synthesize showsLocation=_showsLocation - In the implementation block
@property (assign,nonatomic) BOOL showsMessageButton;                    //@synthesize showsMessageButton=_showsMessageButton - In the implementation block
@property (assign,nonatomic) BOOL showsFaceTimeVideoButton;              //@synthesize showsFaceTimeVideoButton=_showsFaceTimeVideoButton - In the implementation block
@property (assign,nonatomic) BOOL showsPhoneButton;                      //@synthesize showsPhoneButton=_showsPhoneButton - In the implementation block
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(CNContact *)contact;
-(NSString *)entityName;
-(void)setPreferredHandle:(NSString *)arg1 ;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(void)setShowsMessageButton:(BOOL)arg1 ;
-(void)setShowsFaceTimeVideoButton:(BOOL)arg1 ;
-(void)setShowsPhoneButton:(BOOL)arg1 ;
-(id)initWithPreferredHandle:(id)arg1 entityName:(id)arg2 locationString:(id)arg3 showsLocation:(BOOL)arg4 showsMessageButton:(BOOL)arg5 showsFaceTimeVideoButton:(BOOL)arg6 showsPhoneButton:(BOOL)arg7 contact:(id)arg8 ;
-(NSString *)preferredHandle;
-(BOOL)showsLocation;
-(BOOL)showsMessageButton;
-(BOOL)showsFaceTimeVideoButton;
-(BOOL)showsPhoneButton;
-(void)setContact:(CNContact *)arg1 ;
@end
