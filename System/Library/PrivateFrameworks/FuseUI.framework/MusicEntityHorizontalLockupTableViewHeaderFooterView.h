/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicTableViewSelectableHeaderFooterView.h>
#import <libobjc.A.dylib/MusicEntityHorizontalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>

@class MusicEntityHorizontalLockupView, MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityHorizontalLockupTableViewHeaderFooterView : MusicTableViewSelectableHeaderFooterView <MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring> {

	MusicEntityHorizontalLockupView* _lockupView;

}

@property (nonatomic,readonly) MusicEntityHorizontalLockupView * lockupView;                    //@synthesize lockupView=_lockupView - In the implementation block
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
+(Class)lockupViewClass;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(void)setEntityDisabled:(BOOL)arg1 ;
-(void)updateForAsynchronousPropertyLoadCompleted;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 ;
-(MusicEntityHorizontalLockupView *)lockupView;
@end
