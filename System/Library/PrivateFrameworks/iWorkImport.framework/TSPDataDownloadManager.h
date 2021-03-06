/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPDataDownloadManagerDelegate;
@class TSPObjectContext, TSPDocumentResourceDataProvider;

@interface TSPDataDownloadManager : NSObject {

	TSPObjectContext* _context;
	TSPDocumentResourceDataProvider* _docServerDataProvider;
	id<TSPDataDownloadManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TSPDataDownloadManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 ;
-(id)init;
-(void)setDelegate:(id<TSPDataDownloadManagerDelegate>)arg1 ;
-(id<TSPDataDownloadManagerDelegate>)delegate;
-(id)initWithContext:(id)arg1 ;
@end

