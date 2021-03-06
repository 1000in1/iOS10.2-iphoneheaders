/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSItemProvider, VSFailable;

@interface VSImageLoadOperation : VSAsyncOperation {

	NSItemProvider* _itemProvider;
	VSFailable* _result;
	CGSize _preferredImageSize;

}

@property (nonatomic,retain) VSFailable * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,readonly) CGSize preferredImageSize;                  //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
-(id)init;
-(void)cancel;
-(VSFailable *)result;
-(void)setResult:(VSFailable *)arg1 ;
-(NSItemProvider *)itemProvider;
-(CGSize)preferredImageSize;
-(void)executionDidBegin;
-(id)initWithItemProvider:(id)arg1 preferredImageSize:(CGSize)arg2 ;
@end

