/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MXExtensionServiceVendor.h>
#import <libobjc.A.dylib/_MXExtensionVendorContextXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class _MXExtensionRequestDispatcher, NSExtensionContext, NSString;

@interface _MXExtensionRequestHandler : NSObject <_MXExtensionServiceVendor, _MXExtensionVendorContextXPCConnectionDelegate, NSExtensionRequestHandling> {

	_MXExtensionRequestDispatcher* _requestDispatcher;
	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSExtensionContext *)extensionContext;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
@end
