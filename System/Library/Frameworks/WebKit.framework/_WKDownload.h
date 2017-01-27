/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebView, NSURLRequest, NSString;

@interface _WKDownload : NSObject <WKObject> {

	ObjectStorage<WebKit::DownloadProxy> _download;
	WeakObjCPtr<WKWebView> _originatingWebView;

}

@property (assign,nonatomic,__weak) WKWebView * originatingWebView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(Object*)_apiObject;
-(WKWebView *)originatingWebView;
-(void)setOriginatingWebView:(WKWebView *)arg1 ;
@end
