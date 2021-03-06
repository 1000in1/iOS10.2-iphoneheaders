/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SiriUITemplateModel, SiriUITemplateViewControllerDelegate;
@interface SiriUITemplateViewController : UIViewController {

	BOOL _active;
	BOOL _compressed;
	id<SiriUITemplateModel> _templateModel;
	id<SiriUITemplateViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<SiriUITemplateModelPrivate> templateModelPrivate; 
@property (assign,nonatomic,__weak) id<SiriUITemplateViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<SiriUITemplateView> view; 
@property (nonatomic,retain) id<SiriUITemplateModel> templateModel;                                 //@synthesize templateModel=_templateModel - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;                                   //@synthesize compressed=_compressed - In the implementation block
+(id)templateViewControllerForTemplateModel:(id)arg1 ;
-(void)setDelegate:(id<SiriUITemplateViewControllerDelegate>)arg1 ;
-(id<SiriUITemplateViewControllerDelegate>)delegate;
-(BOOL)isActive;
-(void)loadView;
-(void)setActive:(BOOL)arg1 ;
-(id)_initWithTemplateModel:(id)arg1 ;
-(id<SiriUITemplateModelPrivate>)templateModelPrivate;
-(void)setCompressed:(BOOL)arg1 ;
-(id<SiriUITemplateModel>)templateModel;
-(void)setTemplateModel:(id<SiriUITemplateModel>)arg1 ;
-(BOOL)isCompressed;
-(void)prepareForDismissal;
@end

