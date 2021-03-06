/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ABContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonViewControllerDelegate;
@class NSArray, CNContactViewController, ABContactViewController, UIView, NSString, UIFont, UIImage;

@interface ABPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, UIViewControllerRestoration> {

	BOOL _badgeEmailPropertiesForMailVIP;
	BOOL _allowsEditing;
	BOOL _allowsActions;
	BOOL _shouldShowLinkedPeople;
	BOOL _highlightedImportant;
	BOOL _allowsSharing;
	BOOL _allowsAddToFavorites;
	BOOL _allowsDeletion;
	BOOL _allowsConferencing;
	BOOL _allowsContactBlocking;
	int _style;
	int _highlightedProperty;
	int _highlightedMultiValueIdentifier;
	const void* _addressBook;
	const void* _displayedPerson;
	id<ABPersonViewControllerDelegate> _personViewDelegate;
	NSArray* _displayedProperties;
	CNContactViewController* _cnContactViewController;
	ABContactViewController* _contactViewController;
	UIView* _personHeaderView;

}

@property (assign,nonatomic) int style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int highlightedProperty;                                            //@synthesize highlightedProperty=_highlightedProperty - In the implementation block
@property (assign,nonatomic) int highlightedMultiValueIdentifier;                                //@synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlightedImportant;                                          //@synthesize highlightedImportant=_highlightedImportant - In the implementation block
@property (nonatomic,retain) CNContactViewController * cnContactViewController;                  //@synthesize cnContactViewController=_cnContactViewController - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                 //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) BOOL allowsAddToFavorites;                                          //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletion;                                                //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsCancel; 
@property (assign,nonatomic) BOOL allowsSounds; 
@property (assign,nonatomic) BOOL allowsVibrations; 
@property (assign,nonatomic) BOOL allowsConferencing;                                            //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                         //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,retain) ABContactViewController * contactViewController;                    //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,readonly) UIView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView;                                          //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (assign,nonatomic) BOOL shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customHeaderView; 
@property (nonatomic,retain) UIView * customFooterView; 
@property (nonatomic,copy) NSString * attribution; 
@property (assign,nonatomic) BOOL shareMessageBodyIsHTML; 
@property (nonatomic,copy) NSString * shareMessageBody; 
@property (nonatomic,copy) NSString * shareMessageSubject; 
@property (nonatomic,copy) NSString * shareLocationURL; 
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage; 
@property (nonatomic,copy) id willTweetLocationCallback; 
@property (nonatomic,copy) id willWeiboLocationCallback; 
@property (assign,nonatomic) BOOL badgeEmailPropertiesForMailVIP;                                //@synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP - In the implementation block
@property (assign,nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;              //@synthesize personViewDelegate=_personViewDelegate - In the implementation block
@property (assign,nonatomic) const void* addressBook;                                            //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic) const void* displayedPerson;                                        //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                        //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                 //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkedPeople;                                        //@synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(int)style;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setStyle:(int)arg1 ;
-(UIView *)tableHeaderView;
-(CGSize)preferredContentSize;
-(id)initWithStyle:(int)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(NSString *)attribution;
-(void)setAttribution:(NSString *)arg1 ;
-(BOOL)allowsCancel;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UIView *)customHeaderView;
-(void)setCustomHeaderView:(UIView *)arg1 ;
-(NSArray *)displayedProperties;
-(void)setHighlightedProperty:(int)arg1 ;
-(void)setAllowsAddToFavorites:(BOOL)arg1 ;
-(BOOL)allowsActions;
-(BOOL)allowsSharing;
-(BOOL)allowsAddToFavorites;
-(BOOL)allowsContactBlocking;
-(BOOL)allowsConferencing;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3 ;
-(void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(BOOL)arg7 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5 ;
-(id)newActionButton;
-(double)ab_heightToFitForViewInPopoverView;
-(const void*)displayedPerson;
-(BOOL)handleExternalChange;
-(CNContactViewController *)cnContactViewController;
-(void)setCnContactViewController:(CNContactViewController *)arg1 ;
-(id)displayedUIPerson;
-(void)setDisplayedUIPerson:(id)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(BOOL)arg1 ;
-(void)setAllowsVibrations:(BOOL)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(BOOL)arg1 ;
-(BOOL)allowsSounds;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(BOOL)shouldShowLinkedPeople;
-(BOOL)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4 ;
-(BOOL)allowsVibrations;
-(BOOL)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1 ;
-(BOOL)shouldShowLinkingUIOnCard;
-(BOOL)appearsInLinkingPeoplePicker;
-(void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1 ;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2 ;
-(BOOL)manuallyLinkPerson:(id)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(id<ABPersonViewControllerDelegate>)personViewDelegate;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(BOOL)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(BOOL)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 ;
-(void)reloadContactViewController;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3 ;
-(void)setHighlightedMultiValueIdentifier:(int)arg1 ;
-(void)setHighlightedImportant:(BOOL)arg1 ;
-(int)highlightedProperty;
-(int)highlightedMultiValueIdentifier;
-(BOOL)highlightedImportant;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 ;
-(BOOL)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)setCustomFooterView:(UIView *)arg1 ;
-(UIView *)customFooterView;
-(void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(BOOL)_updatePeopleDataForExternalChange;
-(void)_updateTableDataForExternalChange;
-(BOOL)_updateAllDataForExternalChange;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(void)personViewController:(id)arg1 willSetEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)cancelEditing:(BOOL)arg1 ;
-(BOOL)allowsDeletion;
-(ABContactViewController *)contactViewController;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(void)setContactViewController:(ABContactViewController *)arg1 ;
-(id)styleProvider;
-(id)editDelegate;
-(void)setEditDelegate:(id)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
-(void)setAddressBook:(const void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsSounds:(BOOL)arg1 ;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(BOOL)arg5 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(void)setShouldShowLinkedPeople:(BOOL)arg1 ;
-(void)setPersonViewDelegate:(id<ABPersonViewControllerDelegate>)arg1 ;
-(const void*)addressBook;
-(UIFont *)messageFont;
@end

