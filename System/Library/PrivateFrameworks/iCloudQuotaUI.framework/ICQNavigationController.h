/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class _ICQFlowSpecification;

@interface ICQNavigationController : UINavigationController {

	_ICQFlowSpecification* _flowSpecification;

}

@property (nonatomic,readonly) _ICQFlowSpecification * flowSpecification;              //@synthesize flowSpecification=_flowSpecification - In the implementation block
+(Class)viewControllerClassForPageClassIdentifier:(id)arg1 ;
-(id)initWithFlowSpecification:(id)arg1 ;
-(_ICQFlowSpecification *)flowSpecification;
-(id)viewControllerForPage:(id)arg1 ;
@end

