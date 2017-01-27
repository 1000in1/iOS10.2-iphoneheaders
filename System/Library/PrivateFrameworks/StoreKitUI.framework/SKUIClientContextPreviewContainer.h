/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIClientContextPreviewContainer.h>

@protocol SKUIClientContextPreviewContainer <JSExport>
@required
-(void)previewDocument:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext, SKUIPreviewContainerViewController;

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer> {

	SKUIClientContext* _clientContext;
	SKUIPreviewContainerViewController* _previewContainerViewController;

}
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3 ;
-(void)previewDocument:(id)arg1 :(id)arg2 ;
@end
